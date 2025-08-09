#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int r1, c1, r2, c2, i, j, k;
    srand(time(0));

    cout << "Enter rows and columns of first matrix:";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix:";
    cin >> r2 >> c2;

    int m1[r1][c1], m2[r2][c2], m3[r1][c2];

    if (c1!=r2) {
        cout << "Invalid input.";
        return 0;
    }

    cout << "Matrix 1:" << endl;
    for (i=0; i<r1; i++) {
        for (j=0; j<c1; j++) {
            m1[i][j]=rand()%10+1;
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix 2:" << endl;
    for (i=0; i<r2; i++) {
        for (j=0; j<c2; j++) {
            m2[i][j]=rand()%10+1;
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The product of the matrices is:" << endl;
    for (i=0; i<r1; i++) {
        for (j=0; j<c2; j++) {
            m3[i][j]=0;
            for (k=0; k<c1; k++)    //common dimension
                m3[i][j]= m3[i][j] + m1[i][k]*m2[k][j];
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
