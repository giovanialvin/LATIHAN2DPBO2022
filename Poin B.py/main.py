#include file
from Memory import Memory
from Hardware import Hardware
from Product import Product

#instansiasi
P = Product()
P.setId_Product(1)
P.setPrice(5000)
#output produk version
P.outputProduct()


print()

#instansiasi
H = Hardware()
H.setId_Product(2)
H.setPrice(1000)
H.setBrand("Brand A")
H.setModel("Model 1")
#output produk version
H.outputProduct()
#output Hardware version
H.outputHardware()

print()
#instansiasi
M = Memory()
M.setId_Product(3)
M.setPrice(3000)
M.setBrand("Brand B")
M.setModel("Model 2")
M.setFrequency("Frequency 001")
M.setMemorySize("500 GB")
M.setSupportCuda("Support Cuda 1.0")
#output produk version
M.outputProduct()
#output Hardware version
M.outputHardware()
#output memory version
M.outputMemory()