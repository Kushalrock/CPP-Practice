#include<iostream>

using namespace std;

int firstIndex(int a[], int size, int key, int i = 0){
    if(i==size){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return firstIndex(a,size,key,i+1);
}

int main(){
    int a[] = {1,2,3,3};
    cout<<firstIndex(a,4,2);
    return 0;
}