# memanggil class Human dari file Human.py
from Human import Mahasiswa

# deklarasi array
Data = []

# memasukkan data menggunakan append dengan memanggil Mahasiswa
Data.append(Mahasiswa("00001", "Asep Balon", "Laki-Laki", "Universitas Perkomputeran", "asep@balon.upk.id", "211189", "Ilmu Agak Komputer", "FMIPA"))
Data.append(Mahasiswa("00002", "Jacob Berotot", "Laki-Laki", "Universitas Kuli", "jacob@berotot.uk.id", "223703", "Teknik Kuli Sipil", "FT"))
Data.append(Mahasiswa("00003", "Yuli Ajh", "Perempuan", "Universitas Kedokteran", "yuli@ajh.ukh.id", "201276", "Ilmu Opertingking", "FK"))

# membuat header tabel
separator = "+---------+-----------------+---------------+----------------------------+-----------------------+---------+--------------------+----------+"
header = "| NIK     | Nama            | Jenis Kelamin | Asal Universitas           | Email                 | NIM     | Prodi              | Fakultas |"

print("\n", separator, "\n", header, "\n", separator)

# menggunakan for untuk menampilkan isi table / data
for cari in Data:
    print("|", cari.getNik(), " "*(7 - len(cari.getNik())), "|", cari.getNama(), " "*(14 - len(cari.getNama())), "|", cari.getGender(), " "* (12 - len(cari.getGender())), "|", cari.getAsalUniversitas(), " "*(25 - len(cari.getAsalUniversitas())), "|", cari.getEmail(), " "*(20 - len(cari.getEmail())), "|", cari.getNim(), " "* (6 - len(cari.getNim())), "|", cari.getProdi(), " "* (18 - len(cari.getProdi())), "|", cari.getFakultas(), " "* (6 - len(cari.getFakultas())), "|")
print(separator)