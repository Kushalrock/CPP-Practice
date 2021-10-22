#include<iostream>
#include<cmath>

using namespace std;

float geometric_sum(int n, int m = 2){
    if(n == 0){
        return 1;
    }
    return geometric_sum(n-1, m) + 1/pow(m, n);
}

int main(){
    cout<<geometric_sum(2);
    return 0;
}