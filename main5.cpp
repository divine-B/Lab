#include <iostream>

using namespace std;


int main()
{
  bool bAnswer;
  cout<< "OR Table\n\n";
  cout<<"0 + 0 = " <<(bAnswer = 0 + 0) << endl;
  cout<<"1 + 0 = " <<(bAnswer = 1 + 0) << endl;
  cout<<"0 + 1 = " <<(bAnswer = 0 + 1) << endl;
  cout<<"1 + 1 = " <<(bAnswer = 1 + 1) << endl;

  cout<< "AND Table\n\n";
  cout<<"0 & 0 = " <<(bAnswer = 0 & 0) << endl;
  cout<<"1 & 0 = " <<(bAnswer = 1 & 0) << endl;
  cout<<"0 & 1 = " <<(bAnswer = 0 & 1) << endl;
  cout<<"1 & 1 = " <<(bAnswer = 1 & 1) << endl;


  return 0;

}

