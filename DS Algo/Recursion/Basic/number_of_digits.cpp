#include<iostream>

using namespace std;
int number_of_digits(int n){
    if(n==0) return 0;
    return number_of_digits(n/10) + 1;
}
int main(){
    cout<<number_of_digits(40325);
    return 0;
}