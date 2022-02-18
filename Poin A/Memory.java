public class Memory extends Hardware 
{
    private String frequency;
    private String memorySize;
    private String supportsCuda;

    public Memory(String frequency, String memorySize, String supportsCuda) {
        this.frequency = frequency;
        this.memorySize = memorySize;
        this.supportsCuda = supportsCuda;
    }

    public Memory() {
    }

    public String getSupportsCuda() {
        return supportsCuda;
    }
    public String getFrequency() {
        return frequency;
    }
   
    public String getMemorySize() {
        return memorySize;
    }

    public void setFrequency(String frequency) {
        this.frequency = frequency;
    }
    public void setMemorySize(String memorySize) {
        this.memorySize = memorySize;
    }
    public void setSupportsCuda(String supportsCuda) {
        this.supportsCuda = supportsCuda;
    }

    public void output_memory(){
        System.out.println("Id Product          : "+ this.getId_Product());
        System.out.println("Price               : "+ this.getPrice());
        System.out.println("Brand Hardware      : "+ this.getBrand());
        System.out.println("Model Hardware      : "+ this.getModel());
        System.out.println("Frequency Memory    : "+ this.getFrequency());
        System.out.println("Memory Size         : "+ this.getMemorySize());
        System.out.println("Supports Cuda       : "+ this.getSupportsCuda());
    }
    
    
}
