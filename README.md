# ANNI [![Build Status](https://travis-ci.org/BrainStone/ANNI.svg?branch=master)](https://travis-ci.org/BrainStone/ANNI)

**A**rtificial **N**eural **N**etwork **I**ntelligence

ANNI is a project designed to create a self teaching AI for games like Chess or Go.

It is in fact very similar to AlphaZero and LeelaZero. This is mainly because these two projects insprired me to start this project.

Contributions are always welcome!

## Cloning

Since this repo is recursive, you need to clone it recursively

    $ git clone --recursive https://github.com/BrainStone/ANNI.git

If you forgot to do that, you can download the submodules later by running

    $ git submodule update --init --recursive

### Hooks

This repo also provides a few simple hooks to make working with submodules easier. While it is not necessary to do this step, it is recommended.

    $ cp -v .hooks/* .git/hooks/

## Building

This project uses gradle for building. The nice thing about gradle is that you only need to have Java (and a C++ compiler of your choice) installed.  
Building is super straight forward:

    $ ./gradlew build

This will build the project and all its dependencies.

Binaries for the ANNI library will be found inside `ANNI/build/libs/anni`.  
Binaries for ANNI-Chess will be found inside `ANNI/implementations/build/exe/anniChess`.

### Documentation

This project comes with a Doxyfile. You can either generate the documentation manually by using Doxygen from the command line, or by running this gradle task:

    $ ./gradlew doc

## Licenses

The main project and library ANNI is licensed under the MIT license.

Any implementations however are licensed under the GPLv3 license.
