#include <iostream>

using namespace std;


int main()
{
    int Q1;
  cout<<"HEY, I'm alive! Oh, Hello World!\n";
  cin.get();
  cout<<"I need your input.\n";
  cin.get();
  cout<<"1 is true and 0 is false.\n";//Next section will determine if true or false.
  cin>> Q1;
  cin.ignore();
  if (Q1!=0&&Q1!=1){
    cout<<"The input, "<<Q1;
    cout<<", is invalid.\n";
    cin.get();
  }
  else if (Q1==0){
    cout<<"This input is false.\n";
    cin.get();
  }
  else {
    cout<<"The input is true.\n";
    cin.get();
  }

  }
