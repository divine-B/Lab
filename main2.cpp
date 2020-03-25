#include <iostream>

using namespace std;

int main()


 {
    int A[] = {3,12,40,50,25,60,2,8,11,18,};
    int Max = A[0];
    for(int i=1;i<10;i++)
    if(A[i]>Max)
      Max = A[i];
   cout<< "The maximum value of the table is: " << Max<<endl;


   int B[] = {3,12,40,50,25,60,2,8,11,18,};
    int Min = B[0];
    for(int i=1;i<10;i++)
    if(B[i]<Min)
      Min = B[i];
   cout<< "The Minimum value of the table is: " << Min<<endl;



   return 0;
}
