#include<iostream>

using namespace std;

void characterReplace(char a[], char keyToReplace, char replaceWith){
    if(a[0]=='\0'){
        return;
    }
    if(a[0]==keyToReplace){
        a[0]=replaceWith;
    }
    characterReplace(a+1,keyToReplace,replaceWith);
}

int main(){
    char a[10];
    cin>>a;
    characterReplace(a,'b','c');
    cout<<a;
    return 0;
}