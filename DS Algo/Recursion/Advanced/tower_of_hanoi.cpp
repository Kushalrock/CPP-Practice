#include<iostream>

using namespace std;

int towerOfHanoi(int n){
    if(n==0){
        return n;
    }
    return towerOfHanoi(n-1)+ towerOfHanoi(n-1) + 1;
}

void printSteps(int n, char s, char d, char h){
    if(n==0){
        return;
    }
    printSteps(n-1, s, h, d);
    cout<<n<<" "<<" from "<<s<<" to "<<d<<endl;
    printSteps(n-1, h, d, s);
}

int main(){
    printSteps(3,'A', 'C', 'B');
    return 0;
}