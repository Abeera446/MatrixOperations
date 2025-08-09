#include <iostream>
using namespace std;

int main() {

    int row, col;
    cout << "Enter number of rows & columns:";
    cin >> row >> col;

    int arr[row][col];

    cout << "Enter elements of the matrix:\n";
    for (int i=0; i<row; i++)
        for (int j=0; j<col; j++)
            cin >> arr[i][j];

    bool flag=true;
    for (int i=0; i<row; i++) {

        // Step 1: Find the minimum element in the current row
        int min = arr[i][0];
        int colindex = 0;
        for (int j=1; j<col; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
                colindex = j;
            }
        }

        // Step 2: Check if this min element is also the largest in its column
        for (int k=0; k<row; k++) {
            if (arr[k][colindex] > min) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "Saddle Point found: " << min << " at position (" << i << "," << colindex << ")" << endl;
            break; // You can remove this break if you want to find all saddle points
        }
    }

    if (!flag)
        cout << "No Saddle Point found." << endl;

    return 0;
}
