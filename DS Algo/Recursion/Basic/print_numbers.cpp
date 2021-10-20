#include<iostream>

using namespace std;
int print_numbers_ascending(int n){
    if(n < 1) return -1;
    // Base case
    if(n == 1){
        cout<<1<<" ";
        return 1;
    }
    else{
        int val=  print_numbers_ascending(n-1) + 1;
        cout<<val<<" ";
        return val;
    }
    
}
void print_numbers_descending(int n){
    if(n < 1) return;
    cout<<n<<" ";
    print_numbers_descending(n-1);
}
int main(){
    print_numbers_ascending(5);
    cout<<endl;
    print_numbers_descending(5);
    return 0;
}