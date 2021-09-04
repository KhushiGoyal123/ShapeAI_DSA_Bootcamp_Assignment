#include <iostream>
using namespace std;
int main()
{
    string input;
    cout<<"Enter the word: ";
    cin>>input;
    
    int words = 1;
    for(int i = 0; i < input.length(); ++i){
        if (input[i] < 97){
            words++;
        }
    }
   cout << words;
   return 0;
}