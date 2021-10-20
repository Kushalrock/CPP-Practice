#include<iostream>

using namespace std;

int power(int baseNumber, int powerCode){
    // Base case
    if(powerCode == 0) return 1;
    // Recursive case
    int powerRecursive = power(baseNumber, powerCode-1);

    return baseNumber * powerRecursive;
}

int main(){
    int baseNumber, powerCode;
    cout<<"Enter the number you want to take power of: ";
    cin>>baseNumber;
    cout<<"Enter the power you want: ";
    cin>>powerCode;
    cout<<power(baseNumber,powerCode);
    return 0;
}