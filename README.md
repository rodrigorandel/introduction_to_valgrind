# Tutorial: Introduction to Valgrind
This tutorial aims to cover the basic principles of [Valgrind](http://valgrind.org).  It was presented by [Rodrigo Randel](https://www.gerad.ca/events/1576).
    
## Motivation
Valgrind is a widely used programming tool for debugging and profiling programs. Valgrind's tools are designed to dynamically perform analysis of your program and automatically detect commons and rares bugs, many of which would take hours to be found manually, or would never be found at all.

By using Valgrind tools, such as the memory checker and the cache profiler, you can easily identify when a bug occurs, and get instant feedback about what the bug is, where it occurred, and why. As for Valgrind's profiling tools, use those whenever you want to gather information about how your program is spending its time, or you if want to speed it up. Moreover, Valgrind works with programs written in any language, such as C, C++, Java, Python and many others.

In this tutorial, we are going to cover the following topics:

   - Present the main aspects of Valgrind and explain why and when you should use it.
   - Give an overview of all the six tools present in the Valgrind's current release, explaining in details two of them: Memcheck and Cachegrind.
   - Present how to use Valgrind and how to interpret its output, either via a terminal window or via using an IDE such as Eclipse.

## 1. How to run the examples
Each folder has an [Eclipse](https://www.eclipse.org) project with the code and Makefile for the correspondent example. 

### 1.1 Example 1:
To run valgrind with memcheck:
```sh
$ valgrind --tool=memcheck ./main
```
Use --leak-check=full to obtain details for each definitely lost or possibly lost block:
```sh
$ valgrind --tool=memcheck --leak-check=full ./main
```

### 1.2 Example 2:
To check for memory errors run:
```sh
$ valgrind --tool=memcheck --leak-check=full ./main
```
Use --gen-suppressions=yes to ask valgrind to generate suppressions:
```sh
$ valgrind --tool=memcheck --gen-suppressions=yes --leak-check=full ./main
```
Copy the generated suppressions in a file called ex2.supp and run:
```sh
$ valgrind --tool=memcheck --suppressions-file=ex2.supp --leak-check=full ./main
```
Use -v to run Valgrind with verbose to check the suppressed files:
```sh
$ valgrind --tool=memcheck --suppressions=ex2.supp  -v --leak-check=full ./main
```

### 1.3 Example 3:
To check for errors run:
```sh
$ valgrind ./main
```
Use valgrind gdbserver to debug with gdb:
```sh
$ valgrind --vgdb=yes --vgdb-error=0 ./main
```
In another shell, run gdb and connect to valgrind:
```sh
$ gdb ./main
$ (gdb) target remote | vgdb (--pid=<pid>)
```
Use monitor commands of presented in slides 22 and 23.

### 1.4 Example 4:
To run memcheck and check for errors run:
```sh
$ valgrind --leak-check=full ./main
```
Use --track-origins=yes easier to track down the root causes of uninitialized value errors
```sh
$ valgrind --leak-check=full --track-origins=yes ./main
```

### 1.5 Examples for *massif* and *cachegrind*
The demonstrations 5 and 7 were made using the [Valgrind support on Eclipse](https://www.eclipse.org/linuxtools/projectPages/valgrind/). 

### 1.6 Example for *callgrind*
The demonstration 6 was made using the [KCachegrind](http://kcachegrind.sourceforge.net/html/Home.html) tool.

