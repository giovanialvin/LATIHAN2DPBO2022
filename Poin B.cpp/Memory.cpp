#include<string>
#include<iostream>
#include<string>
//Include file parents
#include"Hardware.cpp"

using namespace std;


class Memory : public Hardware{
    private :
        //Deklarasi Atribut
        string frequency;
        string memorySize;
        string supportCuda;
        
    public :
        //Constructor
        Memory(){

        }
        
        //Get Set Methods
        void setFrequency(string frequency){
            this->frequency = frequency;
        }

        string getFrequency(){
            return this->frequency;
        }

        void setMemorySize(string memorySize){
            this->memorySize = memorySize;
        }

        string getMemorySize(){
            return this->memorySize;
        }

        void setSupportCude(string supportCuda){
            this->supportCuda = supportCuda;
        }

        string getSupportCuda(){
            return this->supportCuda;
        }

        //Output Methods
        void output_Memory(){
            cout << "Id Product                 : " << this->getId_Product() << endl;
            cout << "Price                      : " << this->getPrice() << endl;
            cout << "Brand                      : " << this->getBrand() << endl;
            cout << "Model                      : " << this->getModel() << endl;
            cout << "Frequency                  : " << this->getFrequency() << endl;
            cout << "Memory Size                : " << this->getMemorySize() << endl;
            cout << "Support Cuda               : " << this->getSupportCuda() << endl;
        }
        
    
        //Destructor
        ~Memory(){

        }

        
};
