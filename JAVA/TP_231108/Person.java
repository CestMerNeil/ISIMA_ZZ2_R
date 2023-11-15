public class Person implements java.io.Serializable{
    private String lastName;
    private String firstName;
    private int age;
    private String address;
    private String phone;
    private String email;

    public Person(String lastName, String firstName, int age, String address, String phone, String email) {
        this.lastName = lastName;
        this.firstName = firstName;
        this.age = age;
        this.address = address;
        this.phone = phone;
        this.email = email;
    }

    public Person(String lastName, String firstName) {
        this(lastName, firstName, 0, "", "", "");
    }

    public Person() {
    }   

    // Getters
    public String getLastName() {
        return lastName;
    }
    public String getFirstName() {
        return firstName;
    }
    public int getAge() {
        return age;
    }
    public String getAddress() {
        return address;
    }
    public String getPhone() {
        return phone;
    }
    public String getEmail() {
        return email;
    }

    // Setters
    public void setLastName(String lastName) {
        this.lastName = lastName;
    }
    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public void setAddress(String address) {
        this.address = address;
    }
    public void setPhone(String phone) {
        this.phone = phone;
    }
    public void setEmail(String email) {
        this.email = email;
    }
}