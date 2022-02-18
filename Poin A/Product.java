public class Product{
    
    
    private int price;
    private int id_Product;

    public Product(int price, int id_Product) {
        this.price = price;
        this.id_Product = id_Product;
    }

    public Product() {
    }

    
    public int getId_Product() {
        return id_Product;
    }
    public int getPrice() {
        return price;
    }
    public void setPrice(int price) {
        this.price = price;
    }
    public void setId_Product(int id_Product) {
        this.id_Product = id_Product;
    }

    public void output_product(){
        System.out.println("Id Product          : "+ this.getId_Product());
        System.out.println("Price               : "+ this.getPrice());
    }

}
