#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Enter size of matrix:";
    cin >> size;

    int matrix[size][size];
    bool flag=true;

    cout << "Enter elements of a " << size << "x" << size << " matrix:";
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++)
            cin >> matrix[i][j];
    }

    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            if((i==j && matrix[i][j]!=1) || (i!=j && matrix[i][j]!=0)) {
                flag=false;
                break;
            }
        }
        if (!flag)
            break;
    }

    if(flag)
        cout << "It is an identity matrix.";
    else
        cout << "It is not an identity matrix.";

    return 0;
}
