# greeter
![greeter](https://user-images.githubusercontent.com/1110183/222854477-1598b9c8-c7b6-480e-9bc6-fb0aa4324806.gif)



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
