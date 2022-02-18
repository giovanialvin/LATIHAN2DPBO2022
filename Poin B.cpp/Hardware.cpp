#include<string>
#include<iostream>
#include<string>
//Pemanggilan File Parent
#include"Product.cpp"

using namespace std;

class Hardware : public Product{
    //Deklarasi Atribut
    private :
        string brand;
        string model;

    public :
        
        //Constructor
        Hardware(){

        }
        
    
        //Get Set Methods
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
        
        //Output Method
        void output_Hardware(){
            cout << "Id Product                 : " << this->getId_Product() << endl;
            cout << "Price                      : " << this->getPrice() << endl;
            cout << "Brand                      : " << this->getBrand() << endl;
            cout << "Model                      : " << this->getModel() << endl;
        }
        
    
        //Destructor
        ~Hardware(){

        }

        
};
