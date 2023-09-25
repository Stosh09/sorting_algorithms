Group Project on Sorting Algorithm and Big O-Notation
Contributed to by Stosh09 and OukoFranchez.
<br>

<h1 align="center"><img src="https://upload.wikimedia.org/wikipedia/commons/thumb/4/4c/Shell_sorting_algorithm_color_bars.svg/220px-Shell_sorting_algorithm_color_bars.svg.png" width='150'><br>Sorting algorithms<br>& Big O Notation</h1>

<p align="center"><img src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black"><img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"><img src="https://img.shields.io/badge/GNU%20Bash-4EAA25?style=for-the-badge&logo=GNU%20Bash&logoColor=white"><img src="https://img.shields.io/badge/GIT-E44C30?style=for-the-badge&logo=git&logoColor=white"></p>

<br>

This projectmainly focuses on the following sorting algorithms and further delves into time and space complexity in C language:
* Bubble Sort 
* Insertion Sort
* Selection Sort
* Quick Sort.

## Overview

Alx Africa teaches Full-Stack Software Engineering with a project-based approach. **_Sorting algorithms & Big O Notation_** is one of the main projects of the second sprint that covers the High-level programming of Software Engineering.

## Requirements

To run the algorithms you need to clone the repository by;

```bash
~$ git clone https://github.com/OukoFranchez/sorting_algorithms.git
```

The compilation process uses GNU Compiler Collection (GCC) and a Linux environment like `Ubuntu 20.04 LTS`. Enter the `sorting_algorithms` folder and use the `makefile` as follows.

## Invocation

Each invocation of the `make` command executes a different algorithm with its respective printout on the console.

### **0. Bubble Sort**

The `0-bubble_sort.c` function sorts an array of integers in ascending order using the Bubble sort algorithm.

    ~/sorting_algorithms$ make bubble

Output

```bash
19, 48, 99, 71, 13, 52, 96, 73, 86, 7
19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 13, 71, 52, 96, 73, 86, 7, 99
```

### **1. Insertion sort**

The `1-insertion_sort_list.c` function sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm.

    ~/sorting_algorithms$ make insertion

### **2. Selection Sort**

The `2-selection_sort.c` function sorts an array of integers in ascending order using the Selection sort algorithm.

    ~/sorting_algorithms$ make selection

### **3. Quick sort**

The `3-quick_sort.c` function sorts an array of integers in ascending order using the Quick sort algorithm.

    ~/sorting_algorithms$ make quick

## Files Description

- `test/*main*.c` - Main files in charge of the test executions of the algorithm functions.
- `0-O` — Big O Notation for the Bubble Sort Algorithm
- `0-bubble_sort.c` — Function implementation of the Bubble Sort Algorithm
- `1-O` — Big O Notation for the Insertion Sort Algorithm
- `1-insertion_sort_list.c` — Function implementation of the Insertion Sort Algorithm using a double linked list
- `2-O` — Big O Notation for the Selection Sort Algorithm
- `2-selection_sort.c` — Function implementation of the Selection Sort Algorithm
- `3-O` — Big O Notation for the Quick Sort Algorithm
- `3-quick_sort.c` — Function implementation of the Quick Sort Algorithm
- `makefile` - Script to compile and run the algorithm functions.
- `README.md` — Project's description
- `print_array.c` — Function to print all the arrays
- `print_list.c`— Function to print the linked list
- `sort.h`— Main header of the program

## Authors

| [<img src="https://avatars.githubusercontent.com/u/87556519" width="110" style="border-radius: 50%"><br><sub>Stosh Odhiambo<br><sup>@Stosh09](https://github.com/Stosh09) | [<img src="https://avatars.githubusercontent.com/u/91074465" width="110" style="border-radius: 50%"><br><sub>Ouko Franchez<br><sup>@OukoFranchez](https://github.com/OukoFranchez) |
|:----------------------------------------------------------------------------------------------------------------------------------------------------------------:|:--------------------------------------------------------------------------------------------------------------------------------------------------:|

## More information

[Alx Africa](https://www.alxafrica.com/)

