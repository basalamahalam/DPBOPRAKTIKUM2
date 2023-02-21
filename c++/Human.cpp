// Saya Muhammad Alam Basalamah [2101677] mengerjakan Tugas dari Praktikum yang ke 2 dalam mata kuliah DPBO
// untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.

//pemanggilan library string dan default c++
#include <iostream>
#include <string>

using namespace std;//mengindikasi bahwa saya menggunakan semua fungsi kelas dan objek terdefinisi di namespace std dalam program ini

class Human{//pembuatan class Human sebagai parent / superclass
    private://membuat property private
        string nik;
        string nama;
        string jenis_kelamin;
    
    public://membuat property public
        Human(string nik, string nama, string jenis_kelamin){//membuat konstruktor
            //set nik, nama , jenis kelamin
            this->nik = nik;
            this->nama = nama;
            this->jenis_kelamin = jenis_kelamin;
        }

        //membuat getter
        string getNik(){
            return this->nik;
        }

        string getNama(){
            return this->nama;
        }

        string getGender(){
            return this->jenis_kelamin;
        }
};

class SivitasAkademik : public Human{//membuat class (inheritance) sebagai sub class
    private ://membuat property private
        string asal_universitas;
        string email_edu;
    
    public ://membuat property public
        SivitasAkademik(string nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu )//membuat konstruktor
        : Human(nik, nama, jenis_kelamin){//memanggil konstruktor Human / parent untuk mengisi variabel variabel didalamnya
            //set asal univ, dan email
            this->asal_universitas = asal_universitas;
            this->email_edu = email_edu;
        }

        //membuat getter

        string getAsalUniversitas(){
            return this->asal_universitas;
        }

        string getEmail(){
            return this->email_edu;
        }
};

class Mahasiswa : public SivitasAkademik{//membuat class (inheritance) sebagai sub class
    private://membuat property private
        string nim;
        string fakultas;
        string prodi;

    public://membuat property public
        Mahasiswa(string nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string nim, string prodi, string fakultas)//membuat konstruktor
        : SivitasAkademik( nik,  nama,  jenis_kelamin, asal_universitas, email_edu){//memanggil konstruktor Sivitas Akademik / parentnya untuk mengisi variabel yang ada didalamnya
            // set nim, fakultas, dan prodi
            this->nim = nim;
            this->fakultas = fakultas;
            this->prodi = prodi;
        }

        // membuat getter
        
        string getNim(){
            return this->nim;
        }

        string getFakultas(){
            return this->fakultas;
        }

        string getProdi(){
            return this->prodi;
        }
};