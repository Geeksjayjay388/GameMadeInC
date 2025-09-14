import java.util.Scanner;

public class RectanglePerimeter {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Prompt user for dimensions
        System.out.print("Enter the width of the rectangle: ");
        double width = input.nextDouble();

        System.out.print("Enter the height of the rectangle: ");
        double height = input.nextDouble();

        // Calculate perimeter
        double perimeter = 2 * (width + height);

        // Display result
        System.out.println("The perimeter of the rectangle is: " + perimeter);
    }
}
