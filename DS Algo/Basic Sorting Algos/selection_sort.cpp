#include<iostream>
#include<algorithm>

using namespace std;

void selection_sort(int a[], int n){
    for(int i = 0; i<= n-2; i++){
        int smallest = i;
        for(int j=i+1; j<=n-1; j++){
            if(a[smallest] > a[j]){
                smallest = j;
            }
        }
        if(a[i] > a[smallest]){
            swap(a[i], a[smallest]);
        }
    }
}
int main(){
    int a[5] = {1,2,3,5,4};
    selection_sort(a, 5);
    for(int i = 0; i < 5; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}