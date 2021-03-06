# Behavior Driven Development (BDD) Hello test with Cucumber-cpp

## Contents

* [Introduction](#introduction)
* [Project Hierarchy](#project-hierarchy)
* [Getting Started](#getting-started)
* [Support](#support)
* [FAQ](#faq)
* [Development](#development)
* [License](#license)
* [References](#references)

## Introduction

Project to test software behavior driven development (BDD) using cucumber-cpp, the c++ version of cucumber.

[Contents](#contents)

## Project Hierarchy

```console
.
├── CMakeLists.txt
├── README.md
├── src
│   ├── CMakeLists.txt
│   ├── Hello.cpp
│   └── Hello.h
└── tests
    └── features
        ├── CMakeLists.txt
        ├── hello.feature
        ├── step_definitions
        │   ├── cucumber.wire
        │   └── HelloBDDSteps.cpp
        └── support
            └── env.rb

```

[Contents](#contents)

## Getting Started

### Requirements
* Cmake
* Boost
* Google Test
* Cucumber
* Ruby

### Installation

#### Install cmake
```console
$ wget https://cmake.org/files/v3.11/cmake-3.11.1-Linux-x86_64.sh
$ chmod +x cmake-3.11.1-Linux-x86_64.sh
$ sudo mv cmake-3.11.1-Linux-x86_64 /opt
$ sudo rm /usr/bin/cmake
cd /usr/local/bin
$ sudo ln -s /opt/cmake-3.11.1-Linux-x86_64/bin/ccmake
$ sudo ln -s /opt/cmake-3.11.1-Linux-x86_64/bin/cmake
$ sudo ln -s /opt/cmake-3.11.1-Linux-x86_64/bin/cmake-gui
$ sudo ln -s /opt/cmake-3.11.1-Linux-x86_64/bin/cpack
$ sudo ln -s /opt/cmake-3.11.1-Linux-x86_64/bin/ctest
```

#### Install ruby
```console
$ sudo apt install ruby-full ruby-dev ruby-rspec rake rubygems bundler
```

#### Install Cucumber pre-requisites
```console
$ sudo gem install bundler
$ cd /var/lib/gems/2.5.0/gems/bundler-1.16.2/lib/bundler/templates/
$ bundle install
```

#### Install Cucumber
```console
$ sudo gem install cucumber --version 2.99.0   NOTE: The newest version has conflicts with cucumber-cpp
$ git clone https://github.com/cucumber/cucumber-cpp.git
$ cd cucumber-cpp/
$ git submodule init
$ git submodule update
$ cmake -E make_directory build
$ cmake -E chdir build cmake -DCUKE_ENABLE_EXAMPLES=on ..
it sent the following error but it created the Makefiles:
install(EXPORT "CucumberCpp" ...) includes target "cucumber-cpp-nomain" which requires target "json_spirit.header" that is not in the export set.
$ cmake --build build
$ cmake --build build --target test
$ sudo cmake --build build --target install
$ cmake --build build --target features
$ build/examples/Calc/BoostCalculatorSteps >/dev/null &
$ cucumber examples/Calc
```

#### Install project
```console
$ git clone https://github.com/NorbertoBurciaga/behavior-driven-development-hello.git
$ cd HelloBDD
$ mkdir build
$ cd build
$ cmake .. && make
```

### Testing

```console
HelloBDD$ cd tests
HelloBDD/tests$ ../build/bin/HelloBDDSteps >/dev/null &
HelloBDD/tests$ cucumber
```

It should show the following screen if everything is ok:

Feature: Application should be able to print greeting message Hello BDD!

  Scenario: Should be able to greet with Hello BDD! message # features/hello.feature:5
    Given an instance of Hello class is created             # HelloBDDSteps.cpp:12
    When the sayHello method is invoked                     # HelloBDDSteps.cpp:18
    Then it should return "Hello BDD!"                      # HelloBDDSteps.cpp:24

1 scenario (1 passed)
3 steps (3 passed)
0m0.036s
[1]+  Done                    ../build/bin/HelloBDDSteps > /dev/null


### Documentation

[Contents](#contents)

## Support
Technical support is available in 

[Contents](#contents)

## FAQ

[Contents](#contents)

## Development
If you want to contribute....

[Contents](#contents)

## License

Copyright (c) 2018, Respective Authors all rights reserved.

The MIT License

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

[Contents](#contents)

## References

1 Expect C++ Programming, Authors: Jeganathan Swaminathan, Maya Posch, Jacek Galowicz, 2018

[Contents](#contents)
