#include <iostream>

using namespace std;

int main()
{
  char value[5];
  int valueCollection[14] = {0};
  char suite[5];
  bool pair1 = false, pair2 = false, three = false, four = false, straight = false, flush = false;

  cout << "Input the five cards in your hand:" << endl;

  for (int i = 0; i < 5; i++)
    {
      cout << "Card (2-9, 0, a, j, q, k):" << endl;
      cin >> value[i];
      cout << "Suite (c, w, d, p):" << endl;
      cin >> suite[i];
    }

  for (int i = 0; i < 5; i++)
    {
      if (value[i] == 'a')
	{
	  valueCollection[1]++;
	}
      else if (value[i] == '2')
	{
	  valueCollection[2]++;
	}
      else if (value[i] == '3')
	{
	  valueCollection[3]++;
	}
      else if (value[i] == '4')
	{
	  valueCollection[4]++;
	}
      else if (value[i] == '5')
	{
	  valueCollection[5]++;
	}
      else if (value[i] == '6')
	{
	  valueCollection[6]++;
	}
      else if (value[i] == '7')
	{
	  valueCollection[7]++;
	}
      else if (value[i] == '8')
	{
	  valueCollection[8]++;
	}
      else if (value[i] == '8')
	{
	  valueCollection[9]++;
	}
      else if (value[i] == '0')
	{
	  valueCollection[0]++;
	}
      else if (value[i] == 'j')
	{
	  valueCollection[11]++;
	}
      else if (value[i] == 'q')
	{
	  valueCollection[12]++;
	}
      else if (value[i] == 'k')
	{
	  valueCollection[13]++;
	}
    }

  if ((suite[0] == suite[1]) && (suite[1] == suite[2]) && (suite[2] == suite[3]) && (suite[3] == suite[4]))
    {
      flush = true;
    }

  for (int i = 1; i < 14; i++)
    {
      if (valueCollection[i] == 2)
	{
	  if (pair1 && (valueCollection[i] == 2))
	    {
	      pair2 = true;
	    }
	  pair1 = true;
	  continue;
	}
      if (valueCollection[i] == 3)
	{
	  three = true;
	}
      if (valueCollection[i] == 4)
	{
	  four = true;
	}
    }

  for (int i = 1; i < 14; i++)
    {
      if (valueCollection[i] == 1)
	{
	  if ((valueCollection[i + 1] == 1) &&  (valueCollection[i + 2] == 1) && (valueCollection[i + 3] == 1) && (valueCollection[i + 4] == 1))
	    {
	      straight = true;
	    }
	}
    }

  if (pair1 && pair2)
    {
      cout << "You have two pairs." << endl;
    }
  else if (pair1 && three)
    {
      cout << "You have a full house." << endl;
    }
  else if (pair1)
    {
      cout << "You have one pair." << endl;
    }
  else if (three)
    {
      cout << "You have three of a kind." << endl;
    }
  else if (four)
    {
      cout << "You have four of a kind." << endl;
    }
  else if (straight && flush)
    {
      cout << "You have a straight flush." << endl;
    }
  else if (straight)
    {
      cout << "You have a straight." << endl;
    }
  else if (flush)
    {
      cout << "You have a flush." << endl;
    }
  else
    {
      cout << "You have nothing." << endl;
    }

  //0 = nothing
  //1 = one pair
  //2 = two pairs
  //3 = three of a kind
  //4 = four of a kind
  //5 = straight (cards in order)
  //6 = flush (all same suit)
  //7 = full house (one pair + three of a kind)
  //8 = straight flush

  return 0;
}
