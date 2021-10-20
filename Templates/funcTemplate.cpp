#include<iostream>

using namespace std;

template <class T1>
T1 avgFunc(T1* arr){
    T1 returnVal = 0;
    for(int i = 0; i <= sizeof(arr)/sizeof(arr[0]); i++){
        cout<<arr[i]<<endl;
        returnVal += arr[i];
        cout<<"Return VAl "<< returnVal<< endl;
    }
    return returnVal;
}
int main(){
    float *arr = new float[3];
    arr[0] = 1.2;
    arr[1] = 2.2;
    arr[2] = 3.2;
    cout<<avgFunc(arr);
    return 0;
}