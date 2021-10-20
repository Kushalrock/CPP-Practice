#include<iostream>
#include<algorithm>

using namespace std;

void optimized_bubble_sort(int a[], int n){
    for(int i = 0; i <= n-1; i++){
        bool flag = false;
        for(int j = 0; j <= n-2; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                flag = true;
            }
        }
        if(flag == false){
            break;
        }
    }
}

int main(){
    int a[5] = {1,2,3,4,5};
    optimized_bubble_sort(a, 5);
    for(int i = 0; i < 5; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}