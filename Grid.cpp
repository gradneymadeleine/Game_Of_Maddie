#include<iostream>
#include "Grid.h"

using namespace std;

//defalt constructor
Grid::Grid(){
  inRow = 10;
  inCol = 10;
  myGrid = new char*[inRow];
  myGridSqr = new char*[inRow];
  for(int i=0; i<inRow; ++i){//initialize the columns
    myGrid[i] = new char[inCol];
  }
}
Grid::Grid(int row, int col){
  inRow = row;
  inCol = col;
  myGrid = new char*[inRow];
  myGridSqr = new char*[inRow];
  for(int i=0; i<inRow; ++i){
    myGrid[i] = new char[inCol];
  }
}
Grid::~Grid(){ //destructor
  delete myGrid;
  delete myGridSqr;
}
// assign value to each cell

void Grid::grid(){
  for(int i= 0; i<inRow; ++i){
    for(int j=0; j<inCol; ++j){
      myGrid[i][j] = '-';

    }
  }
}
void Grid::empCell(){
  for(int i=0; i<inRow; ++i){
    for(int j=0; j<inCol; ++j){
      cout<< myGrid[i][j];
    }
     cout << "\n";
  }
}
void Grid::exCell(int x, int y){
   myGrid[x][y]= 'X';

}

//2-d array nested for loop for the grid
