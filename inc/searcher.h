#ifndef SEARCHER_H
#define SEARCHER_H
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const short IS_BORDER_CELL = 31;
const short TO_PRINT_OCCUPANCY = 31;

class Searcher
{
public:
  Searcher();
private:
  ofstream fout;
  void populateBoarder();
  void printOccupancy();
  bool findValidCombo();
  short cube[7][7][7];
  int LEV;
  int ROW;
  int COL;
  short currentBlock;
  //the 24 long functions
  bool longUpNorth();
  bool longUpEast();
  bool longUpSouth();
  bool longUpWest();
  bool longDownNorth();
  bool longDownEast();
  bool longDownSouth();
  bool longDownWest();
  bool longNorthUp();
  bool longNorthEast();
  bool longNorthDown();
  bool longNorthWest();
  bool longEastUp();
  bool longEastSouth();
  bool longEastDown();
  bool longEastNorth();
  bool longSouthUp();
  bool longSouthWest();
  bool longSouthDown();
  bool longSouthEast();
  bool longWestUp();
  bool longWestNorth();
  bool longWestDown();
  bool longWestSouth();
  //the 24 short functions
  bool shortUpNorth();
  bool shortUpEast();
  bool shortUpSouth();
  bool shortUpWest();
  bool shortDownNorth();
  bool shortDownEast();
  bool shortDownSouth();
  bool shortDownWest();
  bool shortNorthUp();
  bool shortNorthEast();
  bool shortNorthDown();
  bool shortNorthWest();
  bool shortEastUp();
  bool shortEastSouth();
  bool shortEastDown();
  bool shortEastNorth();
  bool shortSouthUp();
  bool shortSouthWest();
  bool shortSouthDown();
  bool shortSouthEast();
  bool shortWestUp();
  bool shortWestNorth();
  bool shortWestDown();
  bool shortWestSouth();
  //the 24 stub functions
  bool stubUpNorth();
  bool stubUpEast();
  bool stubUpSouth();
  bool stubUpWest();
  bool stubDownNorth();
  bool stubDownEast();
  bool stubDownSouth();
  bool stubDownWest();
  bool stubNorthUp();
  bool stubNorthEast();
  bool stubNorthDown();
  bool stubNorthWest();
  bool stubEastUp();
  bool stubEastSouth();
  bool stubEastDown();
  bool stubEastNorth();
  bool stubSouthUp();
  bool stubSouthWest();
  bool stubSouthDown();
  bool stubSouthEast();
  bool stubWestUp();
  bool stubWestNorth();
  bool stubWestDown();
  bool stubWestSouth();
};
#endif /* end of include guard: SEARCHER_H */
