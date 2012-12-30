#include <iostream>
#include "lifeFuncs.hpp"

using namespace std;

//START OF FUNCTION DEFINITION FOR void newCycle(bool [80][22])
void newCycle(bool world[80][22])
{
  while(true)
    {
      sleep(5);
      cout << "New cycle:" << endl;
      circleOfLife(world);
      printWorld(world);
      for (int i = 0; i < 80; i++)
	{
	  for (int j = 0; j < 22; j++)
	    {
	      if (world[i][j])
		{
		  break;
		}
	      else
		{
		  return;
		}
	    }
	}
    }
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR void printWorld(bool [80][22])
void printWorld(bool world[80][22])
{
  for (int i = 0; i < 80; i++)
    {
      for (int j = 0; j < 22; j++)
	{
	  if (world[i][j])
	    {
	      cout << "*";
	    }
	  else
	    {
	      cout << " ";
	    }
	}
      cout << endl;
    }
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR int neighbours(bool [80][22])
int neighbours(bool world[80][22], int x, int y)
{
  int neighbours = 0;

  //check straight directions
  if (((x - 1) > 0) && world[x - 1][y])
    {
      neighbours++;
    }
  if (((x + 1) < 80) && world[x + 1][y])
    {
      neighbours++;
    }
  if (((y - 1) > 0) && world[x][y - 1])
    {
      neighbours++;
    }
  if (((y + 1) < 22) && world[x][y + 1])
    {
      neighbours++;
    }
  //check diagonal directions
  if ((((x - 1) > 0) && ((y - 1) > 0)) && world[x - 1][y - 1])
    {
      neighbours++;
    }
  if ((((x + 1) < 80) && ((y - 1) > 0)) && world[x + 1][y - 1])
    {
      neighbours++;
    }
  if ((((x - 1) > 0) && ((y + 1) < 22)) && world[x - 1][y + 1])
    {
      neighbours++;
    }
  if ((((x + 1) < 80) && ((y + 1) < 22)) && world[x + 1][y + 1])
    {
      neighbours++;
    }

  return neighbours;
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR void circleOfLife(bool [80][22])
void circleOfLife(bool world[80][22])
{
  int neighbCount;

  for (int i = 0; i < 80; i++)
    {
      for (int j = 0; j < 22; j++)
	{
	  neighbCount = neighbours(world, i, j);

	  if (world[i][j] && (neighbCount < 2))
	    {
	      world[i][j] = false;
	    }
	  else if (world[i][j] && (neighbCount > 3))
	    {
	      world[i][j] = false;
	    }
	  else if (!world[i][j] && (neighbCount == 3))
	    {
	      world[i][j] = true;
	    }
	}
    }
}
//END OF FUNCTION DEFINIION
