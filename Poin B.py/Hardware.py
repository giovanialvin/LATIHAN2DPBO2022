from itertools import product


#import kelas parent
from Product import Product


class Hardware(Product) :
    #inisialisasi atribut
    __Brand = ""
    __Model = ""
    
    #constructor
    def __init__(self, brand= "", model = "") :
        self.__Brand = brand
        self.__Model = model
        
    #getset methods
    def setBrand(self, brand = "") :
        self.__Brand = brand
        
    def getBrand(self) :
        return self.__Brand
    
    def setModel(self, model = "") :
        self.__Model = model
        
    def getModel(self) :
        return self.__Model
    
    #output method
    def outputHardware(self):
        self.outputProduct()
        print("Brand                         : "+ str(self.getBrand()))
        print("Model                         : "+ str(self.getModel()))
        
    
        
    