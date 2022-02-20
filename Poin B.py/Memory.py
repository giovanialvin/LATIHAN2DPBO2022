#import kelas parent
from Hardware import Hardware


class Memory(Hardware) :
    #inisialisasi atribut
    __Frequency = ""
    __MemorySize = ""
    __SupportCuda = ""
    
    
    #constructor
    def __init__(self, freq = "", size = "", Cuda = "") :
        self.__Frequency = freq
        self.__MemorySize = size
        self.__SupportCuda = Cuda
        
    #getset methods
    def setFrequency(self, freq = "") :
        self.__Frequency = freq
        
    def getFrequency(self) :
        return self.__Frequency
    
    def setMemorySize(self, size = "") :
        self.__MemorySize = size
        
    def getMemorySize(self) :
        return self.__MemorySize
    
    def setSupportCuda(self, cuda = "") :
            self.__SupportCuda = cuda
        
    def getSupportCuda(self) :
        return self.__SupportCuda
    
    #output method
    def outputMemory(self):
        self.outputProduct()
        self.outputHardware()
        print("Frequency                     : "+ str(self.getFrequency()))
        print("Memory Size                   : "+ str(self.getMemorySize()))
        print("Support Cuda                  : "+ str(self.getSupportCuda()))
        
    
        
    