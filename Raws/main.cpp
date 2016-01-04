#include <iostream>

using namespace std;

int main()
{
    int TrueOrFalse;
  cout<<"HEY, I'm alive! Oh, Hello World!\n";
  cin.get();
  cout<<"I need your input.\n";
  cin.get();
  cout<<"1 is true and 0 is false.";
  cin>> TrueOrFalse;
  cin.ignore();
  if (!(TrueOrFalse == 1||0))
    {
        cout<<"The input">>TrueOrFalse "is not recognized";
    }

  }
