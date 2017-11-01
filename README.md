# CubicConundrum
**A brute force solver for the 25-piece cube puzzle**

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
5 levels then laid out from bottom to top. The numbers in each cell represent
the pieces of each wooden block found on that layer. Try and visualize all 5
layers immediately on top of one another.

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
There are 125 cells in the cube. This program tries every possible combination
recursively and halts when a valid combination is found, such as the one
pictured below.

![complete](img/complete.jpg)


