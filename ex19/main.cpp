#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  //PIN:
  int pin[5];
  pin[0] = 6;
  pin[1] = 9;
  pin[2] = 4;
  pin[3] = 3;
  pin[4] = 0;

  //randomised sequence:
  int seq[10][2];
  for (int i = 0; i < 10; i++)
    {
      seq[i][0] = i;
    }
  for (int i = 0; i < 10; i++)
    {
      seq[i][1] = ((rand() % 10) % 3) + 1;
    }

  cout << "PIN:\t 0 1 2 3 4 5 6 7 8 9" << endl;
  cout << "NUM:\t";
  for (int i = 0; i < 10; i++)
    {
      cout << " " << seq[i][1];
    }
  cout << endl;
  

  //user input
  int uInput[5];
  for (int i = 0; i < 5; i++)
    {
      cout << "Input digit #" << i << "." << endl;
      cin >> uInput[i];
    }

  //validation
  int expInput[5];
  for (int i = 0; i < 5; i++)
    {
      
      //look for the digit of the pin in the sequence
      for (int j = 0; j < 10; j++)
	{
	  //if you find it, associate it with the correct translation
	  if (pin[i] == seq[j][0])
	    {
	      expInput[i] = seq[j][1];
	    }
	}
    }

  for (int i = 0; i < 5; i++)
    {
      if (uInput[i] != expInput[i])
	{
	  cout << "Wrong PIN!" << endl;
	  return 0;
	}
    }

  cout << "Take your money and shove it!" << endl;

  return 0;
}
