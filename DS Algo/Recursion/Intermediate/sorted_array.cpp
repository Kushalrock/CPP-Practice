#include<iostream>

using namespace std;

bool isSorted(int a[], int n){
    if(n==0||n==1){
        return true;
    }
    if(a[0] > a[1]){
        return false;
    }
    bool isSortedSmallerArray = isSorted(a+1, n-1);
    return isSortedSmallerArray;
}

int main(){
    int a[] = {1,2,3};
    cout<<(isSorted(a, 3) == 1 ? "True" : "False");
    return 0;
}