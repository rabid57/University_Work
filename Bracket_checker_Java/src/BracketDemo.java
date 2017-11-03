/**
 * The demo class that we will run for testing
 * @author Christine Zarges
 * @version 1.1, 18th October 2017
 */

import java.util.Scanner;

public class BracketDemo {

    private BracketChecker bracketChecker;

    /**
     * A default constructor. Creates a BracketChecker object.
     */
    public BracketDemo(){
        bracketChecker = new BracketChecker();
    }

    /**
     * Runs the demonstration.
     */
    private void run(){
        Scanner scanner = new Scanner(System.in);

        /**
         * Select one of the two checking methods. Only considers the first character of the input.
         * If y or Y, only round brackets will be checked.
         * If n or N, round, curly and square brackets will be checked.
         */
        System.out.print("Only check round brackets? [y/n] ");
        String input = scanner.nextLine().toLowerCase();
        while ( ! ( ( input.startsWith("y") ) || ( input.startsWith("n") ) ) ){
            System.out.print("Invalid input. Please answer y/n. ");
            input = scanner.nextLine().toLowerCase();
        }
        boolean simplifiedTest = input.startsWith("y");

        /**
         * Reads the String that will be checked.
         */
        System.out.print("Enter text: ");
        String text = scanner.nextLine();

        /**
         * Execute the method selected previously.
         */
        boolean result;
        if (simplifiedTest)
            result = bracketChecker.checkSimplified(text);
        else
            result = bracketChecker.check(text);

        /**
         * Print the result.
         */
        if (result)
            System.out.println("Text is correct.");
        else
            System.out.println("Text contains errors.");
    }

    public static void main(String args[]) {
        BracketDemo demo = new BracketDemo();
        demo.run();
    }
}