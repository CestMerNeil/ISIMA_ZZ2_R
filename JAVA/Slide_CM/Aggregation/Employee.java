class Employee {
    private String id;
    private String name;

    // Constructors
    public Employee() {}

    public Employee(String id, String name) {
        this.id = id;
        this.name = name;
    }

    // Getters
    public String getId() { return id; }
    public String getName() { return name; }

    // Setters
    public void setId(String id) { this.id = id; }
    public void setName(String name) { this.name = name; }

    // toString
    public String toString() {
        return "Employee [id=" + id + ", name=" + name + "]";
    }
}