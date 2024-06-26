


---
- So my very first game is an SDL2 game which you can find [here](https://github.com/pTSern/MyGame).
- For me, this game is kind of good. It is very easy to upgrade which I focused on at 90% when making this game.
- But it still has some critical crashing bugs and can not be buildable (cause I did not have any idea about `CMake` )
- Because of that, I design to remake a new game after 2 years of learning and making games. (Insert Yay noise)
- Let's see what I can cook.
---

# Dependencies
- [VCPKG](https://github.com/microsoft/vcpkg)
- [SDL2](https://www.libsdl.org/) - `x64-windows-static` (Recommend to use `vcpkg` to install)
- [CMake](https://cmake.org/)

# Neovim
- [Neovide](https://neovide.dev/) - Recommend
- [My-NVConfig](https://github.com/pTSern/LuaNVim)

- To Clangd understand `SDL2` libs. Goto `%localappdata%\clangd\config.yaml` (Create if it does not exist). Add:
```
CompileFlags:
    Add: ["-I(YOUR SDL2 include folder)"]
```

# Build
- cd to `build` folder.
- Execute `cmake .. --preset debug` for pre-debuging the code.
- After everything is ok. Do `cmake --build .` for building the game.
- - The game is built in `Debug\pTSDLGame.exe`
