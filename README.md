# sgi_demos

SGI demos of OpenGL, built using CMake and modified so it runs on modern hardware and Windows.

Below are the changes made to each demo:

| Demo | Changes |
| ---- | ------- |
| Atlantis | Cap to run on a fixed timestep of 30 FPS. |
| Ideas | Implement `gettimeofday` for Windows. |
| Yacme | Remove `YACME_DBG` macro so `main` can be defined. |

## Table of Contents

- [sgi\_demos](#sgi_demos)
  - [Table of Contents](#table-of-contents)
  - [Cloning the Repository](#cloning-the-repository)
  - [Building the Project](#building-the-project)
    - [Visual Studio](#visual-studio)
      - [Install build tools](#install-build-tools)
      - [Building sgi\_demos in Visual Studio](#building-sgi_demos-in-visual-studio)
    - [VSCode](#vscode)
      - [Install extensions](#install-extensions)
      - [Building sgi\_demos in VSCode](#building-sgi_demos-in-vscode)

## Cloning the Repository

This repository uses submodules to manage dependencies. To clone the repository, use the following commands:

```bash
git clone https://github.com/dante1130/sgi_demos
git submodule update --init --recursive
```

## Building the Project

This project uses CMake to generate build files.

### Visual Studio

#### Install build tools

- [Visual Studio](https://visualstudio.microsoft.com/downloads/)
- Install the component "`C++ CMake tools for Windows`".

#### Building sgi_demos in Visual Studio

1. Open `Visual Studio` as Administrator.
2. Choose the option “`Continue without code`”.
3. Navigate to the top left and select `File -> Open -> CMake`.
4. Navigate to the root directory of `sgi_demos`.
5. Open `CMakeLists.txt`.
6. Navigate to `Project` on the navigation bar and click “`Configure Cache`”.
7. Once the output window says “`CMake generation finished`”, build the projects by `Build -> Build All`.
8. Once the build is finished, you may select the project you want to run by clicking on the dropdown menu next to the green arrow and selecting the project you want to run.
9. Run the project by clicking the green arrow.
10. Alternatively, you may navigate to the `out/<Configuration>/src/<target>` directory and run the executable directly.

### VSCode

#### Install extensions

- [VSCode](https://code.visualstudio.com/download)
- Install the extension [CMake tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools).

#### Building sgi_demos in VSCode

1. Open `VSCode`.
2. Navigate to the top left and select `File -> Open folder...`.
3. Select to open to the root directory of `sgi_demos`.
4. Open command palette. (Ctrl+Shift+P)
   1. `CMake: Select a kit` -> Your compiler of choice (`Clang` or `MSVC`)
   2. `CMake: Select variant` -> `<configuration>` (`Debug` or `Release`)
   3. `CMake: Set build target` -> `<target>`
   4. `CMake: Build`
   5. `CMake: Run without debugging`
