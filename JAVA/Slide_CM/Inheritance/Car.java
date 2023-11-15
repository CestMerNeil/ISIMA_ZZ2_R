class Car extends Vehicle {
    private int wheels;

    // Constructors
    public Car() {} 

    public Car(String brand, int wheels) {
        super(brand);
        this.wheels = wheels;
    }

    @Override
    public void start() {
        System.out.println(brand + " is starting with " + wheels + " wheels...");
    }

}