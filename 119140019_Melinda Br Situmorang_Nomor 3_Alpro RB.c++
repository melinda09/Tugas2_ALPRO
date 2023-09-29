#include <iostream>
using namespace std;

int main() {
    int x, y;
    int terbesar; // Asumsi x adalah terbesar awalnya

    ///user memasukkan nilai x dan y
    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai z: ";
    cin >> y;

    // Memeriksa apakah y lebih besar dari x
    if (y > x) {
        terbesar = y;
    } else {
        terbesar = x; // Jika y tidak lebih besar, maka x adalah yang terbesar
    }

    // Menampilkan nilai terbesar
    cout << "Nilai terbesar adalah: " << terbesar << endl;

    return 0;
}
