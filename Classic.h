#include <iostream>

using namespace std;

class Classic{
public:
  Classic();
  Classic(char **grid, int r, int c);

  void classCk();
  void countNeigh(char** oldGrid, char** newGrid);

  int classCount;
  int classRow;
  int classCol;
  char **classGrid;
};
