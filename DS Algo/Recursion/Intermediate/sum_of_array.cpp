#include<iostream>

using namespace std;

int sumOfArray(int *a, int n){
    if(n==0){
        return 0;
    }
    int sum_of_array_recursive = sumOfArray(a+1, n-1);
    return sum_of_array_recursive + a[0];
}

int sumOfArray2(int *a, int n){
    if(n==0){
        return 0;
    }
    int sum_of_array_recursive = sumOfArray2(a, n-1);
    return sum_of_array_recursive + a[n-1];
}

int sumOfArray3(int *a, int n, int i = 0){
    if(i==n){
        return 0;
    }
    int sum_of_array_recursive = sumOfArray3(a, n, i-1);
    return sum_of_array_recursive + a[i];
}

int main(){
    int* a = new int[3];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    cout<<sumOfArray(a, 3);
    cout<<sumOfArray2(a, 3);
    return 0;
}