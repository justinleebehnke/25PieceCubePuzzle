# CubicConundrum
**A recursive search tool to solve the ["Almost Impossible"](http://www.puzzle-factory.com/25pccube.html) 25-piece cube puzzle.**

This program leverages recursion to brute force a solution to the 5x5x5 cube
puzzle composed of 25 y-shaped
[pentominoes](https://en.wikipedia.org/wiki/Pentomino). It does so by
exhaustively trying different sequences for laying down the 25-pieces in order
to satisfy the requirements of the cube. It finds a solution after
attempting 111 million sequences and does so in a rapid 2.5 mins.

![demo](img/demo.gif)

## Getting Started
Clone this repository and run
```
make
./puzzle
```
The results of the solver will be stored in `output.txt`.

## Details
The output file is as though, once the cube was assembled, it was sliced into
5 levels then laid out from bottom to top (left to right below). The numbers in each cell represent
the pieces of each wooden block found on that layer. Try and visualize all 5
layers immediately on top of one another. In the demo above, the blocks are laid in the order shown here, 3 blocks at a time.

```
Level: 1        Level: 2         Level: 3         Level: 4         Level: 5
1  2  2  2  2   1  4  11 2  12   1  1  11 6  12   1  11 11 12 12   21 24 11 25 12
3  4  5  6  7   3  4  13 6  14   3  4  13 6  14   3  4  13 6  14   21 24 13 25 14
5  5  5  5  7   8  15 15 15 15   3  9  13 15 14   21 22 22 22 22   21 24 24 25 25
8  9  10 7  7   8  9  16 17 18   8  9  16 20 18   8  9  16 22 18   21 24 16 25 18
10 10 10 10 7   19 17 17 17 17   19 20 20 20 20   19 19 16 23 18   19 23 23 23 23
```

The blocks are composed of 5 "units" and the cube is 5x5x5. There are 72
different ways to lay a block from any given starting cell. The puzzle requires
that no cells remain empty, every cell must be occupied by a unit from a cell.
There are 125 cells in the cube. 

After laying the first block, the program will move to the next empty cell and attempt to lay 
a block using that cell as its starting point. If a block is laid it will continue to lay blocks
until it reaches an empty cell where none of the 72 ways to lay are valid starting from that cell. 
It will then recurse to the last block laid, remove it from the cube, and attempt to lay a block 
in the next sequential position of the original 72 available from that same starting cell.

This characteristic of not moving past empty cells is what allows the program to so rapidly identify
partial combinations as invalid and progress toward a perfect fit such as the one pictured below.
Without this characteristic, the program would have to attempt all of the 25^72 possible combinations and
individually check each one for validity.

![complete](img/complete.jpg)
