#include<iostream>

using namespace std;

template<class T>

void swapPrint(int n){
    T* a = new T[n];

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    cout << "Before Reverse: "<<endl;

    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;

    int start = 0;
    int end = n-1;

    while(start <= end){
        if(a[end] == '\0'){
            continue;
        }
        swap(a[start], a[end]);
        
        start++;
        end--;
    }

    cout << "After Reverse: "<<endl;

    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;

    swapPrint<char>(n);
    
    return 0;
}