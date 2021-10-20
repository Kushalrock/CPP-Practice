#include <iostream>
#include "dynamic_arr.cpp"

using namespace std;

int main(){
    DynamicArray dynamicArray;
    dynamicArray.add(60);
    dynamicArray.add(60);
    dynamicArray.add(60);
    dynamicArray.add(60);
    DynamicArray dynamicArray2;
    dynamicArray2 = dynamicArray; // Deep Copy
    dynamicArray.add(60);
    dynamicArray2.add(70);

    int* displayArr = dynamicArray.getArr();
    int* displayArr2 = dynamicArray2.getArr();
    for(int i = 0; i < dynamicArray.getCapacity(); i++){
        cout<<displayArr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < dynamicArray2.getCapacity(); i++){
        cout<<displayArr2[i]<<" ";
    }
    return 0;
}