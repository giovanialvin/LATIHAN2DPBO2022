#include<string>
#include<iostream>
using namespace std;
//Include File Cucu
#include"Memory.cpp"
//single inheritance
int main(){
    
    //instansiasi
    Product p;
    Hardware h;
    Memory m;

    p.setId_Product(1);
    p.setPrice(5000);
    p.output_product();

    cout << endl;

    h.setId_Product(2);
    h.setPrice(4500);
    h.setBrand("Brand A");
    h.setModel("Model A");
    h.output_product();
    h.output_Hardware();

    cout << endl; 

    m.setId_Product(3);
    m.setPrice(23000);
    m.setBrand("Brand B");
    m.setModel("Model B");
    m.setFrequency("Frequency 01");
    m.setMemorySize("Memory Seize 01");
    m.setSupportCude("Support Cuda 01");
    m.output_product();
    m.output_Hardware();
    m.output_Memory();
    cout << endl;
    
    return 0;   

}
