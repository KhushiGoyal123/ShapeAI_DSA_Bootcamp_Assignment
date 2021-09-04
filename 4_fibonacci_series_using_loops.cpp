/* Write a program to display Fibonacci Series upto nth term.
(Using loois) */

#include<iostream>
using namespace std;
int main()
{
  int limit, first=0, second=1, next;
    cout <<"Enter the limit of Fibonacci series: ";
    cin >> limit;   
    cout << "First "<<limit<<" terms of Fibonacci series are :- "<<endl;
    //loop for printing fibonacci series
    for(int i=0;i<limit;i++)
    {
        if (i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout<<next<<" ";
    }
return 0;
}