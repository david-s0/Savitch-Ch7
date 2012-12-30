#include <iostream>
#include "lifeFuncs.hpp"

using namespace std;

int main()
{
  bool world[80][22];
  bool addMore = true;
  char answer;
  int in1, in2;
	
  for (int i = 0; i < 80; i++)
    {
      for (int j = 0; j < 22; j++)
	{
	  world[i][j] = false;
	}
    }

  cout << "Input starting configuration:" << endl;
  while (addMore)
    {
      cout << "X coordinate:" << endl;
      cin >> in1;
      cout << "Y coordinate:" << endl;
      cin >> in2;
      world[in1][in2] = true;
      cout << "Would you like to continue (y/n)?" << endl;
      cin >> answer;
      if (answer != 'y')
	{
	  addMore = false;
	}
    }
      
  printWorld(world);

  newCycle(world);

  return 0;
}
