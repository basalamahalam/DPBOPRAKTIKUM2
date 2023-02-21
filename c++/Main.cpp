//library default c dan memanggil file Human.cpp
#include <bits/stdc++.h>
#include "Human.cpp"

using namespace std;//mengindikasi bahwa saya menggunakan semua fungsi kelas dan objek terdefinisi di namespace std dalam program ini

int main(){
    list<Mahasiswa> data;//deklarasi variabel mahasiswa

    //membuat varibel yang menampung input dari class Mahasiswa serta mengisi array tersebut dari variabel yang menampung input
    Mahasiswa mhs("00001", "Asep Balon", "Laki-Laki", "Universitas Perkomputeran", "asep@balon.upk.id", "211189", "Ilmu Agak Komputer", "FMIPA");
    data.push_back(mhs);
    Mahasiswa mhs1("00002", "Jacob Berotot", "Laki-Laki", "Universitas Kuli", "jacob@berotot.uk.id", "223703", "Teknik Kuli Sipil", "FT");
    data.push_back(mhs1);
    Mahasiswa mhs2("00003", "Yuli Ajh", "Perempuan", "Universitas Kedokteran", "yuli@ajh.ukh.id", "201276", "Ilmu Opertingking", "FK");
    data.push_back(mhs2);

    //pembuatan header
    string separator = "+---------+-----------------+---------------+----------------------------+-----------------------+---------+--------------------+----------+\n";
    string header = "| NIK     | Nama            | Jenis Kelamin | Asal Universitas           | Email                 | NIM     | Prodi              | Fakultas |\n";
    cout << separator;
    cout << header;
    cout << separator;
    
    //proses membuat isi atau mengisi tabel
    int panjang = 0;//deklarasi panjang untuk menampung panjang string
    for(auto cari : data){//penggunaan for
        cout << "| " << cari.getNik();
        panjang = cari.getNik().size();
        for(int i = 0; i < 7 - panjang;i++){
            cout << " ";
        }
        cout << " | " << cari.getNama();
        panjang = cari.getNama().size();
        for(int i = 0; i < (15 - panjang);i++){
            cout << " ";
        }
        cout << " | " << cari.getGender();
        panjang = cari.getGender().size();
        for(int i = 0; i < (13 - panjang);i++){
            cout << " ";
        }
        cout << " | " << cari.getAsalUniversitas();
        panjang = cari.getAsalUniversitas().size();
        for(int i = 0; i < (26 - panjang);i++){
            cout << " ";
        }
        cout << " | " << cari.getEmail();
        panjang = cari.getEmail().size();
        for(int i = 0; i < (21 - panjang);i++){
            cout << " ";
        }
        cout << " | " << cari.getNim();
        panjang = cari.getNim().size();
        for(int i = 0; i < 7 - panjang;i++){
            cout << " ";
        }
        cout << " | " << cari.getProdi();
        panjang = cari.getProdi().size();
        for(int i = 0; i < 18 - panjang;i++){
            cout << " ";
        }
        cout << " | " << cari.getFakultas();
        panjang = cari.getFakultas().size();
        for(int i = 0; i < (8 - panjang);i++){
            cout << " ";
        }
        cout << " | " << endl;
    }
    cout << separator;

    return 0;
}