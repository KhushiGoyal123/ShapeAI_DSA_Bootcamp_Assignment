#include<iostream>
using namespace std;
int main()
{

int n,d;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Steps to rotate the array: ";
    cin>>d;
    for(int i=0;i<n;i++){
        cout<<"Enter array element"<<i+1<<": ";
        cin>>a[i];
    };
    d=d%n;
    for(int i=d;i<n;i++)
        cout<<a[i]<<" ";
    
    for(int i=0;i<d;i++)
         cout<<a[i]<<" ";
    return 0; 
}

 