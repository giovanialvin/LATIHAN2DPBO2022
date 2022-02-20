#multi level inheritence
class Product :
    #inisialisasi atribut
    __Id_Product = 0
    __Price = 0
    
    #constructor
    def __init__(self, id_product = 0, price = 0):
        self.__Id_Product = id_product
        self.__Price = price
    
    
    #get set methods
    def setId_Product(self, id_product = 0):
        self.__Id_Product = id_product
    
    def getId_Product(self) :
        return self.__Id_Product
    
    def setPrice(self, price = 0) :
        self.__Price = price
        
    def getPrice(self) :
        return self.__Price 
    
    #output method
    def outputProduct(self) :
        print("Id Product                    : "+ str(self.getId_Product()))
        print("Price                         : "+ str(self.getPrice()))
    

        
    
        