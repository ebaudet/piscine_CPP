# piscine_CPP

This repository contains exercises from the 42 C++ Piscine. The code is
organized by day (`d00`, `d01`, etc.) and exercise (`ex00`, `ex01`, etc.).

The project is written in C++ and mostly follows the original piscine style:
small standalone programs, one concept per exercise, and compilation with
`g++` using `-Wall -Wextra -Werror` where Makefiles are present.

## Current Content

| Day | Exercises present | Main topics |
| --- | --- | --- |
| `d00` | `ex00`, `ex01` | Basic C++ syntax, I/O, classes, simple phonebook |
| `d01` | `ex00`, `ex01`, `ex02`, `ex04` | Memory allocation, references, pointers, basic object lifetime |
| `d02` | `ex00`, `ex01`, `ex02` | Fixed-point number class, operators, comparisons |
| `d03` | `ex00` to `ex03` | Inheritance, constructors/destructors, class hierarchies |
| `d04` | `ex00` | Polymorphism, virtual functions, inheritance behavior |
| `d05` | `ex00` to `ex03` | Exceptions, bureaucrat/form workflow, abstract forms, intern factory |
| `d07` | `ex00` to `ex02` | Templates, generic functions, template arrays |
| `d08` | `ex00` to `ex02` | STL containers, algorithms, iterable stack, spans |

There is also an `example/` directory with a small class example.

## Repository Layout

```text
.
|-- d00/
|-- d01/
|-- d02/
|-- d03/
|-- d04/
|-- d05/
|-- d07/
|-- d08/
`-- example/
```

Each exercise directory usually contains its own `main.cpp` and the classes
needed for that exercise. Some exercises include a `Makefile`; others currently
only contain source files.

## Build

For exercises that include a Makefile, build from inside the exercise directory:

```sh
cd d00/ex00
make
./megaphone
```

Available Makefile targets follow the usual 42 convention:

```sh
make
make clean
make fclean
make re
```

Makefiles currently exist in:

```text
d00/ex00
d00/ex01
d07/ex00
d07/ex01
d07/ex02
```

Exercises without a Makefile can be compiled manually with `g++`. For example:

```sh
g++ -Wall -Wextra -Werror d05/ex03/*.cpp -o d05_ex03
./d05_ex03
```

Adjust the source list when an exercise uses only a subset of files.

## Current State

- The repository contains completed or in-progress exercise implementations from
  several C++ Piscine days.
- Build automation is partial: only `d00` and `d07` currently include Makefiles.
- No central test runner is present.
- Some generated build artifacts may exist locally, such as `.obj/` directories
  or compiled binaries.

## Useful Commands

List all source files:

```sh
find . -name '*.cpp' -o -name '*.hpp'
```

Build a Makefile-based exercise:

```sh
cd d07/ex02
make re
./array
```

Clean a Makefile-based exercise:

```sh
make fclean
```
