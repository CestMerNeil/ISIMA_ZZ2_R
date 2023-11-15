class Vehicle {
    protected String brand;
    
    // Constructors
    public Vehicle() {}

    public Vehicle(String brand) {
        this.brand = brand;
    }

    // Functions
    public void start() {
        System.out.println(brand + " is starting...");
    }

    public void stop() {
        System.out.println(brand + " is stopping...");
    }
}