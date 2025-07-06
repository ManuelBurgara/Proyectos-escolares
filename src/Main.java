import java.util.Random;

public class Main {
    // Bubble Sort: this sorting method compares two adjacent elements and swaps them if they are not in order.
    // A temp variable is needed to swap values between indexes.
    // This kind of sort has a time complexity of O(n^2), which means it's slow for large arrays.

    public static void main(String[] args) {
        int[] numbers = new int[10]; // Correct syntax to declare a fixed-size array in Java
        // Alternative: int[] numbers = {6, 9, 2, 4, 7}; // If you want to pre-fill the array manually

        Random rand = new Random();

        // Fill the array with random numbers
        for (int i = 0; i < numbers.length; i++) {
            numbers[i] = rand.nextInt(100); // Random number between 0 and 99
            System.out.println("Value at position " + i + ": " + numbers[i]);
        }

        // Print unsorted array
        System.out.print("\nUnsorted array: ");
        for (int num : numbers) {
            System.out.print(num + " ");
        }

        // now we implement bubble sort
        boolean swap = true; //we are using this as a break to exit the while loop once the array is sorted

        while(swap) { // here you set the exit condition
            swap = false; // it begins as false so in the last iteration it doesn't enter the if condition

            for (int i = 0; i < numbers.length - 1; i++) {
                if (numbers[i] > numbers[i + 1]) {
                    swap = true; // here if the condition is true you change the swap break so it repeats the for loop
                    int temp = numbers[i];
                    numbers[i] = numbers[i + 1];
                    numbers[i + 1] = temp;
                }

            }
        }

        // Print sorted array
        System.out.print("\nsorted array: ");
        for (int num : numbers) {
            System.out.print(num + " ");
        }

    }
}
