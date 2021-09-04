/* Write a program to Swap to two numbers. */
#include <iostream>
using namespace std;
int main(){
   int a=10, b=20, temp;
   cout<<"Before Swapping: ";
   cout<<a<<" "<<b;
   temp=a;
   a=b;
   b=temp;
   cout<<"\nAfter Swapping: ";
   cout<<a<<" "<<b;
return 0;
}

