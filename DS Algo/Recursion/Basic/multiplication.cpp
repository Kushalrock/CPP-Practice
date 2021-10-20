#include<iostream>

using namespace std;

int multiply(int m, int n){
    if(n == 0){
        return 0;
    }
    return m + multiply(m, n-1);
}
int main(){
    cout<<multiply(10,5);
    return 0;
}