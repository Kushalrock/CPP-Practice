#include<iostream>

using namespace std;

void printAllIndex(int a[], int size, int key, int i = 0){
    if(i==size){
        return;
    }
    if(a[i]==key){
        cout<<i<<" ";
    }
    printAllIndex(a,size,key,i+1);
}

int main(){
    int a[] = {1,2,3,3,5,3,2,1,3,5,6,7,8};
    printAllIndex(a,13,3);
    return 0;
}