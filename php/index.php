<?php 
    require('Human.php');//memanggil file human

    $data = array();//deklarasi array

    //melakukan array push untuk memasukan inputan kedalam class Mahasiswa
    array_push($data, new Mahasiswa("00001", "Asep Balon", "Laki-Laki", "Universitas Perkomputeran", "asep@balon.upk.id", "211189", "Ilmu Agak Komputer", "FMIPA"));
    array_push($data, new Mahasiswa("00002", "Jacob Berotot", "Laki-Laki", "Universitas Kuli", "jacob@berotot.uk.id", "223703", "Teknik Kuli Sipil", "FT"));
    array_push($data, new Mahasiswa("00003", "Yuli Ajh", "Perempuan", "Universitas Kedokteran", "yuli@ajh.ukh.id", "201276", "Ilmu Opertingking", "FK"));

    //proses membuat header tabel
    echo "<table border='2' cellspacing='0' cellpadding='20'>" .
    "<tr>" .
    "<th>NIK</th>" .
    "<th>Nama</th>" .
    "<th>Jenis Kelamin</th>" .
    "<th>Asal Universitas</th>" .
    "<th>Email</th>" .
    "<th>NIM</th>" .
    "<th>Program Studi</th>" .
    "<th>Fakultas</th>" .
    "</tr>";

    //melakukan foreach untuk menampilkan data
    //setiap data didapat dari pemanggilan fungsi getter
    foreach ($data as $dt) {
    echo "<tr>" .
    "<td>" . $dt->getNik() . "</td>" .
    "<td>" . $dt->getNama() . "</td>" .
    "<td>" . $dt->getGender() . "</td>" .
    "<td>" . $dt->getAsalUniversitas() . "</td>" .
    "<td>" . $dt->getEmail() . "</td>" .
    "<td>" . $dt->getNim() . "</td>" .
    "<td>" . $dt->getProdi() . "</td>" .
    "<td>" . $dt->getFakultas() . "</td>" .
    "</tr>";
    }
    echo "</table>";
?>