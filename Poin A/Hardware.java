import javax.print.event.PrintEvent;

public class Hardware extends Product{
    private String brand;
    private String model;
    
    public Hardware() {
    }

    public Hardware(String brand, String model) {
        this.setBrand(brand);
        this.setModel(model);
    }

    public void setModel(String model) {
        this.model = model;
    }

    public String getModel() {
        return model;
    }

    public String getBrand() {
        return brand;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public void output_hardware(){
        System.out.println("Id Product          : "+ this.getId_Product());
        System.out.println("Price               : "+ this.getPrice());
        System.out.println("Brand Hardware      : "+ this.getBrand());
        System.out.println("Model Hardware      : "+ this.getModel());

    }
    
    
    
}
