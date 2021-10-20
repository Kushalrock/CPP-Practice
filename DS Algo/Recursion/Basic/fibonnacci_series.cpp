#include<iostream>

using namespace std;

int fibonnaci(int n){
    // Base case
    if(n==0) return 0;
    else if(n==1) return 1;


    else{
        return (fibonnaci(n-1) + fibonnaci(n-2));
    }
}

int main(){
    cout <<fibonnaci(4);
    return 0;
}