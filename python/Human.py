# Saya Muhammad Alam Basalamah [2101677] mengerjakan Tugas dari Praktikum yang ke 2 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikan. Aamiin.

# pembuatan class Human sebagai superclass
class Human:
    # deklarai property private
    __nik = ""
    __nama = ""
    __jenis_kelamin = ""

    # membuat konstruktor
    def __init__(self, nik, nama, jenis_kelamin):
    # set nik, nama jenis kelamin
        self.__nik = nik
        self.__nama = nama
        self.__jenis_kelamin = jenis_kelamin
    
    # membuat getter
    def getNik(self):
        return self.__nik

    def getNama(self):
        return self.__nama
    
    def getGender(self):
        return self.__jenis_kelamin

# inheritance (pembuatan sub class)
class SivitasAkademik(Human):
    # deklarasi property private
    __asal_universitas = ""
    __email_edu = ""

    # membuat konstruktor
    def __init__(self, nik, nama, jenis_kelamin, asal_universitas, email_edu):
        # memanggil konstruktor dari kelas parent/superclass
        super().__init__(nik, nama, jenis_kelamin)
        # set asal univ, dan email
        self.__asal_universitas = asal_universitas
        self.__email_edu = email_edu
    
    # membuat getter
    def getAsalUniversitas(self):
        return self.__asal_universitas
    
    def getEmail(self):
        return self.__email_edu
    
# inheritance (pembuatan sub class)
class Mahasiswa(SivitasAkademik):
    # deklarasi property private
    __nim = ""
    __prodi = ""
    __fakultas = ""

    # membuat konstruktor
    def __init__(self, nik, nama, jenis_kelamin, asal_universitas, email_edu, nim, prodi, fakultas):
        # memanggil konstruktor dari kelas parentnya
        super().__init__(nik, nama, jenis_kelamin, asal_universitas, email_edu)
        # set nim, prodi, dan fakultas
        self.__nim = nim
        self.__prodi = prodi
        self.__fakultas = fakultas
    
    def getNim(self):
        return self.__nim
    
    def getProdi(self):
        return self.__prodi
    
    def getFakultas(self):
        return self.__fakultas