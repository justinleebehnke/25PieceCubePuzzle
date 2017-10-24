#include "searcher.h"
Searcher::Searcher()
{
  LEV = 1;
  ROW = 1;
  COL = 1;
  currentBlock = 1;
  //open a file to write to
  fout.open("output.txt");
  populateBoarder();
  if (findValidCombo())
  {
    printOccupancy();
  }
  //printOccupancy();
  //close the file
  fout.close();
}
bool Searcher::longUpNorth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW][COL] |
      cube[LEV+2][ROW][COL] |
      cube[LEV+2][ROW-1][COL] |
      cube[LEV+3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongUpNorth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL] = currentBlock;
    cube[LEV+2][ROW][COL] = currentBlock;
    cube[LEV+2][ROW-1][COL] = currentBlock;
    cube[LEV+3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongUpNorth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW][COL] = 0;
      cube[LEV+2][ROW][COL] = 0;
      cube[LEV+2][ROW-1][COL] = 0;
      cube[LEV+3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longUpNorth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longUpEast()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW][COL] |
      cube[LEV+2][ROW][COL] |
      cube[LEV+2][ROW][COL+1] |
      cube[LEV+3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongUpEast from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL] = currentBlock;
    cube[LEV+2][ROW][COL] = currentBlock;
    cube[LEV+2][ROW][COL+1] = currentBlock;
    cube[LEV+3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongUpEast from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW][COL] = 0;
      cube[LEV+2][ROW][COL] = 0;
      cube[LEV+2][ROW][COL+1] = 0;
      cube[LEV+3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longUpEast from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longUpSouth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW][COL] |
      cube[LEV+2][ROW][COL] |
      cube[LEV+2][ROW+1][COL] |
      cube[LEV+3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongUpSouth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL] = currentBlock;
    cube[LEV+2][ROW][COL] = currentBlock;
    cube[LEV+2][ROW+1][COL] = currentBlock;
    cube[LEV+3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongUpSouth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW][COL] = 0;
      cube[LEV+2][ROW][COL] = 0;
      cube[LEV+2][ROW+1][COL] = 0;
      cube[LEV+3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longUpSouth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longUpWest()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW][COL] |
      cube[LEV+2][ROW][COL] |
      cube[LEV+2][ROW][COL-1] |
      cube[LEV+3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongUpWest from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL] = currentBlock;
    cube[LEV+2][ROW][COL] = currentBlock;
    cube[LEV+2][ROW][COL-1] = currentBlock;
    cube[LEV+3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongUpWest from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW][COL] = 0;
      cube[LEV+2][ROW][COL] = 0;
      cube[LEV+2][ROW][COL-1] = 0;
      cube[LEV+3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longUpWest from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longDownNorth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW][COL] |
      cube[LEV-2][ROW][COL] |
      cube[LEV-2][ROW-1][COL] |
      cube[LEV-3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongDownNorth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL] = currentBlock;
    cube[LEV-2][ROW][COL] = currentBlock;
    cube[LEV-2][ROW-1][COL] = currentBlock;
    cube[LEV-3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongDownNorth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW][COL] = 0;
      cube[LEV-2][ROW][COL] = 0;
      cube[LEV-2][ROW-1][COL] = 0;
      cube[LEV-3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longDownNorth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longDownEast()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW][COL] |
      cube[LEV-2][ROW][COL] |
      cube[LEV-2][ROW][COL+1] |
      cube[LEV-3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongDownEast from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL] = currentBlock;
    cube[LEV-2][ROW][COL] = currentBlock;
    cube[LEV-2][ROW][COL+1] = currentBlock;
    cube[LEV-3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongDownEast from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW][COL] = 0;
      cube[LEV-2][ROW][COL] = 0;
      cube[LEV-2][ROW][COL+1] = 0;
      cube[LEV-3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longDownEast from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longDownSouth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW][COL] |
      cube[LEV-2][ROW][COL] |
      cube[LEV-2][ROW+1][COL] |
      cube[LEV-3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongDownSouth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL] = currentBlock;
    cube[LEV-2][ROW][COL] = currentBlock;
    cube[LEV-2][ROW+1][COL] = currentBlock;
    cube[LEV-3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongDownSouth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW][COL] = 0;
      cube[LEV-2][ROW][COL] = 0;
      cube[LEV-2][ROW+1][COL] = 0;
      cube[LEV-3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longDownSouth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longDownWest()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW][COL] |
      cube[LEV-2][ROW][COL] |
      cube[LEV-2][ROW][COL-1] |
      cube[LEV-3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongDownWest from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL] = currentBlock;
    cube[LEV-2][ROW][COL] = currentBlock;
    cube[LEV-2][ROW][COL-1] = currentBlock;
    cube[LEV-3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongDownWest from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW][COL] = 0;
      cube[LEV-2][ROW][COL] = 0;
      cube[LEV-2][ROW][COL-1] = 0;
      cube[LEV-3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longDownWest from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longNorthUp()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW-1][COL] |
      cube[LEV][ROW-2][COL] |
      cube[LEV+1][ROW-2][COL] |
      cube[LEV][ROW-3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongNorthUp from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW-1][COL] = currentBlock;
    cube[LEV][ROW-2][COL] = currentBlock;
    cube[LEV+1][ROW-2][COL] = currentBlock;
    cube[LEV][ROW-3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongNorthUp from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW-1][COL] = 0;
      cube[LEV][ROW-2][COL] = 0;
      cube[LEV+1][ROW-2][COL] = 0;
      cube[LEV][ROW-3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longNorthUp from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longNorthEast()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW-1][COL] |
      cube[LEV][ROW-2][COL] |
      cube[LEV][ROW-2][COL+1] |
      cube[LEV][ROW-3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongNorthEast from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW-1][COL] = currentBlock;
    cube[LEV][ROW-2][COL] = currentBlock;
    cube[LEV][ROW-2][COL+1] = currentBlock;
    cube[LEV][ROW-3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongNorthEast from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW-1][COL] = 0;
      cube[LEV][ROW-2][COL] = 0;
      cube[LEV][ROW-2][COL+1] = 0;
      cube[LEV][ROW-3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longNorthEast from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longNorthDown()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW-1][COL] |
      cube[LEV][ROW-2][COL] |
      cube[LEV-1][ROW-2][COL] |
      cube[LEV][ROW-3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongNorthDown from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW-1][COL] = currentBlock;
    cube[LEV][ROW-2][COL] = currentBlock;
    cube[LEV-1][ROW-2][COL] = currentBlock;
    cube[LEV][ROW-3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongNorthDown from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW-1][COL] = 0;
      cube[LEV][ROW-2][COL] = 0;
      cube[LEV-1][ROW-2][COL] = 0;
      cube[LEV][ROW-3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longNorthDown from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longNorthWest()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW-1][COL] |
      cube[LEV][ROW-2][COL] |
      cube[LEV][ROW-2][COL-1] |
      cube[LEV][ROW-3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongNorthWest from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW-1][COL] = currentBlock;
    cube[LEV][ROW-2][COL] = currentBlock;
    cube[LEV][ROW-2][COL-1] = currentBlock;
    cube[LEV][ROW-3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongNorthWest from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW-1][COL] = 0;
      cube[LEV][ROW-2][COL] = 0;
      cube[LEV][ROW-2][COL-1] = 0;
      cube[LEV][ROW-3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longNorthWest from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longEastUp()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL+1] |
      cube[LEV][ROW][COL+2] |
      cube[LEV+1][ROW][COL+2] |
      cube[LEV][ROW][COL+3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongEastUp from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL+1] = currentBlock;
    cube[LEV][ROW][COL+2] = currentBlock;
    cube[LEV+1][ROW][COL+2] = currentBlock;
    cube[LEV][ROW][COL+3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongEastUp from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL+1] = 0;
      cube[LEV][ROW][COL+2] = 0;
      cube[LEV+1][ROW][COL+2] = 0;
      cube[LEV][ROW][COL+3] = 0;
      return false;
    }
  }
  // cout << "Error at end of longEastUp from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longEastSouth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL+1] |
      cube[LEV][ROW][COL+2] |
      cube[LEV][ROW+1][COL+2] |
      cube[LEV][ROW][COL+3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongEastSouth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL+1] = currentBlock;
    cube[LEV][ROW][COL+2] = currentBlock;
    cube[LEV][ROW+1][COL+2] = currentBlock;
    cube[LEV][ROW][COL+3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongEastSouth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL+1] = 0;
      cube[LEV][ROW][COL+2] = 0;
      cube[LEV][ROW+1][COL+2] = 0;
      cube[LEV][ROW][COL+3] = 0;
      return false;
    }
  }
  // cout << "Error at end of longEastSouth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longEastDown()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL+1] |
      cube[LEV][ROW][COL+2] |
      cube[LEV-1][ROW][COL+2] |
      cube[LEV][ROW][COL+3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongEastDown from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL+1] = currentBlock;
    cube[LEV][ROW][COL+2] = currentBlock;
    cube[LEV-1][ROW][COL+2] = currentBlock;
    cube[LEV][ROW][COL+3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongEastDown from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL+1] = 0;
      cube[LEV][ROW][COL+2] = 0;
      cube[LEV-1][ROW][COL+2] = 0;
      cube[LEV][ROW][COL+3] = 0;
      return false;
    }
  }
  // cout << "Error at end of longEastDown from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longEastNorth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL+1] |
      cube[LEV][ROW][COL+2] |
      cube[LEV][ROW-1][COL+2] |
      cube[LEV][ROW][COL+3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongEastNorth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL+1] = currentBlock;
    cube[LEV][ROW][COL+2] = currentBlock;
    cube[LEV][ROW-1][COL+2] = currentBlock;
    cube[LEV][ROW][COL+3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongEastNorth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL+1] = 0;
      cube[LEV][ROW][COL+2] = 0;
      cube[LEV][ROW-1][COL+2] = 0;
      cube[LEV][ROW][COL+3] = 0;
      return false;
    }
  }
  // cout << "Error at end of longEastNorth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longSouthUp()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW+1][COL] |
      cube[LEV][ROW+2][COL] |
      cube[LEV+1][ROW+2][COL] |
      cube[LEV][ROW+3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongSouthUp from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW+1][COL] = currentBlock;
    cube[LEV][ROW+2][COL] = currentBlock;
    cube[LEV+1][ROW+2][COL] = currentBlock;
    cube[LEV][ROW+3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongSouthUp from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW+1][COL] = 0;
      cube[LEV][ROW+2][COL] = 0;
      cube[LEV+1][ROW+2][COL] = 0;
      cube[LEV][ROW+3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longSouthUp from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longSouthWest()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW+1][COL] |
      cube[LEV][ROW+2][COL] |
      cube[LEV][ROW+2][COL-1] |
      cube[LEV][ROW+3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongSouthWest from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW+1][COL] = currentBlock;
    cube[LEV][ROW+2][COL] = currentBlock;
    cube[LEV][ROW+2][COL-1] = currentBlock;
    cube[LEV][ROW+3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongSouthWest from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW+1][COL] = 0;
      cube[LEV][ROW+2][COL] = 0;
      cube[LEV][ROW+2][COL-1] = 0;
      cube[LEV][ROW+3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longSouthWest from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longSouthDown()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW+1][COL] |
      cube[LEV][ROW+2][COL] |
      cube[LEV-1][ROW+2][COL] |
      cube[LEV][ROW+3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongSouthDown from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW+1][COL] = currentBlock;
    cube[LEV][ROW+2][COL] = currentBlock;
    cube[LEV-1][ROW+2][COL] = currentBlock;
    cube[LEV][ROW+3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongSouthDown from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW+1][COL] = 0;
      cube[LEV][ROW+2][COL] = 0;
      cube[LEV-1][ROW+2][COL] = 0;
      cube[LEV][ROW+3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longSouthDown from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longSouthEast()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW+1][COL] |
      cube[LEV][ROW+2][COL] |
      cube[LEV][ROW+2][COL+1] |
      cube[LEV][ROW+3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongSouthEast from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW+1][COL] = currentBlock;
    cube[LEV][ROW+2][COL] = currentBlock;
    cube[LEV][ROW+2][COL+1] = currentBlock;
    cube[LEV][ROW+3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongSouthEast from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW+1][COL] = 0;
      cube[LEV][ROW+2][COL] = 0;
      cube[LEV][ROW+2][COL+1] = 0;
      cube[LEV][ROW+3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of longSouthEast from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longWestUp()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL-1] |
      cube[LEV][ROW][COL-2] |
      cube[LEV+1][ROW][COL-2] |
      cube[LEV][ROW][COL-3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongWestUp from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL-1] = currentBlock;
    cube[LEV][ROW][COL-2] = currentBlock;
    cube[LEV+1][ROW][COL-2] = currentBlock;
    cube[LEV][ROW][COL-3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongWestUp from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL-1] = 0;
      cube[LEV][ROW][COL-2] = 0;
      cube[LEV+1][ROW][COL-2] = 0;
      cube[LEV][ROW][COL-3] = 0;
      return false;
    }
  }
  // cout << "Error at end of longWestUp from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longWestNorth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL-1] |
      cube[LEV][ROW][COL-2] |
      cube[LEV][ROW-1][COL-2] |
      cube[LEV][ROW][COL-3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongWestNorth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL-1] = currentBlock;
    cube[LEV][ROW][COL-2] = currentBlock;
    cube[LEV][ROW-1][COL-2] = currentBlock;
    cube[LEV][ROW][COL-3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongWestNorth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL-1] = 0;
      cube[LEV][ROW][COL-2] = 0;
      cube[LEV][ROW-1][COL-2] = 0;
      cube[LEV][ROW][COL-3] = 0;
      return false;
    }
  }
  // cout << "Error at end of longWestNorth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longWestDown()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL-1] |
      cube[LEV][ROW][COL-2] |
      cube[LEV-1][ROW][COL-2] |
      cube[LEV][ROW][COL-3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongWestDown from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL-1] = currentBlock;
    cube[LEV][ROW][COL-2] = currentBlock;
    cube[LEV-1][ROW][COL-2] = currentBlock;
    cube[LEV][ROW][COL-3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongWestDown from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL-1] = 0;
      cube[LEV][ROW][COL-2] = 0;
      cube[LEV-1][ROW][COL-2] = 0;
      cube[LEV][ROW][COL-3] = 0;
      return false;
    }
  }
  // cout << "Error at end of longWestDown from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::longWestSouth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL-1] |
      cube[LEV][ROW][COL-2] |
      cube[LEV][ROW+1][COL-2] |
      cube[LEV][ROW][COL-3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layinglongWestSouth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL-1] = currentBlock;
    cube[LEV][ROW][COL-2] = currentBlock;
    cube[LEV][ROW+1][COL-2] = currentBlock;
    cube[LEV][ROW][COL-3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removinglongWestSouth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL-1] = 0;
      cube[LEV][ROW][COL-2] = 0;
      cube[LEV][ROW+1][COL-2] = 0;
      cube[LEV][ROW][COL-3] = 0;
      return false;
    }
  }
  // cout << "Error at end of longWestSouth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortUpNorth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW][COL] |
      cube[LEV+1][ROW-1][COL] |
      cube[LEV+2][ROW][COL] |
      cube[LEV+3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortUpNorth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL] = currentBlock;
    cube[LEV+1][ROW-1][COL] = currentBlock;
    cube[LEV+2][ROW][COL] = currentBlock;
    cube[LEV+3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortUpNorth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW][COL] = 0;
      cube[LEV+1][ROW-1][COL] = 0;
      cube[LEV+2][ROW][COL] = 0;
      cube[LEV+3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortUpNorth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortUpEast()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW][COL] |
      cube[LEV+1][ROW][COL+1] |
      cube[LEV+2][ROW][COL] |
      cube[LEV+3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortUpEast from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL+1] = currentBlock;
    cube[LEV+2][ROW][COL] = currentBlock;
    cube[LEV+3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortUpEast from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW][COL] = 0;
      cube[LEV+1][ROW][COL+1] = 0;
      cube[LEV+2][ROW][COL] = 0;
      cube[LEV+3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortUpEast from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortUpSouth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW][COL] |
      cube[LEV+1][ROW+1][COL] |
      cube[LEV+2][ROW][COL] |
      cube[LEV+3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortUpSouth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL] = currentBlock;
    cube[LEV+1][ROW+1][COL] = currentBlock;
    cube[LEV+2][ROW][COL] = currentBlock;
    cube[LEV+3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortUpSouth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW][COL] = 0;
      cube[LEV+1][ROW+1][COL] = 0;
      cube[LEV+2][ROW][COL] = 0;
      cube[LEV+3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortUpSouth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortUpWest()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW][COL] |
      cube[LEV+1][ROW][COL-1] |
      cube[LEV+2][ROW][COL] |
      cube[LEV+3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortUpWest from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL-1] = currentBlock;
    cube[LEV+2][ROW][COL] = currentBlock;
    cube[LEV+3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortUpWest from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW][COL] = 0;
      cube[LEV+1][ROW][COL-1] = 0;
      cube[LEV+2][ROW][COL] = 0;
      cube[LEV+3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortUpWest from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortDownNorth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW][COL] |
      cube[LEV-1][ROW-1][COL] |
      cube[LEV-2][ROW][COL] |
      cube[LEV-3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortDownNorth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL] = currentBlock;
    cube[LEV-1][ROW-1][COL] = currentBlock;
    cube[LEV-2][ROW][COL] = currentBlock;
    cube[LEV-3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortDownNorth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW][COL] = 0;
      cube[LEV-1][ROW-1][COL] = 0;
      cube[LEV-2][ROW][COL] = 0;
      cube[LEV-3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortDownNorth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortDownEast()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW][COL] |
      cube[LEV-1][ROW][COL+1] |
      cube[LEV-2][ROW][COL] |
      cube[LEV-3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortDownEast from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL+1] = currentBlock;
    cube[LEV-2][ROW][COL] = currentBlock;
    cube[LEV-3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortDownEast from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW][COL] = 0;
      cube[LEV-1][ROW][COL+1] = 0;
      cube[LEV-2][ROW][COL] = 0;
      cube[LEV-3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortDownEast from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortDownSouth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW][COL] |
      cube[LEV-1][ROW+1][COL] |
      cube[LEV-2][ROW][COL] |
      cube[LEV-3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortDownSouth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL] = currentBlock;
    cube[LEV-1][ROW+1][COL] = currentBlock;
    cube[LEV-2][ROW][COL] = currentBlock;
    cube[LEV-3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortDownSouth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW][COL] = 0;
      cube[LEV-1][ROW+1][COL] = 0;
      cube[LEV-2][ROW][COL] = 0;
      cube[LEV-3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortDownSouth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortDownWest()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW][COL] |
      cube[LEV-1][ROW][COL-1] |
      cube[LEV-2][ROW][COL] |
      cube[LEV-3][ROW][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortDownWest from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL-1] = currentBlock;
    cube[LEV-2][ROW][COL] = currentBlock;
    cube[LEV-3][ROW][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortDownWest from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW][COL] = 0;
      cube[LEV-1][ROW][COL-1] = 0;
      cube[LEV-2][ROW][COL] = 0;
      cube[LEV-3][ROW][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortDownWest from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortNorthUp()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW-1][COL] |
      cube[LEV+1][ROW-1][COL] |
      cube[LEV][ROW-2][COL] |
      cube[LEV][ROW-3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortNorthUp from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW-1][COL] = currentBlock;
    cube[LEV+1][ROW-1][COL] = currentBlock;
    cube[LEV][ROW-2][COL] = currentBlock;
    cube[LEV][ROW-3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortNorthUp from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW-1][COL] = 0;
      cube[LEV+1][ROW-1][COL] = 0;
      cube[LEV][ROW-2][COL] = 0;
      cube[LEV][ROW-3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortNorthUp from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortNorthEast()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW-1][COL] |
      cube[LEV][ROW-1][COL+1] |
      cube[LEV][ROW-2][COL] |
      cube[LEV][ROW-3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortNorthEast from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW-1][COL] = currentBlock;
    cube[LEV][ROW-1][COL+1] = currentBlock;
    cube[LEV][ROW-2][COL] = currentBlock;
    cube[LEV][ROW-3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortNorthEast from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW-1][COL] = 0;
      cube[LEV][ROW-1][COL+1] = 0;
      cube[LEV][ROW-2][COL] = 0;
      cube[LEV][ROW-3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortNorthEast from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortNorthDown()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW-1][COL] |
      cube[LEV][ROW-2][COL] |
      cube[LEV-1][ROW-1][COL] |
      cube[LEV][ROW-3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortNorthDown from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW-1][COL] = currentBlock;
    cube[LEV][ROW-2][COL] = currentBlock;
    cube[LEV-1][ROW-1][COL] = currentBlock;
    cube[LEV][ROW-3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortNorthDown from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW-1][COL] = 0;
      cube[LEV][ROW-2][COL] = 0;
      cube[LEV-1][ROW-1][COL] = 0;
      cube[LEV][ROW-3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortNorthDown from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortNorthWest()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW-1][COL] |
      cube[LEV][ROW-2][COL] |
      cube[LEV][ROW-1][COL-1] |
      cube[LEV][ROW-3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortNorthWest from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW-1][COL] = currentBlock;
    cube[LEV][ROW-2][COL] = currentBlock;
    cube[LEV][ROW-1][COL-1] = currentBlock;
    cube[LEV][ROW-3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortNorthWest from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW-1][COL] = 0;
      cube[LEV][ROW-2][COL] = 0;
      cube[LEV][ROW-1][COL-1] = 0;
      cube[LEV][ROW-3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortNorthWest from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortEastUp()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL+1] |
      cube[LEV][ROW][COL+2] |
      cube[LEV+1][ROW][COL+1] |
      cube[LEV][ROW][COL+3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortEastUp from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL+1] = currentBlock;
    cube[LEV][ROW][COL+2] = currentBlock;
    cube[LEV+1][ROW][COL+1] = currentBlock;
    cube[LEV][ROW][COL+3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortEastUp from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL+1] = 0;
      cube[LEV][ROW][COL+2] = 0;
      cube[LEV+1][ROW][COL+1] = 0;
      cube[LEV][ROW][COL+3] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortEastUp from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortEastSouth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL+1] |
      cube[LEV][ROW][COL+2] |
      cube[LEV][ROW+1][COL+1] |
      cube[LEV][ROW][COL+3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortEastSouth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL+1] = currentBlock;
    cube[LEV][ROW][COL+2] = currentBlock;
    cube[LEV][ROW+1][COL+1] = currentBlock;
    cube[LEV][ROW][COL+3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortEastSouth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL+1] = 0;
      cube[LEV][ROW][COL+2] = 0;
      cube[LEV][ROW+1][COL+1] = 0;
      cube[LEV][ROW][COL+3] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortEastSouth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortEastDown()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL+1] |
      cube[LEV][ROW][COL+2] |
      cube[LEV-1][ROW][COL+1] |
      cube[LEV][ROW][COL+3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortEastDown from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL+1] = currentBlock;
    cube[LEV][ROW][COL+2] = currentBlock;
    cube[LEV-1][ROW][COL+1] = currentBlock;
    cube[LEV][ROW][COL+3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortEastDown from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL+1] = 0;
      cube[LEV][ROW][COL+2] = 0;
      cube[LEV-1][ROW][COL+1] = 0;
      cube[LEV][ROW][COL+3] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortEastDown from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortEastNorth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL+1] |
      cube[LEV][ROW][COL+2] |
      cube[LEV][ROW-1][COL+1] |
      cube[LEV][ROW][COL+3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortEastNorth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL+1] = currentBlock;
    cube[LEV][ROW][COL+2] = currentBlock;
    cube[LEV][ROW-1][COL+1] = currentBlock;
    cube[LEV][ROW][COL+3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortEastNorth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL+1] = 0;
      cube[LEV][ROW][COL+2] = 0;
      cube[LEV][ROW-1][COL+1] = 0;
      cube[LEV][ROW][COL+3] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortEastNorth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortSouthUp()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW+1][COL] |
      cube[LEV][ROW+2][COL] |
      cube[LEV+1][ROW+1][COL] |
      cube[LEV][ROW+3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortSouthUp from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW+1][COL] = currentBlock;
    cube[LEV][ROW+2][COL] = currentBlock;
    cube[LEV+1][ROW+1][COL] = currentBlock;
    cube[LEV][ROW+3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortSouthUp from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW+1][COL] = 0;
      cube[LEV][ROW+2][COL] = 0;
      cube[LEV+1][ROW+1][COL] = 0;
      cube[LEV][ROW+3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortSouthUp from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortSouthWest()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW+1][COL] |
      cube[LEV][ROW+2][COL] |
      cube[LEV][ROW+1][COL-1] |
      cube[LEV][ROW+3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortSouthWest from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW+1][COL] = currentBlock;
    cube[LEV][ROW+2][COL] = currentBlock;
    cube[LEV][ROW+1][COL-1] = currentBlock;
    cube[LEV][ROW+3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortSouthWest from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW+1][COL] = 0;
      cube[LEV][ROW+2][COL] = 0;
      cube[LEV][ROW+1][COL-1] = 0;
      cube[LEV][ROW+3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortSouthWest from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortSouthDown()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW+1][COL] |
      cube[LEV][ROW+2][COL] |
      cube[LEV-1][ROW+1][COL] |
      cube[LEV][ROW+3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortSouthDown from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW+1][COL] = currentBlock;
    cube[LEV][ROW+2][COL] = currentBlock;
    cube[LEV-1][ROW+1][COL] = currentBlock;
    cube[LEV][ROW+3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortSouthDown from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW+1][COL] = 0;
      cube[LEV][ROW+2][COL] = 0;
      cube[LEV-1][ROW+1][COL] = 0;
      cube[LEV][ROW+3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortSouthDown from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortSouthEast()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW+1][COL] |
      cube[LEV][ROW+2][COL] |
      cube[LEV][ROW+1][COL+1] |
      cube[LEV][ROW+3][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortSouthEast from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW+1][COL] = currentBlock;
    cube[LEV][ROW+2][COL] = currentBlock;
    cube[LEV][ROW+1][COL+1] = currentBlock;
    cube[LEV][ROW+3][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortSouthEast from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW+1][COL] = 0;
      cube[LEV][ROW+2][COL] = 0;
      cube[LEV][ROW+1][COL+1] = 0;
      cube[LEV][ROW+3][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortSouthEast from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortWestUp()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL-1] |
      cube[LEV][ROW][COL-2] |
      cube[LEV+1][ROW][COL-1] |
      cube[LEV][ROW][COL-3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortWestUp from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL-1] = currentBlock;
    cube[LEV][ROW][COL-2] = currentBlock;
    cube[LEV+1][ROW][COL-1] = currentBlock;
    cube[LEV][ROW][COL-3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortWestUp from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL-1] = 0;
      cube[LEV][ROW][COL-2] = 0;
      cube[LEV+1][ROW][COL-1] = 0;
      cube[LEV][ROW][COL-3] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortWestUp from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortWestNorth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL-1] |
      cube[LEV][ROW][COL-2] |
      cube[LEV][ROW-1][COL-1] |
      cube[LEV][ROW][COL-3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortWestNorth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL-1] = currentBlock;
    cube[LEV][ROW][COL-2] = currentBlock;
    cube[LEV][ROW-1][COL-1] = currentBlock;
    cube[LEV][ROW][COL-3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortWestNorth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL-1] = 0;
      cube[LEV][ROW][COL-2] = 0;
      cube[LEV][ROW-1][COL-1] = 0;
      cube[LEV][ROW][COL-3] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortWestNorth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortWestDown()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL-1] |
      cube[LEV][ROW][COL-2] |
      cube[LEV-1][ROW][COL-1] |
      cube[LEV][ROW][COL-3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortWestDown from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL-1] = currentBlock;
    cube[LEV][ROW][COL-2] = currentBlock;
    cube[LEV-1][ROW][COL-1] = currentBlock;
    cube[LEV][ROW][COL-3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortWestDown from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL-1] = 0;
      cube[LEV][ROW][COL-2] = 0;
      cube[LEV-1][ROW][COL-1] = 0;
      cube[LEV][ROW][COL-3] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortWestDown from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::shortWestSouth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW][COL-1] |
      cube[LEV][ROW][COL-2] |
      cube[LEV][ROW+1][COL-1] |
      cube[LEV][ROW][COL-3])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingshortWestSouth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW][COL-1] = currentBlock;
    cube[LEV][ROW][COL-2] = currentBlock;
    cube[LEV][ROW+1][COL-1] = currentBlock;
    cube[LEV][ROW][COL-3] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingshortWestSouth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW][COL-1] = 0;
      cube[LEV][ROW][COL-2] = 0;
      cube[LEV][ROW+1][COL-1] = 0;
      cube[LEV][ROW][COL-3] = 0;
      return false;
    }
  }
  // cout << "Error at end of shortWestSouth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubUpNorth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW-2][COL] |
      cube[LEV+1][ROW-1][COL] |
      cube[LEV+1][ROW][COL] |
      cube[LEV+1][ROW+1][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubUpNorth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW-2][COL] = currentBlock;
    cube[LEV+1][ROW-1][COL] = currentBlock;
    cube[LEV+1][ROW][COL] = currentBlock;
    cube[LEV+1][ROW+1][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubUpNorth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW-2][COL] = 0;
      cube[LEV+1][ROW-1][COL] = 0;
      cube[LEV+1][ROW][COL] = 0;
      cube[LEV+1][ROW+1][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubUpNorth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubUpEast()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW][COL+2] |
      cube[LEV+1][ROW][COL+1] |
      cube[LEV+1][ROW][COL] |
      cube[LEV+1][ROW][COL-1])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubUpEast from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL+2] = currentBlock;
    cube[LEV+1][ROW][COL+1] = currentBlock;
    cube[LEV+1][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL-1] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubUpEast from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW][COL+2] = 0;
      cube[LEV+1][ROW][COL+1] = 0;
      cube[LEV+1][ROW][COL] = 0;
      cube[LEV+1][ROW][COL-1] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubUpEast from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubUpSouth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW-1][COL] |
      cube[LEV+1][ROW][COL] |
      cube[LEV+1][ROW+1][COL] |
      cube[LEV+1][ROW+2][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubUpSouth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW-1][COL] = currentBlock;
    cube[LEV+1][ROW][COL] = currentBlock;
    cube[LEV+1][ROW+1][COL] = currentBlock;
    cube[LEV+1][ROW+2][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubUpSouth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW-1][COL] = 0;
      cube[LEV+1][ROW][COL] = 0;
      cube[LEV+1][ROW+1][COL] = 0;
      cube[LEV+1][ROW+2][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubUpSouth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubUpWest()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW][COL+1] |
      cube[LEV+1][ROW][COL] |
      cube[LEV+1][ROW][COL-1] |
      cube[LEV+1][ROW][COL-2])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubUpWest from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL+1] = currentBlock;
    cube[LEV+1][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL-1] = currentBlock;
    cube[LEV+1][ROW][COL-2] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubUpWest from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW][COL+1] = 0;
      cube[LEV+1][ROW][COL] = 0;
      cube[LEV+1][ROW][COL-1] = 0;
      cube[LEV+1][ROW][COL-2] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubUpWest from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubDownNorth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW-2][COL] |
      cube[LEV-1][ROW-1][COL] |
      cube[LEV-1][ROW][COL] |
      cube[LEV-1][ROW+1][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubDownNorth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW-2][COL] = currentBlock;
    cube[LEV-1][ROW-1][COL] = currentBlock;
    cube[LEV-1][ROW][COL] = currentBlock;
    cube[LEV-1][ROW+1][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubDownNorth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW-2][COL] = 0;
      cube[LEV-1][ROW-1][COL] = 0;
      cube[LEV-1][ROW][COL] = 0;
      cube[LEV-1][ROW+1][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubDownNorth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubDownEast()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW][COL-1] |
      cube[LEV-1][ROW][COL] |
      cube[LEV-1][ROW][COL+1] |
      cube[LEV-1][ROW][COL+2])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubDownEast from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL-1] = currentBlock;
    cube[LEV-1][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL+1] = currentBlock;
    cube[LEV-1][ROW][COL+2] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubDownEast from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW][COL-1] = 0;
      cube[LEV-1][ROW][COL] = 0;
      cube[LEV-1][ROW][COL+1] = 0;
      cube[LEV-1][ROW][COL+2] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubDownEast from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubDownSouth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW-1][COL] |
      cube[LEV-1][ROW][COL] |
      cube[LEV-1][ROW+1][COL] |
      cube[LEV-1][ROW+2][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubDownSouth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW-1][COL] = currentBlock;
    cube[LEV-1][ROW][COL] = currentBlock;
    cube[LEV-1][ROW+1][COL] = currentBlock;
    cube[LEV-1][ROW+2][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubDownSouth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW-1][COL] = 0;
      cube[LEV-1][ROW][COL] = 0;
      cube[LEV-1][ROW+1][COL] = 0;
      cube[LEV-1][ROW+2][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubDownSouth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubDownWest()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW][COL-2] |
      cube[LEV-1][ROW][COL-1] |
      cube[LEV-1][ROW][COL] |
      cube[LEV-1][ROW][COL+1])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubDownWest from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL-2] = currentBlock;
    cube[LEV-1][ROW][COL-1] = currentBlock;
    cube[LEV-1][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL+1] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubDownWest from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW][COL-2] = 0;
      cube[LEV-1][ROW][COL-1] = 0;
      cube[LEV-1][ROW][COL] = 0;
      cube[LEV-1][ROW][COL+1] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubDownWest from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubNorthUp()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW-1][COL] |
      cube[LEV][ROW-1][COL] |
      cube[LEV+1][ROW-1][COL] |
      cube[LEV+2][ROW-1][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubNorthUp from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW-1][COL] = currentBlock;
    cube[LEV][ROW-1][COL] = currentBlock;
    cube[LEV+1][ROW-1][COL] = currentBlock;
    cube[LEV+2][ROW-1][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubNorthUp from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW-1][COL] = 0;
      cube[LEV][ROW-1][COL] = 0;
      cube[LEV+1][ROW-1][COL] = 0;
      cube[LEV+2][ROW-1][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubNorthUp from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubNorthEast()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW-1][COL-1] |
      cube[LEV][ROW-1][COL] |
      cube[LEV][ROW-1][COL+1] |
      cube[LEV][ROW-1][COL+2])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubNorthEast from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW-1][COL-1] = currentBlock;
    cube[LEV][ROW-1][COL] = currentBlock;
    cube[LEV][ROW-1][COL+1] = currentBlock;
    cube[LEV][ROW-1][COL+2] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubNorthEast from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW-1][COL-1] = 0;
      cube[LEV][ROW-1][COL] = 0;
      cube[LEV][ROW-1][COL+1] = 0;
      cube[LEV][ROW-1][COL+2] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubNorthEast from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubNorthDown()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW-1][COL] |
      cube[LEV][ROW-1][COL] |
      cube[LEV-1][ROW-1][COL] |
      cube[LEV-2][ROW-1][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubNorthDown from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW-1][COL] = currentBlock;
    cube[LEV][ROW-1][COL] = currentBlock;
    cube[LEV-1][ROW-1][COL] = currentBlock;
    cube[LEV-2][ROW-1][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubNorthDown from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW-1][COL] = 0;
      cube[LEV][ROW-1][COL] = 0;
      cube[LEV-1][ROW-1][COL] = 0;
      cube[LEV-2][ROW-1][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubNorthDown from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubNorthWest()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW-1][COL+1] |
      cube[LEV][ROW-1][COL] |
      cube[LEV][ROW-1][COL-1] |
      cube[LEV][ROW-1][COL-2])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubNorthWest from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW-1][COL+1] = currentBlock;
    cube[LEV][ROW-1][COL] = currentBlock;
    cube[LEV][ROW-1][COL-1] = currentBlock;
    cube[LEV][ROW-1][COL-2] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubNorthWest from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW-1][COL+1] = 0;
      cube[LEV][ROW-1][COL] = 0;
      cube[LEV][ROW-1][COL-1] = 0;
      cube[LEV][ROW-1][COL-2] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubNorthWest from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubEastUp()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW][COL+1] |
      cube[LEV][ROW][COL+1] |
      cube[LEV+1][ROW][COL+1] |
      cube[LEV+2][ROW][COL+1])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubEastUp from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL+1] = currentBlock;
    cube[LEV][ROW][COL+1] = currentBlock;
    cube[LEV+1][ROW][COL+1] = currentBlock;
    cube[LEV+2][ROW][COL+1] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubEastUp from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW][COL+1] = 0;
      cube[LEV][ROW][COL+1] = 0;
      cube[LEV+1][ROW][COL+1] = 0;
      cube[LEV+2][ROW][COL+1] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubEastUp from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubEastSouth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW-1][COL+1] |
      cube[LEV][ROW][COL+1] |
      cube[LEV][ROW+1][COL+1] |
      cube[LEV][ROW+2][COL+1])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubEastSouth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW-1][COL+1] = currentBlock;
    cube[LEV][ROW][COL+1] = currentBlock;
    cube[LEV][ROW+1][COL+1] = currentBlock;
    cube[LEV][ROW+2][COL+1] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubEastSouth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW-1][COL+1] = 0;
      cube[LEV][ROW][COL+1] = 0;
      cube[LEV][ROW+1][COL+1] = 0;
      cube[LEV][ROW+2][COL+1] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubEastSouth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubEastDown()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW][COL+1] |
      cube[LEV][ROW][COL+1] |
      cube[LEV-1][ROW][COL+1] |
      cube[LEV-2][ROW][COL+1])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubEastDown from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL+1] = currentBlock;
    cube[LEV][ROW][COL+1] = currentBlock;
    cube[LEV-1][ROW][COL+1] = currentBlock;
    cube[LEV-2][ROW][COL+1] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubEastDown from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW][COL+1] = 0;
      cube[LEV][ROW][COL+1] = 0;
      cube[LEV-1][ROW][COL+1] = 0;
      cube[LEV-2][ROW][COL+1] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubEastDown from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubEastNorth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW+1][COL+1] |
      cube[LEV][ROW][COL+1] |
      cube[LEV][ROW-1][COL+1] |
      cube[LEV][ROW-2][COL+1])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubEastNorth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW+1][COL+1] = currentBlock;
    cube[LEV][ROW][COL+1] = currentBlock;
    cube[LEV][ROW-1][COL+1] = currentBlock;
    cube[LEV][ROW-2][COL+1] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubEastNorth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW+1][COL+1] = 0;
      cube[LEV][ROW][COL+1] = 0;
      cube[LEV][ROW-1][COL+1] = 0;
      cube[LEV][ROW-2][COL+1] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubEastNorth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubSouthUp()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW+1][COL] |
      cube[LEV][ROW+1][COL] |
      cube[LEV+1][ROW+1][COL] |
      cube[LEV+2][ROW+1][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubSouthUp from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW+1][COL] = currentBlock;
    cube[LEV][ROW+1][COL] = currentBlock;
    cube[LEV+1][ROW+1][COL] = currentBlock;
    cube[LEV+2][ROW+1][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubSouthUp from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW+1][COL] = 0;
      cube[LEV][ROW+1][COL] = 0;
      cube[LEV+1][ROW+1][COL] = 0;
      cube[LEV+2][ROW+1][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubSouthUp from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubSouthWest()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW+1][COL+1] |
      cube[LEV][ROW+1][COL] |
      cube[LEV][ROW+1][COL-1] |
      cube[LEV][ROW+1][COL-2])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubSouthWest from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW+1][COL+1] = currentBlock;
    cube[LEV][ROW+1][COL] = currentBlock;
    cube[LEV][ROW+1][COL-1] = currentBlock;
    cube[LEV][ROW+1][COL-2] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubSouthWest from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW+1][COL+1] = 0;
      cube[LEV][ROW+1][COL] = 0;
      cube[LEV][ROW+1][COL-1] = 0;
      cube[LEV][ROW+1][COL-2] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubSouthWest from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubSouthDown()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW+1][COL] |
      cube[LEV][ROW+1][COL] |
      cube[LEV-1][ROW+1][COL] |
      cube[LEV-2][ROW+1][COL])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubSouthDown from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW+1][COL] = currentBlock;
    cube[LEV][ROW+1][COL] = currentBlock;
    cube[LEV-1][ROW+1][COL] = currentBlock;
    cube[LEV-2][ROW+1][COL] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubSouthDown from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW+1][COL] = 0;
      cube[LEV][ROW+1][COL] = 0;
      cube[LEV-1][ROW+1][COL] = 0;
      cube[LEV-2][ROW+1][COL] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubSouthDown from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubSouthEast()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW+1][COL+1] |
      cube[LEV][ROW+1][COL] |
      cube[LEV][ROW+1][COL-1] |
      cube[LEV][ROW+1][COL-2])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubSouthEast from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW+1][COL+1] = currentBlock;
    cube[LEV][ROW+1][COL] = currentBlock;
    cube[LEV][ROW+1][COL-1] = currentBlock;
    cube[LEV][ROW+1][COL-2] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubSouthEast from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW+1][COL+1] = 0;
      cube[LEV][ROW+1][COL] = 0;
      cube[LEV][ROW+1][COL-1] = 0;
      cube[LEV][ROW+1][COL-2] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubSouthEast from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubWestUp()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV-1][ROW][COL-1] |
      cube[LEV][ROW][COL-1] |
      cube[LEV+1][ROW][COL-1] |
      cube[LEV+2][ROW][COL-1])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubWestUp from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV-1][ROW][COL-1] = currentBlock;
    cube[LEV][ROW][COL-1] = currentBlock;
    cube[LEV+1][ROW][COL-1] = currentBlock;
    cube[LEV+2][ROW][COL-1] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubWestUp from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV-1][ROW][COL-1] = 0;
      cube[LEV][ROW][COL-1] = 0;
      cube[LEV+1][ROW][COL-1] = 0;
      cube[LEV+2][ROW][COL-1] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubWestUp from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubWestNorth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW+1][COL-1] |
      cube[LEV][ROW][COL-1] |
      cube[LEV][ROW-1][COL-1] |
      cube[LEV][ROW-2][COL-1])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubWestNorth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW+1][COL-1] = currentBlock;
    cube[LEV][ROW][COL-1] = currentBlock;
    cube[LEV][ROW-1][COL-1] = currentBlock;
    cube[LEV][ROW-2][COL-1] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubWestNorth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW+1][COL-1] = 0;
      cube[LEV][ROW][COL-1] = 0;
      cube[LEV][ROW-1][COL-1] = 0;
      cube[LEV][ROW-2][COL-1] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubWestNorth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubWestDown()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV+1][ROW][COL-1] |
      cube[LEV][ROW][COL-1] |
      cube[LEV-1][ROW][COL-1] |
      cube[LEV-2][ROW][COL-1])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubWestDown from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV+1][ROW][COL-1] = currentBlock;
    cube[LEV][ROW][COL-1] = currentBlock;
    cube[LEV-1][ROW][COL-1] = currentBlock;
    cube[LEV-2][ROW][COL-1] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubWestDown from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV+1][ROW][COL-1] = 0;
      cube[LEV][ROW][COL-1] = 0;
      cube[LEV-1][ROW][COL-1] = 0;
      cube[LEV-2][ROW][COL-1] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubWestDown from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::stubWestSouth()
{
  //check for occupancy, if occupied return false immediately
  if (cube[LEV][ROW-1][COL-1] |
      cube[LEV][ROW][COL-1] |
      cube[LEV][ROW+1][COL-1] |
      cube[LEV][ROW+2][COL-1])
  {
    return false;
  }
  else //lay the block and call findValidCombo from there.
  {
    for (int i = 0; i < currentBlock; i++)
    {
      // cout <<  "*";
    }
    // cout <<  "layingstubWestSouth from:" << LEV << ROW << COL << endl;
    cube[LEV][ROW][COL] = currentBlock;
    cube[LEV][ROW-1][COL-1] = currentBlock;
    cube[LEV][ROW][COL-1] = currentBlock;
    cube[LEV][ROW+1][COL-1] = currentBlock;
    cube[LEV][ROW+2][COL-1] = currentBlock;
    currentBlock++;
    if (findValidCombo())
    {
      return true;
    }
    else
    {
      currentBlock--;
      for (int i = 0; i < currentBlock; i++)
      {
        // cout <<  "*";
      }
      // cout <<  "removingstubWestSouth from:" << LEV << ROW << COL << endl;
      cube[LEV][ROW][COL] = 0;
      cube[LEV][ROW-1][COL-1] = 0;
      cube[LEV][ROW][COL-1] = 0;
      cube[LEV][ROW+1][COL-1] = 0;
      cube[LEV][ROW+2][COL-1] = 0;
      return false;
    }
  }
  // cout << "Error at end of stubWestSouth from:" << LEV << ROW << COL << endl;
  return true;
}
bool Searcher::findValidCombo()
{
  //store starting values
  int tempLev = LEV;
  int tempRow = ROW;
  int tempCol = COL;
  //check occupancy of current cell
  if (cube[LEV][ROW][COL] != 0) //if occupied, increment cols, then rows, then levels
  {
    //move to next cell and call again
    if (COL != 5)
    {
      COL++;
    }
    else //go to next row until next lev
    {
      COL = 1;
      if (ROW != 5)
      {
        ROW++;
      }
      else //go to next level until last level
      {
        ROW = 1;
        if (LEV != 5)
        {
          LEV++;
        }
        else
        {
          //base case
          // cout <<  "reached 5, 5, 5 and it was occupied! Success" << endl;
          return true;
        }
      }
    }
    //call findValidCombo on the new coordinates and try again
    if (!findValidCombo())
    {
      //restore the starting values
      LEV = tempLev;
      ROW = tempRow;
      COL = tempCol;
      return false;
    }
    else
    {
      return true;
    }
  }
  else // Cell is empty, attempt to lay a block from this location
  {
    if (currentBlock == 26)
      return true;
    if (longUpNorth())
      return true;
    if (longUpEast())
      return true;
    if (longUpSouth())
      return true;
    if (longUpWest())
      return true;
    if (longDownNorth())
      return true;
    if (longDownEast())
      return true;
    if (longDownSouth())
      return true;
    if (longDownWest())
      return true;
    if (longNorthUp())
      return true;
    if (longNorthEast())
      return true;
    if (longNorthDown())
      return true;
    if (longNorthWest())
      return true;
    if (longEastUp())
      return true;
    if (longEastSouth())
      return true;
    if (longEastDown())
      return true;
    if (longEastNorth())
      return true;
    if (longSouthUp())
      return true;
    if (longSouthWest())
      return true;
    if (longSouthDown())
      return true;
    if (longSouthEast())
      return true;
    if (longWestUp())
      return true;
    if (longWestNorth())
      return true;
    if (longWestDown())
      return true;
    if (longWestSouth())
      return true;
    if (shortUpNorth())
      return true;
    if (shortUpEast())
      return true;
    if (shortUpSouth())
      return true;
    if (shortUpWest())
      return true;
    if (shortDownNorth())
      return true;
    if (shortDownEast())
      return true;
    if (shortDownSouth())
      return true;
    if (shortDownWest())
      return true;
    if (shortNorthUp())
      return true;
    if (shortNorthEast())
      return true;
    if (shortNorthDown())
      return true;
    if (shortNorthWest())
      return true;
    if (shortEastUp())
      return true;
    if (shortEastSouth())
      return true;
    if (shortEastDown())
      return true;
    if (shortEastNorth())
      return true;
    if (shortSouthUp())
      return true;
    if (shortSouthWest())
      return true;
    if (shortSouthDown())
      return true;
    if (shortSouthEast())
      return true;
    if (shortWestUp())
      return true;
    if (shortWestNorth())
      return true;
    if (shortWestDown())
      return true;
    if (shortWestSouth())
      return true;
    if (stubUpNorth())
      return true;
    if (stubUpEast())
      return true;
    if (stubUpSouth())
      return true;
    if (stubUpWest())
      return true;
    if (stubDownNorth())
      return true;
    if (stubDownEast())
      return true;
    if (stubDownSouth())
      return true;
    if (stubDownWest())
      return true;
    if (stubNorthUp())
      return true;
    if (stubNorthEast())
      return true;
    if (stubNorthDown())
      return true;
    if (stubNorthWest())
      return true;
    if (stubEastUp())
      return true;
    if (stubEastSouth())
      return true;
    if (stubEastDown())
      return true;
    if (stubEastNorth())
      return true;
    if (stubSouthUp())
      return true;
    if (stubSouthWest())
      return true;
    if (stubSouthDown())
      return true;
    if (stubSouthEast())
      return true;
    if (stubWestUp())
      return true;
    if (stubWestNorth())
      return true;
    if (stubWestDown())
      return true;
    if (stubWestSouth())
      return true;
  }
  //restore the starting values
  LEV = tempLev;
  ROW = tempRow;
  COL = tempCol;
  return false;
}
void Searcher::populateBoarder()
{
  for (int lev = 0; lev < 7; lev++)
  {
    for (int row = 0; row < 7; row++)
    {
      for (int col = 0; col < 7; col++)
      {
        if ((lev == 0 || lev == 6) || (row == 0 || row == 6) || (col == 0 || col == 6))
        {
          cube[lev][row][col] = IS_BORDER_CELL;
        }
        else
        {
          cube[lev][row][col] = 0;
        }
      }
    }
  }
  return;
}
void Searcher::printOccupancy()
{
  fout <<  endl;
  for (int lev = 0; lev < 7; lev++)
  {
    if ((lev == 0) || (lev == 6))
    {
      continue;
    }
    else
    {
      fout <<  "Level: " << lev << endl;
      for (int row = 0; row < 7; row++)
      {
        for (int col = 0; col < 7; col++)
        {
          if (cube[lev][row][col] != IS_BORDER_CELL)
          {
            fout <<  setw(2) << left << (cube[lev][row][col] & TO_PRINT_OCCUPANCY) << " ";
          }
        }
        fout <<  endl;
      }
    }
  }
  return;
}
