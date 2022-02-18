public class Main {
    public static void main(String[] args) {
        System.out.println("====================================");
        //Instansiasi Objek
        Product pr = new Product();
        pr.setId_Product(1);
        pr.setPrice(15000);
        //Output
        pr.output_product();

        System.out.println("====================================");
        //Instansiasi Objek
        Hardware hd = new Hardware();
        hd.setId_Product(2);
        hd.setPrice(20000);
        hd.setBrand("Brand 1");
        hd.setModel("Model 1");
        //Output
        hd.output_hardware();
        
        
        System.out.println("====================================");
        //Instansiasi Objek
        Memory mr =  new Memory();
        mr.setId_Product(3);
        mr.setPrice(500000);
        mr.setBrand("Brand 2");
        mr.setModel("Model 2");
        mr.setFrequency("Frequency 1");
        mr.setMemorySize("Memory Size 1");
        mr.setSupportsCuda("Support Cuda 1");
        //Output
        mr.output_memory();
        System.out.println("====================================");

    }
    


}
