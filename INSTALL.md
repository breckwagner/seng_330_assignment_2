


# Installing

To compile the project, use the commands while in the src directory:

```shell
$ cmake ./
$ make
```

To run the project:

```shell
$ ./run
```

To install the tools to make this on Mac OS X:

```shell
$ brew install protobuf doxygen cmake
```

Generating doc files is done (in the src directory) by:

```shell
$ doxygen ../doxyconfig
```


Generating the protocol buffer classes:
```shell
$ protoc --proto_path=./src --cpp_out=./src machine.proto
```

The unit tests can be compiled by downloading gtest from github following there steps
