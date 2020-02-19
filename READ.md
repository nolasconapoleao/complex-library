#Complex library

Library with methods to handle complex numbers in 2 dimensions

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

What things you need to install the software and how to install them

```
clang-format
cmake
doxygen
```

### Building

1. Run the cmake project and output the make recipe in the build folder

2. Build the library and all the executables defined in the Cmake 

## Running the tests

After the compilation you can run all the tests by using:
```
cd <project>/build/tests
ctest
```

### And coding style tests

In order to merge to master the code in the pull request should be formatted using the checks defined in <project>/.clang-format. To run the clang-format use:
```
clang-format -i $file
```

Another way is to use automatic formatting.
```
cd <project-path>
cp tools/pre-commit.sh .git/hooks/pre-commit
chmod +x .git/hooks/pre-commit
```

## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

## Authors

* **Nolasco Napoleao** - *Initial work* - [nolasconapoleao](https://github.com/nolasconapoleao)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details
