#include<iostream>

using namespace std;

bool checkPalindrome(int a[], int size, int start = 0){
    if(start > size-1){
        return true;
    }
    if(a[start] == a[size-1]){
        return checkPalindrome(a,size-1, start+1);
    }
    else{
        return false;
    }
}
int main(){
    int a[] = {1,2,3,1};
    cout<<checkPalindrome(a,4);
    return 0;
}