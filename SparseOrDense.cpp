#include <iostream>
using namespace std;

int main() {

    int m, n;
    cout << "Enter number of rows:";
    cin >> m;
    cout << "Enter number of columns:";
    cin >> n;

    int matrix[m][n];
    int zeroCount=0, numcount=0;

    cout << "Enter elements of the matrix:";
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> matrix[i][j];
            if(matrix[i][j]==0)
                zeroCount++;
            else
                numcount++;
        }
    }

    if(zeroCount>numcount)
        cout << "It is a sparse matrix.";
    else
        cout << "It is a dense matrix.";

    return 0;
}