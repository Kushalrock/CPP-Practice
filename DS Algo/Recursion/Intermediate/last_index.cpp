#include<iostream>

using namespace std;

int lastIndex(int a[], int size, int key){
    if(size==0){
        return -1;
    }
    if(a[size-1]==key){
        return (size-1);
    }
    return lastIndex(a,size-1,key);
}

int main(){
    int a[] = {1,2,3,3,2,5};
    cout<<lastIndex(a,4,3);
    return 0;
}