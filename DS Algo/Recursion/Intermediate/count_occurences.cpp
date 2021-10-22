#include<iostream>

using namespace std;
void countOccurences(int a[], int n, int key, int i, int &ans){
    if(i==n){
        return;
    }
    if(a[i]==key){
        ans++;
    }
    countOccurences(a,n,key,i+1,ans);
}
int main(){
    int a[] = {1,2,3,3,5,3,2,1,3,5,6,7,8};
    int ans = 0;
    countOccurences(a,13,3,0,ans);
    cout<<ans;
    return 0;
}