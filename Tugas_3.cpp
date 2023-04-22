 /*
 NAMA : DHEA TANIA SALSABILAH HARAHAP
 NIM  : 221401092
 LAB 6 ALPRO
 Program Piramid ABCD 
 */

#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int n;
    char ch = 'A';
    cout << "Masukkan angka urutan Alphabet : ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        if (i == n) {  //akan berjalan jika kondisi i = n
            for (int j = 2; j <= i; j++) {
                cout << ch++;
            }
            for (int j = 1; j <= i; j++) {
                cout << ch--;
            } 
            ch--;
        } else {  //selain kondisi i = n
            for (int j = 1; j <= i; j++) {
                cout << ch++;
            }
            ch--;
            for (int j = 1; j <=…
[16.07, 20/4/2023] Ivanny: #include <iostream>
using namespace std;

int main() {
    system("CLS");
    int jumlah; 
    float total, angka, rata;
    
    cout << "1. Mencari Rata-rata. (jumlah angka ditentukan)" << endl;
    cout << endl;
    cout << "Masukkan jumlah angka      : "; 
    cin >> jumlah;
    cout << endl;
   total = 0;
    for (int i = 1; i <= jumlah; i++) {
        cout << "Angka ke - " << i+1 << endl;
        cout << "Masukkan angka : "; 
        cin >> angka;
        total = total + angka;
    } 
    cout << endl;
    cout << "Total                      : " << total << endl;
    rata = total / jumlah;
    cout << "Rata-rata                 `: " << rata << endl;

}