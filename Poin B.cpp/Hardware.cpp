#include<string>
#include<iostream>
#include<string>
#include"Product.cpp"

using namespace std;

class Hardware : public Product{
    private :
        string brand;
        string model;

    public :
        Hardware(){

        }

        void setBrand(string brand){
            this->brand = brand;
        }

        string getBrand(){
            return this->brand;
        }

        void setModel(string model){
            this->model = model;
        }

        string getModel(){
            return this->model;
        }

        void output_Hardware(){
            cout << "Id Product                 : " << this->getId_Product() << endl;
            cout << "Price                      : " << this->getPrice() << endl;
            cout << "Brand                      : " << this->getBrand() << endl;
            cout << "Model                      : " << this->getModel() << endl;
        }

        ~Hardware(){

        }

        
};