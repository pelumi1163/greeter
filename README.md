# greeter

![greeter](https://user-images.githubusercontent.com/1110183/222855052-03506dac-cf6b-4f1a-bab3-2b6270eecadc.gif)


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
