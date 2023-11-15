import java.util.*;

class Company {
    private List<Employee> employees;

    // Constructors
    public Company() { employees = new ArrayList<>(); }

    // Add an employee
    public void addEmployee(Employee e) { this.employees.add(e); }

    // Remove an employee
    public void removeEmployee(Employee e) { this.employees.remove(e); }

    public void removeEmployee(String id) {
        this.employees.removeIf(e -> e.getId().equals(id));
    }

    // Update an employee
    // Out of real situation
    /*
    public void updateEmployee(Employee e) {
        for(int i=0; i< this.employees.size(); i++) {
            Employee emp = this.employees.get(i);
            if(emp.getId().equals(e.getId())) {
                this.employees.set(i, )
            }
        }
    }
    */

    // Get an employee
    public Employee getEmployee(String id) {
        for(Employee e : this.employees) {
            if(e.getId().equals(id)) {
                return e;
            }
        }
        return null;
    }

    // Getters
    public List<Employee> getEmployees() { return employees; }
}