<!-- Saya Muhammad Alam Basalamah [2101677] mengerjakan Tugas dari Praktikum yang ke 2 dalam mata kuliah DPBO
   untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin. -->

<?php 
class Human{//pembuatan class Human sebagai superclass
    private $nik = '', $nama = '', $jenis_kelamin = '';//deklarasi property private

    public function __construct($nik = '', $nama = '', $jenis_kelamin = ''){//membuat constructor
        //set nik, nama, jeniskelamin kedalam property private
        $this->nik = $nik;
        $this->nama = $nama;
        $this->jenis_kelamin = $jenis_kelamin;
    }

    //membuat method getter

    public function getNik(){
        return $this->nik;
    }

    public function getNama(){
        return $this->nama;
    }

    public function getGender(){
        return $this->jenis_kelamin;
    }

    public function __destruct(){//membuat destruktor

    }
}

class SivitasAkademik extends Human{//inheritance (sub class)
    private $asal_universitas = '', $email_edu = ' ';//deklarasi property private

    public function __construct($nik, $nama, $jenis_kelamin, $asal_universitas, $email_edu){//membuat constructor
        parent::__construct($nik, $nama, $jenis_kelamin);//memanggil constructor dari kelas parent(Human)
        //set asal univ dan email
        $this->asal_universitas = $asal_universitas;
        $this->email_edu = $email_edu;
    }

    //membuat getter

    public function getAsalUniversitas(){
       return $this->asal_universitas;
    }

    public function getEmail(){
       return $this->email_edu;
    }

    public function __destruct(){//membuat destruktor

    }
}

class Mahasiswa extends SivitasAkademik{//membuat subclass (inheritance)
    private $nim = '', $prodi = '', $fakultas = '';//deklarasi property private

    public function __construct($nik, $nama, $jenis_kelamin, $asal_universitas, $email_edu, $nim, $prodi, $fakultas){//membuat construct
    parent::__construct($nik, $nama, $jenis_kelamin, $asal_universitas, $email_edu);//memanggil constructor dari kelas sivitas akademik
        //set nim, prodi dan fakultas
        $this->nim = $nim;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
    }

    //membuat getter
    public function getNim(){
        return $this->nim;
    }

    public function getProdi(){
        return $this->prodi;
    }

    public function getFakultas(){
        return $this->fakultas;
    }

    public function __destruct(){//membuat destructor

    }
}

?>