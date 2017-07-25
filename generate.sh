#!/bin/bash

NAME='example'
PROJECT_NAME='naomi'

while [[ $# > 1 ]]
do
	key="$1"
	case $key in -f|--name)
		NAME="$2"
		shift ;;
	-p|--project)
		PROJECT_NAME="$2"
		shift;;
	esac
	shift
done

mkdir $NAME
mkdir $NAME/src

cp bin/.module/.module.djinni $NAME/$NAME.djinni
cp bin/.module/.module.gyp $NAME/$NAME.gyp

sed -i -e "s/{NAME}/$NAME/g" $NAME/$NAME.gyp
sed -i -e "s/{PROJECT_NAME}/$PROJECT_NAME/g" $NAME/$NAME.gyp

rm -rf $NAME/$NAME.gyp-e

echo "\"$NAME\";" >> djinni.conf
