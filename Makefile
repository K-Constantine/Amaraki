.PHONY: android

ios_build:
	cd bin; bash install.sh -p $(project) -i com.siliconbear.$(project) -n $(project) -f SB -a $(project) -r ios

android:
	cd bin; bash install.sh -p app -i com.siliconbear.$(project) -n $(project) -f SB -a app -r android
