# ANNI [![Build Status](https://travis-ci.org/BrainStone/ANNI.svg?branch=master)](https://travis-ci.org/BrainStone/ANNI)

**A**rtificial **N**eural **N**etwork **I**ntelligence

ANNI is a project designed to create a self teaching AI for games like Chess or Go.

It is in fact very similar to AlphaZero and LeelaZero. This is mainly because these two projects insprired me to start this project.

Contributions are always welcome!

## Building

This project uses gradle for building. The nice thing about gradle is that you only need to have Java (and a C++ compiler of your choice) installed.  
Building is super straight forward:

    $ ./gradlew build

This will build the project and all its dependencies.

Binaries for ANNI-Chess will be found inside `ANNI/build/exe/anniChess`.  
Binaries for the ANNI library will be found inside `ANNI/anni/build/libs/anni`
