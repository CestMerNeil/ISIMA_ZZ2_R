public class Test {

    public static void main(String[] args) {
        // Create company and employees
        Company company = new Company();
        Employee emp1 = new Employee("1", "Alice");
        Employee emp2 = new Employee("2", "Bob");

        // Test adding employees
        company.addEmployee(emp1);
        company.addEmployee(emp2);
        System.out.println("After adding employees: " + company.getEmployees());

        // Test removing employee by object
        company.removeEmployee(emp1);
        System.out.println("After removing Alice: " + company.getEmployees());

        // Test removing employee by ID
        company.removeEmployee(emp2.getId());
        System.out.println("After removing Bob by ID: " + company.getEmployees());

        // Test getting an employee
        company.addEmployee(emp1);
        Employee retrievedEmp = company.getEmployee(emp1.getId());
        System.out.println("Retrieved Employee: " + retrievedEmp);
    }
}
