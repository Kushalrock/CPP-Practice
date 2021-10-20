#include<iostream>

using namespace std;

int binary_search(int* arr, int n, int key){
    int s = 0;
    int e = n-1;
    while(s <= e){
        int mid = s + (e-s/2); // Overflow possibility therefore we use this type of expression
        if(arr[mid] == key) {return mid;}
        else if(arr[mid] > key){ e = mid - 1;}
        else{s= mid+ 1;}
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
    cout<<binary_search(arr, size, key);
    return 0;
}