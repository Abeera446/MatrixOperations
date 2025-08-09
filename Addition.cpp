#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int r, c, i, j;
    cout << "Enter number of rows & columns of matrix:";
    cin >> r >> c;

    int m1[r][c], m2[r][c], sum[r][c];
    srand(time(0));

    cout << "Matrix 1:" << endl;
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            m1[i][j]= rand()%10+1;
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix 2:" << endl;
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            m2[i][j]= rand()%10+1;
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The sum of the two matrices is:" << endl;
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            sum[i][j]=m1[i][j]+m2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
