# ef.qt Hello World
Hello World for ef.qt

![image](https://user-images.githubusercontent.com/34613827/70925848-ef31e900-2066-11ea-8eb3-2569df63d6df.png)

Screenshot above is this example running on a themed KDE desktop.

## How to build

### Using cmake

```shell script
# generate ef.hpp
efqt generate

# create build directory
mkdir build
cd build

# build
cmake ..
make -j `nproc`

# run built demo
./efqt_helloworld
```

### Using qmake

```shell script
# generate ef.hpp
efqt generate
```

Then just open this project in Qt Creator and click `Run`.