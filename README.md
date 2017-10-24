# 25PieceCubePuzzle
*******VIEW AS RAW TO SEE DIAGRAM*******
This is a program that recursively found a solution to a wooden block puzzle.
The block puzzle consists of 25 blocs shaped in this manner:
       ___
      |   |
 _____|   |___________
|                     |
|_____________________|
The blocks are composed of 5 "units" the cube is 5x5x5
There are 72 different ways to lay a block from any given starting cell.
The puzzle requires that no cells remain empty, every cell must be occupied by a unit from a cell. 
There are 125 cells in the cube. This program tries every possible combination recursively and halts when a valid
combination is found.
