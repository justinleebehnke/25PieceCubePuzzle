# 25PieceCubePuzzle
Instructions:
clone, make, and run `./puzzle` and view results in `output.txt`

Notes about program:
This is a program that recursively found a solution to a wooden block puzzle.
The block puzzle consists of 25 blocks shaped in this manner:
```
       ___
      |   |
 _____|   |___________
|                     |
|_____________________|

```
The blocks are composed of 5 "units" the cube is 5x5x5
There are 72 different ways to lay a block from any given starting cell.
The puzzle requires that no cells remain empty, every cell must be occupied by a unit from a cell.
There are 125 cells in the cube. This program tries every possible combination recursively and halts when a valid
combination is found.

The program needed to lay down 25 blocks in the proper sequence in order to satisfy the requirements of the cube. I am not sure
how to represent, how many attempts it made but there were 111,851,005 blocks that were removed after being laid down. So if
you want to call laying a block an attempt, then the program made 111 million attempts before finding the proper solution. All
of this in just 2 and a half minutes!

Interesting note: When the machine is asked to only fit 24 blocks into the cube, it can find a valid combo in less than one
second. This just shows how much more computationally difficult a perfect fit is for this puzzle.
