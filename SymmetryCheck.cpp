#include <iostream>
#include <ctime>
using namespace std;

int main() {

    int r, c;
    cout << "Enter rows and columns of matrix:";
    cin >> r >> c;

    int arr[r][c];
    for(int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            cout << "Index [" << i << "][" << j << "]:";
            cin >> arr[i][j];
        }
    }

    bool flag=false;

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (arr[i][j]==arr[j][i])
                flag=true;
            else {
                flag=false;
                break;
            }
        }
    }

    if (flag)
        cout << "It is a symmetric matrix.";

    else
        cout << "It is not a symmetric matrix.";

    return 0;
}
