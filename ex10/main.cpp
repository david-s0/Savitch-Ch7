#include <iostream>

using namespace std;

int main()
{
  char board[10];
  int input;
  bool turn = true;

  for (int i = 0; i < 10; i++)
    {
      board[i] = 'N';
    }

  cout << "X goes first." << endl;
  while (true)
    {
      for (int i = 1; i < 10; i++)
	{
	  if (board[i] == 'N')
	    {
	      cout << i << " ";
	    }
	  else
	    {
	      cout << board[i] << " ";
	    }
	  if (!(i % 3))
	    {
	      cout << endl;
	    }
	}
      
      //determine victory
      if ((((board[1] == board[2]) && (board[2] == board[3])) || ((board[1] == board[5]) && (board[5] == board[9])) || ((board[1] == board[4]) && (board[4] == board[7]))) && board[1] != 'N')
	{
	  cout << endl << board[1] << " won." << endl;
	  break;
	}
      if (
	  (((board[3] == board[6]) && (board[6] == board[9])) || ((board[3] == board[5]) && (board[5] == board[7]))) && (board[3] != 'N'))
	{
	  cout << endl << board[3] << " won." << endl;
	  break;
	}
      if (((board[2] == board[5]) && (board[5] == board[8])) && (board[2] != 'N'))
	{
	  cout << endl << board[2] << " won." << endl;
	  break;
	}
      if (((board[4] == board[5]) && (board[5] == board[6])) && (board[4] != 'N'))
	{
	  cout << endl << board[4] << " won." << endl;
	  break;
	}
      if (((board[7] == board[8]) && (board[8] == board[9])) && (board[7] != 'N'))
	{
	  cout << endl << board[7] << " won." << endl;
	  break;
	}

      cout << "Make your move:" << endl;
      cin >> input;
      cout << endl;

      if (board[input] != 'N')
	{
	  cout << "Wrong move, try again!" << endl;
	  continue;
	}

      if (turn)
	{
	  board[input] = 'X';
	}
      else
	{
	  board[input] = 'O';
	}
      turn = !turn;
    }

  return 0;
}
