#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //deklarasi variabel baris dan Nama File
    string baris, NamaFile;

    //Membuat input untuk menangkap nama file
    cout << "Masukkan nama file : " ;
    cin >> NamaFile;

    //membuat file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file dengan ekstensi txt
    outfile.open("C:\\Users\\Dell\\Documents\\contoh\\" + NamaFile + ".txt", ios::out);

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    
}