#include<iostream>
#include "Grid.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Grid grid(10,10);
  int x;
  int y;
  cout<<"Enter x: ";
  cin>>x;

  cout<<"Enter y: ";
  cin >>y;


  grid.grid();
  grid.exCell(x,y);
  grid.empCell();


  classic.countNeigh(char** oldGrid, char** newGrid);

return 0;
}
