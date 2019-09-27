#include <iostream>
#include "Classic.h"
#include "Grid.h"



using namespace std;

Classic::Classic(){ //default constructor
  



}

Classic::Classic(char **grid, int r, int c){
  classCount = 0;
  classGrid = grid;
  classRow = r;
  classCol = c;

}

void Classic::classCk(){
  for(int i=0; i<classRow; i++){
    for(int j=0; j<classCol; j++){

      //  corners
      //  left top corner of grid
      if(i==0 &&j==0){
        if (classGrid[0][1] == 'X'){
          classCount++;
        }
        else if(classGrid[1][0] == 'X'){
          classCount++;
        }
        else if(classGrid[1][1] == 'X'){
          classCount++;
        }
      }
      //right top corner of gird
      else if(i==0 && j ==classCol-1){
        if(classGrid[1][classCol-1] == 'X'){
          classCount++;
        }
        else if(classGrid[1][classCol-2] == 'X'){
          classCount++;
        }
        else if(classGrid[0][classCol-2] == 'X'){
          classCount++;
        }
      }
      //left bottom corner of grid
      else if(i==classRow-1 && j==0){
        if(classGrid[classRow-1][1]== 'X'){
          classCount++;
        }
        else if(classGrid[classRow-2][0] == 'X'){
          classCount++;
        }
        else if(classGrid[classRow-2][1] == 'X'){
          classCount++;
        }
      }
      //right bottom corne of grid
      else if(i ==classRow-1 && j==classCol-1){
        if(classGrid[classRow-1][classCol-2]){
          classCount++;
        }
        else if(classGrid[classRow-2][classCol-1]){
          classCount++;
        }
        else if(classGrid[classRow-2][classCol-2]){
          classCount++;
        }
      }

      //top row of the grid
      else if(i == 0 && j!=0 && j!=classCol-1){
        if(classGrid[i][j]){
          if(classGrid[i][j+1]){
            classCount++;
          }
          if(classGrid[i+1][j]){
            classCount++;
          }
          if(classGrid[i][j-1]){
            classCount++;
          }
          if(classGrid[i+1][j-1]){
            classCount++;
          }
          if(classGrid[i+1][j+1]){
            classCount++;
          }
        }
      }
      //left columnn of the grid
      else if( i !=0 && i!=classRow-1 && j==0){
        if(classGrid[i][j]){
          if(classGrid[i+1][j+1]){
            classCount++;
          }
          else if(classGrid[i+1][j]){
            classCount++;
          }
          else if(classGrid[i][j+1]){
            classCount++;
          }
          else if(classGrid[i-1][j+1]){
            classCount++;
          }
          else if(classGrid[i-1][j]){
            classCount++;
          }
        }
      }
      //bottom row of the grid
      else if(i == classRow-1 && j != classCol-1 && j!=0){
        if(classGrid[i][j]){
          if(classGrid[i][j+1]){
            classCount++;
          }
          if(classGrid[i-1][j]){
            classCount++;
          }
          if(classGrid[i][j-1]){
            classCount++;
          }
          if(classGrid[i-1][j-1]){
            classCount++;
          }
          if(classGrid[i-1][j+1]){
            classCount++;
          }
      }
    }
    // right column of the grid
    else if(i !=0 && i!=classRow-1 && j==classCol-1){
      if(classGrid[i][j]){
        if(classGrid[i+1][j-1]){
          classCount++;
        }
        else if(classGrid[i+1][j]){
          classCount++;
        }
        else if(classGrid[i][j-1]){
          classCount++;
        }
        else if(classGrid[i-1][j-1]){
          classCount++;
        }
        else if(classGrid[i-1][j]){
          classCount++;
        }
    }
  }
  // the middle of the grid
  else if( i>0 && i<classRow-1 && j>0 && j<classCol-1){
    if(classGrid[i][j]){
      if(classGrid[i-1][j-1]){
        classCount++;
      }
      else if(classGrid[i-1][j]){
        classCount++;
      }
      else if(classGrid[i-1][j+1]){
        classCount++;
      }
      else if(classGrid[i][j-1]){
        classCount++;
      }
      else if(classGrid[i][j+1]){
        classCount++;
      }
      else if(classGrid[i+1][j-1]){
        classCount++;
      }
      else if(classGrid[i+1][j]){
        classCount++;
      }
      else if(classGrid[i+1][j+1]){
        classCount++;
      }
    }
  }
}
}
}
  void Classic::countNeigh(char** oldGrid, char** newGrid){
    for(int i=0; i<classRow; ++i)
    {
      for(int j=0; j<classCol; ++j)
      {
        if(classCount <=1){
          if(oldGrid[i][j]=='-')
          {
            newGrid[i][j] = '-';
          }
          else if(oldGrid[i][j]=='X')
          {
            newGrid[i][j] = '-';
          }
        }
        else if(classCount ==2){
          if(oldGrid[i][j]=='-')
          {
            newGrid[i][j] = '-';
          }
          else if(oldGrid[i][j]=='X')
          {
            newGrid[i][j] = 'X';
          }
        }
        else if(classCount== 3){
          if(oldGrid[i][j]=='-')
          {
            newGrid[i][j] = 'X';
          }
          else if(oldGrid[i][j]=='X')
          {
            newGrid[i][j] = 'X';
          }
        }
        else if(classCount>= 4){
          if(oldGrid[i][j]=='-')
          {
            newGrid[i][j] = '-';
          }
          else if(oldGrid[i][j]=='X')
          {
            newGrid[i][j] = '-';
          }
        }
      }
    }
  }
