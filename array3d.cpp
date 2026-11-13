#include <iostream>
using namespace std;

int main() {
    int array[2][3][4];
    int nilai1 = 6;
    int nilai2 = 3;
    int cek = 0;
    int i,j,k;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                array[i][j][k] = nilai1; 
                    nilai1 = nilai1 + 6;    
                cek++;
            }
        }
    }

    cout << "Rata-rata antar elemen Layer 1 (Kelipatan 6) dan Layer 2 (Kelipatan 3):\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                cout << array[i][j][k] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}