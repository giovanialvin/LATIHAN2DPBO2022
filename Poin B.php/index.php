<?php

include "Memory.php";


//Deklarasi Objek Product
$p =  new Product();
$p->setPrice(50000);
$p->setId_product(1);
//Output Product 
$p->output_product();

echo "<br/>";

//Deklarasi Objek Hardware
$h = new Hardware();
$h->setPrice(500000);
$h->setId_product(2);
$h->setBrand("Brand 1");
$h->setModel("Model 1");
//Output Product
$h->output_product();
echo "<br/>";
//Ouput Hardware
$h->output_hardware();

//Deklarasi Objek Memory
$m = new Memory();
$m->setPrice(400000);
$m->setId_product(3);
$m->setBrand("Brand 2");
$m->setModel("Model 2");
$m->setFrequency("Frequency A");
$m->setMemorySize("Memory Size A");
$m->setSupportCuda("Support Cuda A");
//Output Product
$m->output_product();
echo "<br/>";
//Output Hardware
$m->output_hardware();
//Output Memory
echo "<br/>";
$m->output_memory();
/*

$kkaryawan->setNomor_pegawai("1231321321");
$kkaryawan->setJabatan("-");
$kkaryawan->setDepartemen("-");

echo $kkaryawan->getNama()."<br/>";
echo $kkaryawan->getAlamat()."<br/>";
echo $kkaryawan->getNo_ktp()."<br/>";
echo $kkaryawan->getNo_telepeon()."<br/>";
echo $kkaryawan->getNomor_pegawai()."<br/>";
echo $kkaryawan->getJabatan()."<br/>";
echo $kkaryawan->getDepartemen()."<br/>";
*/
?>