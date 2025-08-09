#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix:";
cin >> n;
    srand(time(0));
    int arr[n][n];

    cout << "Matrix:" << endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            arr[i][j]= rand()%10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose:" << endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
