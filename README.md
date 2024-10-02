# BashLite

## Overview
BashLite is a simple shell implementation, inspired by bash. This project aims to create a basic command-line interface that can execute commands, handle pipes, manage environment variables, and implement some built-in functions.

## Features

- Display a prompt for new commands
- Maintain a working history
- Execute commands (using PATH, relative, or absolute paths)
- Handle single quotes (') and double quotes (")
- Implement input/output redirections (<, >, <<, >>)
- Support pipes (|)
- Expand environment variables
- Handle $? for exit status
- Manage ctrl-C, ctrl-D, and ctrl-\ signals
- Implement built-in commands:
  - echo (with -n option)
  - cd
  - pwd
  - export
  - unset
  - env
  - exit

## Building the Project

To compile the project, use the provided Makefile:

```
make
```

This will generate the `BashLite` executable.

## Usage

Run the shell by executing:

```
./BashLite
```

You can then enter commands as you would in a regular shell.

## Implementation Details

- Written in C
- Uses readline for input handling
- Adheres to specific coding standards (as per project requirements)
- Manages memory allocation carefully to prevent leaks
