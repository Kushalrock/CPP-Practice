#include<iostream>

using namespace std;

void characterArrPrint(char a[]){
    if(a[0]=='\0'){
        return;
    }
    cout<<a[0];
    characterArrPrint(a+1);
}
void characterArrPrintReverse(char a[]){
    if(a[0]=='\0'){
        return;
    }
    characterArrPrintReverse(a+1);
    cout<<a[0];
}

int main(){
    char name[100];
    cin>>name;
    characterArrPrint(name);
    cout<<endl;
    characterArrPrintReverse(name);
    return 0;
}