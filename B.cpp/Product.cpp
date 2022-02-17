#include<string>
#include<iostream>


using namespace std;

class Product{
    private :
        int price;
        int id_product;

    public :
        Product(){

        }

        void setPrice(int price){
            this->price = price;
        }

        int getPrice(){
            return this->price;
        }

        void setId_Product(int id_product){
            this->id_product = id_product;
        }

        int getId_Product(){
            return this->id_product;
        }

        void output_product(){
            cout << "Id Product                 : " << this->getId_Product() << endl;
            cout << "Price                      : " << this->getPrice() << endl;
        }

        ~Product(){}


        
};