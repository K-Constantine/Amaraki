# Amaraki

A Dropbox Djinni wrapper for simplifying and modularizating your code base. 

## Build Project

You basically need nothing more than just a make command to get started.

```
make {platform} project={project_name}
```
### Example 

For Ios plaform

```
make build_ios project=example
```
For Android platform
```
make android project=example
```

# Generate A Module

How to start coding? It begins with a module which is included in the main project during compilation.

To generate a module, you'd have to run the generate.sh script like this;

```
./generate.sh -f {module_name} -p {project_name}
```
### Example

Here is a simple example

```
./generate.sh -f example -p example
```
## Authors

* **Kevin Constantine** - *Initial work* - [K-Constantine](https://github.com/K-Constantine)

## License

This project is licensed under the MIT License
