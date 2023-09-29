#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    int terbesar; // Asumsi x adalah terbesar awalnya

    // memasukkan nilai x, y, dan z
    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;
    cout << "Masukkan nilai z: ";
    cin >> z;

    // Memeriksa apakah y atau z lebih besar dari x
    if (y > x && y > z) {
        terbesar = y;
    }

    if (z > x && z > y) {
        terbesar = z;
    }
    
    if (x > y && x >> z)
    {
        terbesar = x;
    }

    // Menampilkan nilai terbesar
    cout << "Nilai terbesar adalah: " << terbesar << endl;

    return 0;
}
