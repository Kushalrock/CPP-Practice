// Problem Statement

// Print a 2d matrix in spiral order.
/*1 -> 2 -> 3 V
  4 -> 5 6 V
  ^ 7 <- 8 <- 9*/

// Output will be 1 2 3 6 9 8 7 4 5

#include<iostream>
#include<vector>

using namespace std;

void spiralPrint(vector<vector<int>> &matrix){
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> spiralPrintMatrix;

    int sr = 0;
    int er = m - 1;
    int sc = 0;
    int ec = n - 1;
    int count = 0;

    while(sr <= er && sc <= ec){
        for(int i = sc; i <= ec; i++){
            spiralPrintMatrix.push_back(matrix[sr][i]);
            count++;
        }
        sr++;
        for(int i = sr; i <= er; i++){
            spiralPrintMatrix.push_back(matrix[i][ec]);
            count++;
        }
        ec--;
        if(sr>er) break;
        for(int i = ec; i >= sc; i--){
            spiralPrintMatrix.push_back(matrix[er][i]);
        }
        er--;
        if(sc>ec) break;
        for(int i = er; i >= sr; i--){
            spiralPrintMatrix.push_back(matrix[i][sc]);
            count++;
        }
        sc++;
    }

    for(int i = 0; i < spiralPrintMatrix.size(); i++){
        cout<<spiralPrintMatrix[i]<<" ";
    }
}

int main(){
    vector<vector<int>> passVar;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    b.push_back(4);
    b.push_back(5);
    b.push_back(6);
    c.push_back(7);
    c.push_back(8);
    c.push_back(9);
    passVar.push_back(a);
    passVar.push_back(b);
    passVar.push_back(c);
    spiralPrint(passVar);
    return 0;
}
