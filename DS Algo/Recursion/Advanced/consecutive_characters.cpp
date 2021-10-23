#include<iostream>

using namespace std;

void consecutiveCharacters(char a[]){
    if(a[0]=='\0'){
        return;
    }
    if(a[0]==a[1]){
        for(int i = 0; a[i]!='\0';i++){
            a[i] = a[i+1];
        }
        consecutiveCharacters(a);
    }
    else{
        consecutiveCharacters(a+1);
    }
}

int main(){
    char a[10];
    cin>>a;
    consecutiveCharacters(a);
    cout<<a;
    return 0;
}