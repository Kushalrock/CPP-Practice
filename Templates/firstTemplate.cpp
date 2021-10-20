#include<iostream>

using namespace std;

template <class T>
class Vector{
    public:
        T* arr;
        Vector(T a = 0, T b = 0, T c = 0){
            size= m;
            arr = new T[3];
            arr[0] = a;
            arr[1] = b;
            arr[2] = c;
        }
        T dotProduct(Vector &v){
            T returnVal = 0;
            for(int i = 0; i < 3; i++){
                returnVal += this->arr[i] * v.arr[i];
                cout<<"Return Val: "<<returnVal<<endl;
            }
            return returnVal;
        }
};

int main(){
    Vector <int> v1(1,2,3);
    Vector <int> v2(2,3,4);
    Vector<float> v3(1.5,1.6,1.7);
    Vector<float> v4(2.0,2.5,3.0);
    cout<<v4.dotProduct(v3)<<endl;
    cout<<v2.dotProduct(v1);
    return 0;
}
