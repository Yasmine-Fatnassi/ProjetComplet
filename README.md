# MyProject

This is a sample project to demonstrate the use of CMake, Doxygen, CTest, and GitHub Actions.

## Building the project

```sh
mkdir build
cd build
cmake ..
cmake --build .
\```

## Running the tests

```sh
ctest --test-dir build
\```

## Generating the documentation

```sh
cmake --build build --target doc_doxygen
\```

## CI/CD

This project uses GitHub Actions for continuous integration. On each push to the `main` branch, the project is built, tests are run, and the documentation is generated and pushed back to the repository. The push will be refused if the tests fail.
