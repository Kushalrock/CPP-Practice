#include<iostream>

using namespace std;

int staircaseProblem(int n){
    if(n==2){
        return 2;
    }
    if(n==0 || n==1){
        return 1;
    }
    return staircaseProblem(n-1) + staircaseProblem(n-2) + staircaseProblem(n-3);
}

int main(){
    int n;
    cin>>n;
    cout<<staircaseProblem(n);
    return 0;
}