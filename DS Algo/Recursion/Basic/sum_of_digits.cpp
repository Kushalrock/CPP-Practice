#include<iostream>

using namespace std;
int sum_of_digits(int n){
    if(n==0) return 0;
    return sum_of_digits(n/10) + n%10;
}
int main(){
    cout<<sum_of_digits(1567);
    return 0;
}