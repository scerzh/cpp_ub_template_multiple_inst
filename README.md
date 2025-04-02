Let's assume you cloned the repo into `cpp_ub_template_multiple_inst` folder and created `build` folder for building.

Configure the project with `cmake` altering values of the following two options `CMAKE_BUILD_TYPE` and `FORWARD_LINK_ORDER`. Use 4 possible sets of values

* `CMAKE_BUILD_TYPE=Debug FORWARD_LINK_ORDER=On`
* `CMAKE_BUILD_TYPE=Debug FORWARD_LINK_ORDER=Off`
* `CMAKE_BUILD_TYPE=Release FORWARD_LINK_ORDER=On`
* `CMAKE_BUILD_TYPE=Release FORWARD_LINK_ORDER=Off`

and test the output.

```bash
rm -rf build
mkdir build
cmake -S cpp_ub_template_multiple_inst -B build -DCMAKE_BUILD_TYPE=Debug -DFORWARD_LINK_ORDER=On
cmake --build build -j`nproc`
build/test
```

```bash
rm -rf build
mkdir build
cmake -S cpp_ub_template_multiple_inst -B build -DCMAKE_BUILD_TYPE=Debug -DFORWARD_LINK_ORDER=Off
cmake --build build -j`nproc`
build/test
```

```bash
rm -rf build
mkdir build
cmake -S cpp_ub_template_multiple_inst -B build -DCMAKE_BUILD_TYPE=Release -DFORWARD_LINK_ORDER=On
cmake --build build -j`nproc`
build/test
```

```bash
rm -rf build
mkdir build
cmake -S cpp_ub_template_multiple_inst -B build -DCMAKE_BUILD_TYPE=Release -DFORWARD_LINK_ORDER=Off
cmake --build build -j`nproc`
build/test
```

We observed the below outputs

```
intSum1 = 15 intSum2 = 15
intSum1 = 115 intSum2 = 115
intSum1 = 15 intSum2 = 115
intSum1 = 15 intSum2 = 115
```
