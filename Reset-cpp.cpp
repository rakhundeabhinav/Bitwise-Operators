// Abhinav Rakhunde
// 24070123001

#include<iostream>
using namespace std;

int main(){
    int a,reset,output;
    cout<<"Enter the number to reset\n";
    cin>>a;
    cout<<"Enter the bit to reset\n";
    cin>>reset;
    int x=1<<reset;
    output=(a&(~x));
    cout<<"Reset number is "<<output;
    return 0;    
}

/* OUTPUT:
Enter the number to reset
5
Enter the bit to reset
0
Reset number is 4
*/