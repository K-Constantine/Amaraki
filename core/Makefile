# rule to lazily clone gyp
./deps/gyp:
	git clone --depth 1 https://chromium.googlesource.com/external/gyp.git ./deps/gyp

clean:
	rm -rf generated-src
	@echo "example cleaned up..."

./build_ios/example.xcodeproj: example/libexample.gyp ./support-lib/support_lib.gyp example/example.djinni 
	sh example/run_djinni.sh 
	deps/gyp/gyp --depth=. -f xcode -DOS=ios --generator-output ../build_ios -Icommon.gypi ./example/libexample.gyp

ios: clean ./build_ios/example.xcodeproj
	xcodebuild -workspace ../ios/example/example.xcworkspace \
	-scheme example \
	-configuration 'Debug' \
	-sdk iphonesimulator 





