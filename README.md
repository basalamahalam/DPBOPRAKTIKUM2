# LATIHAN2DPBO2023
### Saya Muhammad Alam Basalamah NIM 2101677 mengerjakan Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Deskripsi Tugas
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++, Java, Python, PHP yang mengimplementasikan konsep Multi-level Inheritance pada kelas - kelas tersebut

## Desain Program
Program didesain 3 class namun karna ada inheritance menjadi 1 class :
* *Human*
* *SivitasAkademik*
* *Mahasiswa*

Pada class `Human` terdapat 3 atribut:
* *nik*               -> berisikan nik dari mahasiswa, tipe data `string`
* *nama*              -> berisikan nama dari mahasiswa, bertipe data `string`
* *jenis_kelamin*     -> berisikan jenis kelamin mahasiswa, bertipe data `string`

Pada class `SivitasAkademik` terdapat 2 atribut :
* *Asal Universitas*  -> berisikan asal universitas dari mahasiswa, tipe data `string`
* *Email*             -> berisikan email dari mahasiswa, bertipe data `string`

Pada class `Human` terdapat 3 atribut:
* *nim*               -> berisikan nim dari mahasiswa, tipe data `string`
* *programstudi*      -> berisikan prodi dari mahasiswa, bertipe data `string`
* *fakultas*          -> berisikan fakultas dari mahasiswa, bertipe data `string`

Setiap Atribut memiliki getter.

## Alasan dari Program yang dibuat
Program dibuat dengan melakukan inheritance sesuai dengan materi pada minggu ini, dimulai dari Human sebagai super class atau parent lalu ada dilanjut inheritance dari sub class nya yaitu Sivitas Akademik ke Human dan terakhir inheritance dari Mahasiswa ke SivitasAkademik. Mengapa susunannya tersebut karena human data diri -> Status kampus -> baru data diri di kampus alias Human -> Sivitas Akademik -> Mahasiswa.
