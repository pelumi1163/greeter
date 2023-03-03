# greeter

![greeter_cropped2](https://user-images.githubusercontent.com/1110183/222794895-e0e187ef-958a-4f42-9fde-dea831031a8e.gif)

Test assignment for build engineer to build CI/CD. Application greets any given names. Names can be provided both ineractively and via command line.

If you don't know any human names, feel free to use [Online human name generator](https://blog.reedsy.com/character-name-generator/fantasy/human/)


# Building
```
mkdir build && cd build
cmake .. -GNinja
cmake --build . --target all
```

## Dependencies
C++17-compatitable compiler (preferably clang-13), Ninja (>=1.10), CMake (>=3.5)

# Running
Just run in terminal
