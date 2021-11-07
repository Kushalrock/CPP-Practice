#include<iostream>
#include<stack>

using namespace std;

bool isValid(string A) {
        stack<char> s;
        
        for(int i=0;i<A.size();i++){
            
            if(A[i]=='(' || A[i]=='{' || A[i]=='['){
                s.push(A[i]);
            } else{
                
                if(s.empty()) return false; /// imp otherwise run time erro
                else if(A[i]==')'){
                    if(s.top() == '(') s.pop();
                    else return false;
                }else if(A[i]=='}'){
                    if(s.top() == '{') s.pop();
                    else return false;
                }else if(A[i]==']'){
                    if(!s.empty() && s.top() == '[') s.pop();
                    else return false;
                }
                
            }
            
        }
        
        if(s.empty()) return true;
        
        return false;
    }
int main()
{
    /*stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    while(s.empty()==false)
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    s.pop();*/

    cout<<isValid(")")<<endl;
    return 0;
}