#include <iostream>

bool isTranspose(int** matrix1, int** matrix2, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matrix1[i][j] != matrix2[j][i]){
                return false;
            }
        }
    }
    return true;
}

using namespace std;


//dota matrix az user migire va check mikone ke taranahade hastan ya na
int main() {
    int n = 3;
    

    int** matrix1 = new int*[n];
    int** matrix2 = new int*[n];

    for (int i = 0; i < n; i++) {
        matrix1[i] = new int[n];
        matrix2[i] = new int[n];
    }

    cout << "Enter elements for the first matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element (" << i << ", " << j << "): ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements for the second matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element (" << i << ", " << j << "): ";
            cin >> matrix2[i][j];
        }
    }

    cout << "First Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Second Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    cout<<isTranspose(matrix1, matrix2, n);

    for (int i = 0; i < n; i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
    }
    delete[] matrix1;
    delete[] matrix2;

    return 0;
}
