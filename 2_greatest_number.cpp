/* Write a program to find the largest number 
among three numbers entered by the user.*/

#include <iostream>
using namespace std;
int main() {
    int a, b, c, max;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    if((a>b) &&(a>c)){
        cout<<"Greatest number between the three is "<<a;
    }
    else if((b>a) &&(b>c)){
        cout<<"Greatest number between the three is "<<b;
    }
    else{
        cout<<"Greatest number between the three is "<<c;
    }
return 0;
}