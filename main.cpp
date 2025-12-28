#include <iostream>
#include "factorial.h"
#include "timer.h"

using namespace std;

int main() {
    int n;

    cout << "=========================================\n";
    cout << " PERBANDINGAN ALGORITMA FAKTORIAL\n";
    cout << " Iteratif vs Rekursif\n";
    cout << "=========================================\n";
    cout << "Masukkan nilai n: ";
    cin >> n;

    // Hitung hasil & operasi
    FactorialResult iter = factorialIterative(n);
    FactorialResult rec  = factorialRecursive(n);

    cout << "\nHASIL PERHITUNGAN\n";
    cout << "Faktorial Iteratif : " << iter.value << endl;
    cout << "Faktorial Rekursif : " << rec.value << endl;

    cout << "\nJUMLAH OPERASI DASAR\n";
    cout << "Iteratif  : " << iter.operationCount << endl;
    cout << "Rekursif  : " << rec.operationCount << endl;

    // Hitung waktu eksekusi
    cout << "\nWAKTU EKSEKUSI (nanodetik)\n";
    cout << "Iteratif  : " << measureIterativeTime(n) << endl;
    cout << "Rekursif  : " << measureRecursiveTime(n) << endl;

    return 0;
}
