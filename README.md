# Amaraki
Djinni is a tool for generating cross-language type declarations and interface bindings. It's designed to connect C++ with either Java or Objective-C. Python support is available in an experimental version on the python branch.

The engineers at Dropbox use Djinni to interface cross-platform C++ library code with platform-specific Java and Objective-C on Android and iOS.

It was announced at CppCon 2014. You can see the [slides](https://bit.ly/djinnitalk) and [video](https://bit.ly/djinnivideo). For more info about Djinni and how others are using it, check this [Djinni by Dropbox](https://github.com/dropbox/djinni).

Amaraki is simply a Djinni wrapper. It is focused towards modularizing your functionalities and achieving a sustainable code base, reducing stress in project setup with the ease of managing both platform independently. It comes prebuilt with [curl](http://curl.haxx.se/libcurl), [restful_mapper](https://github.com/logandk/restful_mapper), [yajl](http://lloyd.github.io/yajl), [curlcpp](https://github.com/JosephP91/curlcpp) and [rapidjson](https://github.com/miloyip/rapidjson).

## Build Project

You basically need nothing more than just a make command to get started.

```
make {platform} project={project_name}
```
### Example 

For Ios plaform

```
make ios_build project=example
```
For Android platform
```
make android project=example
```

# Generate A Module

How to start coding? It begins with a module which is included in the main project during a build.

To generate a module, you'd have to run the generate.sh script like this:

```
./generate.sh -f {module_name} -p {project_name}
```
### Example

Here is a simple example

```
./generate.sh -f test -p example
```
## Authors

* **Kevin Constantine** - *Initial work* - [Monodroid](https://github.com/K-Constantine/Monodroid)

## License

This project is licensed under the MIT License
