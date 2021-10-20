#include<iostream>

using namespace std;

int linear_search(int* arr, int n, int key){
    for(int i = 0; i <= n-1; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int size;
    cout<<"Please enter the size of array: "<<endl;
    cin>>size;
    int* arr = new int[size];
    for(int i = 0; i< size; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Please enter the key you wish to find: "<<endl;
    cin>>key;
    cout<<linear_search(arr, size, key);
    return 0;
}