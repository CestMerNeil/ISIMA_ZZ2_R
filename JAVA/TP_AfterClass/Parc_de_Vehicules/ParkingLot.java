public class ParkingLot {
    private String[][] parkingSpaces;
    private int nbRows;

    public ParkingLot(int rows, int cols) {
        parkingSpaces = new String[rows][cols];
        initializeParkingLot();
    }

    private void initializeParkingLot() {
        for (int i = 0; i < parkingSpaces.length; i++) {
            for (int j = 0; j < parkingSpaces[i].length; j++) {
                parkingSpaces[i][j] = "";
            }
        }
    }
    public int getNbRows() {
        return nbRows;
    }

    public void parkCar(int row, int col, String brand, String color, String licensePlate) {
        if (row >= 0 && row < parkingSpaces.length && col >= 0 && col < parkingSpaces[0].length) {
            parkingSpaces[row][col] = brand + " (" + color + ", " + licensePlate + ")";
        }
    }

    public void removeCar(int row, int col) {
        if (row >= 0 && row < parkingSpaces.length && col >= 0 && col < parkingSpaces[0].length) {
            parkingSpaces[row][col] = "";
        }
    }

    public void displayParkingLot() {
        for (int i = 0; i < parkingSpaces.length; i++) {
            for (int j = 0; j < parkingSpaces[i].length; j++) {
                if (!parkingSpaces[i][j].isEmpty()) {
                    System.out.print(parkingSpaces[i][j]);
                } else {
                    System.out.print("[Empty]");
                }
                System.out.print("\t");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        ParkingLot parkingLot = new ParkingLot(5, 5);

        parkingLot.parkCar(1, 2, "Toyota", "Blue", "ABC123");
        parkingLot.parkCar(3, 4, "Honda", "Red", "XYZ789");

        parkingLot.displayParkingLot();

        parkingLot.removeCar(1, 2);
        parkingLot.displayParkingLot();
    }
}

// Output:
// [Empty]	[Empty]	[Empty]	[Empty]	[Empty]
// [Empty]	[Empty]	Toyota (Blue, ABC123)	[Empty]	[Empty]
// [Empty]	[Empty]	[Empty]	[Empty]	[Empty]
// [Empty]	[Empty]	[Empty]	[Empty]	Honda (Red, XYZ789)
// [Empty]	[Empty]	[Empty]	[Empty]	[Empty]
