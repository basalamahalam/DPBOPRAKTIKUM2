/* Saya Muhammad Alam Basalamah [2101677] mengerjakan Tugas dari Praktikum yang ke 2 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan.
   Aamiin.*/

public class Human{//membuat class main
    //membuat class private
    private String nik;
    private String nama;
    private String jenis_kelamin;

    public Human(String _nik, String _nama, String _jenis_kelamin){//class Human
    //membuat class Human
        nik = _nik;
        nama = _nama;
        jenis_kelamin = _jenis_kelamin;
    }
    
    //membuat getter untuk mendapatkan isi dari variabel

    public String getNIK(){
        return this.nik;
    }

    public String getNama(){
        return this.nama;
    }

    public String getGender(){
        return this.jenis_kelamin;
    }
}

class SivitasAkademik extends Human{
    //mengextends Sivitas Akademik ke Human
    
    //membuat class private
    private String asal_universitas;
    private String email_edu;

    public SivitasAkademik(String _nik, String _nama, String _jenis_kelamin, String _asal_universitas, String _email_edu){
    //membuat construct    
        super(_nik, _nama, _jenis_kelamin);//menggunakan fungsi super untuk mengisi variabel tanpa harus di set 1-1
        asal_universitas = _asal_universitas;
        email_edu = _email_edu;
    }

    //membuat getter
    public String getAsalUniversitas(){
        return this.asal_universitas;
    }

    public String getEmail(){
        return this.email_edu;
    }
}

class Mahasiswa extends SivitasAkademik{
    //mengextends Mahasiswa ke SivitasAkademik
    
    //membuat class private
    private String nim;
    private String fakultas;
    private String prodi;

    public Mahasiswa(String _nik, String _nama, String _jenis_kelamin, String _asal_universitas, String _email_edu, String _nim, String _fakultas, String _prodi) {
        //membuat construct
        super(_nik, _nama, _jenis_kelamin, _asal_universitas, _email_edu);//menggunakan fungsi super untuk mengisi variabel tanpa harus di set 1-1
        nim = _nim;
        fakultas = _fakultas;
        prodi = _prodi;
    }

    //membuat getter
    public String getNIM(){
        return this.nim;
    }

    public String getFakultas(){
        return this.fakultas;
    }

    public String getProdi(){
        return this.prodi;
    }
}