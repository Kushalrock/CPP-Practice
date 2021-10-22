#include<iostream>

using namespace std;

bool checkIfKeyPresent(int a[], int n, int key){
    if(n==0){
        return false;
    }
    if(a[0] == key){
        return true;
    }
    return checkIfKeyPresent(a+1, n-1, key);
        

}

int main(){
    int a[] = {1,2,3};
    cout<<checkIfKeyPresent(a, 3, 4);
    return 0;
}