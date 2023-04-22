/*
NAMA :  DHEA TANIA SALSABILAH HARAHAP
NIM  : 221401092
LAB 6 ALPRO
Program Kasir Sederhana
*/

#include <iostream>
using namespace std;

int main(){
    system("CLS");
    int jumlah_beli, uang, diskon, jumlah_barang[50], harga_barang[50], total_barang[50];
    string nama_barang[50];
    float total_harga, total_harga_1, total_kembalian;

    cout << "========PROGRAM KASIR SEDERHANA========" << endl;
    cout << "---------------------------------------" << endl;
    cout << "\n";
    
    //user menginput jumlah barang yang akan dibeli
    cout << "Masukkan jumlah barang yang dibeli : ";
    cin >> jumlah_beli;
    total_harga=0;
    //perulangan untuk menginput sesuai dengan jumlah barang yang akan dibeli oleh user
    for (int i=0; i<jumlah_beli; i++){
        cout << "\n";
        cout << "Barang Ke-" << i+1 << endl;

        cout << "Nama Barang    : ";
        cin >> nama_barang[i]; //user menginput nama barang dan disimpan pada array nama_barang

        cout << "Jumlah         : ";
        cin >> jumlah_barang[i]; //user menginput jumlah barang dan disimpan pada array jumlah_barang

        cout << "Harga barang   : Rp ";
        cin >> harga_barang[i]; //user menginput harga barang dan disimpan pada array harga_barang

        total_barang[i]=jumlah_barang[i]*harga_barang[i]; //menjumlahkan harga total barang yang dibeli
        total_harga = total_harga + total_barang[i]; //menjumlahkan seluruh barang belanjaan
    }
     
    system("CLS");
    cout << "=================== STRUK TOKO BOBOBOI ===================" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "\n";
    cout << "_______________________" << endl;
    cout << "| No | Nama Barang | Jumlah Barang | Harga Barang | Total Harga |" << endl;
    for (int i=0; i<jumlah_beli; i++) {
        cout << "|  " << i+1 <<" |    " << nama_barang[i] << "    |       " << jumlah_barang[i] << "       |     " << harga_barang[i] << "    |     " << total_barang[i] << "   | " << endl; //menampilkan semua array 
    }
    cout << "_______________________" << endl;
    //untuk menentukan diskon
    if ( total_harga >= 1000000){
        diskon = 0.1 * total_harga;
    } else if (total_harga >= 500000){
        diskon = 0.05 * total_harga;
    } else if (total_harga >= 250000){
        diskon = 0.02 * total_harga;
    } else {
        diskon = 0;
    }
    //menampilkan keterangan
    cout << "\n";
    cout << "==========================================================" << endl;
    cout << "Jumlah (sebelum diskon)    : Rp " << total_harga << endl;
    cout << "Diskon                     : Rp " << diskon << endl;
    total_harga_1 = total_harga - diskon; //menghitung jumlah setelah diskon
    cout << "Jumlah (setelah diskon)    : Rp " << total_harga_1 << endl;
    cout << "\n";
    cout << "\n";
    cout << "==========================================================" << endl;
    cout << "Jumlah Uang    : Rp ";
    cin >> uang; 
    total_kembalian = uang - total_harga_1; //menghitung uang kembalian
    cout << "Kembalian      : Rp " << total_kembalian << endl;
    cout << "==========================================================" << endl;
    cout << "\n";
    cout << "-------TERIMA KASIH TELAH BERBELANJA DI TOKO BOBOBOI------" << endl;
}