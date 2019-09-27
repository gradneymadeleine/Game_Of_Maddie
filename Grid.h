#include<iostream>

using namespace std;

class Grid{
public:
  Grid();
  Grid(int row, int col);
  ~Grid();

  void grid();
  int getRow();
  int getCol();
  void empCell();
  void exCell(int x, int y);



  char **myGrid;
  char **myGridSqr;

  int inRow;
  int inCol;

};
