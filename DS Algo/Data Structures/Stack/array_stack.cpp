#include <iostream>

using namespace std;

template <typename T>
class Stack{
    private:
        T *arr;
        int next_index;
        int capacity;
    public:
        Stack(){
            arr = new T[10];
            next_index = 0;
            capacity = 10;
        }
        Stack(int size){
            arr = new T[size];
            next_index = 0;
            capacity = size;
        }
        int size(){
            return next_index;
        }
        bool isEmpty(){
            return next_index == 0;
        }
        int getCapacity(){
            return capacity;
        }
        void push(T data){
            if(next_index == capacity){
                T *temp = new T[capacity*2];
                for(T i=0; i<capacity; i++){
                    temp[i] = arr[i];
                }
                delete[] arr;
                arr = temp;
                capacity *= 2;
            }
            arr[next_index] = data;
            next_index++;
        }
        void pop(){
            if(isEmpty()){
                try{
                    throw "Stack Underflow";
                }
                catch(const char* msg){
                    cout << msg << endl;
                    return;
                }
            }
            next_index--;
        }
        T top(bool is_print = false){
            if(isEmpty()){
                try{
                    throw "Stack Underflow";
                }
                catch(const char* msg){
                    cout << msg << endl;
                    return NULL;
                }
            }
            if(is_print){
                cout << arr[next_index-1] << endl;
            }
            return arr[next_index-1];
        }
};

int main()
{
    Stack<int> s(2);
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    s.pop();
    s.top(true);
    Stack<char> s1(2);
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s1.pop();
    s1.pop();
    s1.top(true);
    return 0;
}