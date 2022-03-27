//
//  main.cpp
//  marshall
//
//  Created by Brian Toro on 27/03/22.
//

#include <iostream>

using namespace std;

int warshallVerification(int i, int j, int k, int mtrx[4][4])
{
  if ((mtrx[i][j] == 1) || (mtrx[i][k] == 1) && (mtrx[k][j] == 1))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}


int main(int argc, const char *argv[])
{
  int mtrx[4][4] = {{1, 0, 0, 1}, {0, 0, 0, 1}, {1, 0, 0, 0}, {0, 1, 0, 0}};
  for (int k = 0; k < 4; k++)
  {
    cout << "W" << k << endl;

    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        cout << " " << mtrx[i][j] << " ";
      }
      cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        mtrx[i][j] = warshallVerification(i, j, k, mtrx);
      }
    }
  }

  cout << "W" << 4 << " (Matriz de cierre transitivo)" << endl;

    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        cout << " " << mtrx[i][j] << " ";
      }
      cout << endl;
    }
    cout << endl;

  return 0;
}