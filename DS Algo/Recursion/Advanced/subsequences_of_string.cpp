#include<iostream>
#include<cstring>

using namespace std;

void subsequencesOfString(string a, string output){
    if(a.length() == 0){
        cout<<output<<endl;
        return;
    }
    subsequencesOfString(a.substr(1),output);
    subsequencesOfString(a.substr(1),output + a[0]);
}

int main(){
    string a = "ab";
    string output = "";
    subsequencesOfString(a, output);
    return 0;
}