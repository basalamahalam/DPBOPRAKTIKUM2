import java.util.ArrayList;//import library

public class Main{
    //membuat class main
    public static void main(String[] args){
        //membuat static main
        ArrayList<Mahasiswa> list = new ArrayList<>();//deklarasi arraylist
        //mengisi variabel mahasiswa kedalam kelas mahasiswa
        Mahasiswa mhs = new Mahasiswa("#####KEPO", "Jacob Berotot", "Laki-laki", "Universitas Langsung Pulang", "dpbobikinpusing@gmail.com", "221123", "Pendidikan Matematika", "S3");

        //menampung data sebelumnya kedalam list
        list.add(mhs);

        //mengisi variabel mahasiswa kedalam kelas mahasiswa
        Mahasiswa mhs2 = new Mahasiswa("#####KEPO", "Yuli Cantik", "Perempuan", "Universitas Langsung Pulang", "dpbobikinpusinglagi@gmail.com", "234523", "Pendidikan Nyuci Piring", "S2");
        
        list.add(mhs2);
        
        //mengisi variabel mahasiswa kedalam kelas mahasiswa
        Mahasiswa mhs3 = new Mahasiswa("#####KEPO", "Dewi", "Perempuan", "Universitas Langsung Pulang", "dpbobikinpusingbgt@gmail.com", "212533", "Pendidikan Nyuci Baju", "S1");
        
        //menampung data sebelumnya kedalam list
        list.add(mhs3);
        
        //proses menampilkan output
        for(int i = 0;i<list.size();i++){
            System.out.println("NIK: " + list.get(i).getNIK());
            System.out.println("Nama: " + list.get(i).getNama());
            System.out.println("Jenis Kelamin: " + list.get(i).getGender());
            System.out.println("Asal Universitas: " + list.get(i).getAsalUniversitas());
            System.out.println("Email Edu: " + list.get(i).getEmail());
            System.out.println("NIM: " + list.get(i).getNIM());
            System.out.println("Fakultas: " + list.get(i).getFakultas());
            System.out.println("Prodi: " + list.get(i).getProdi());
            System.out.println("\n");
        }
    }
}