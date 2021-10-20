#include<iostream>

using namespace std;

int number_of_zeroes(int n){
    if(n== 0) return 0;
    int smallAns = number_of_zeroes(n/10);
    if(n%10 == 0){
        return smallAns + 1;
    }
    else{
        return smallAns;
    }
}
int main(){
    cout<<number_of_zeroes(102540);
    return 0;
}