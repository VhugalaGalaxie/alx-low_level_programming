0x18. C - Dynamic libraries
===========================

-   By Julien Barbier

Resources
---------

**Read or watch**:

-   [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://alx-intranet.hbtn.io/rltoken/XLLmLISlteUIxrLzNdm3_Q "What is difference between Dynamic and Static library (Static and Dynamic linking)")
-   [create dynamic libraries on Linux](https://alx-intranet.hbtn.io/rltoken/JEqzgE_pPe48rvbspGL-2g "create dynamic libraries on Linux")
-   [Technical Writing](https://alx-intranet.hbtn.io/rltoken/dAV47Y4Iulj75aeSxpYHbQ "Technical Writing")

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/wZXKCWgm5hGCD0ZKtZAOrQ "explain to anyone"), **without the help of Google**:

### General

-   What is a dynamic library, how does it work, how to create one, and how to use it
-   What is the environment variable `$LD_LIBRARY_PATH` and how to use it
-   What are the differences between static and shared libraries
-   Basic usage `nm`, `ldd`, `ldconfig`

Requirements
------------

### C

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc... is forbidden
-   You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
-   Don't forget to push your header file

### Bash

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your scripts will be tested on Ubuntu 20.04 LTS
-   All your files should end with a new line ([why?](http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789))
-   The first line of all your files should be exactly `#!/bin/bash`
-   A `README.md` file, at the root of the folder of the project, describing what each script is doing
-   All your files must be executable

More Info
---------

### Manual QA Review

**It is your responsibility to request a review for your blog from a peer before the project's deadline. If no peers have been reviewed, you should request a review from a TA or staff member.**
