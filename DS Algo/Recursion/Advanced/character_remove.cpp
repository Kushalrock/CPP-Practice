#include<iostream>

using namespace std;

void characterRemove(char a[], char removeChar){
    if(a[0]=='\0'){
        return;
    }
    if(a[0]!=removeChar){
        characterRemove(a+1,removeChar);
    }
    else{
        for(int i = 0; a[i]!='\0';i++){
            a[i] = a[i+1];
        }
        characterRemove(a,removeChar);
    }
}

int main(){
    char a[10];
    cin>>a;
    characterRemove(a,'b');
    cout<<a;
    return 0;
}