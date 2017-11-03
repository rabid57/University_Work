import java.util.ArrayDeque;
import java.util.Collection;
import java.util.Deque;
import java.util.Iterator;

/**
 * A basic class to check matching brackets.
 * @author Christine Zarges
 * @version 1.1, 10th October 2017
 */

public class BracketChecker {

    /**
     * A default constructor.
     */
    public BracketChecker(){
    }

    /**
     * Checks matching brackets assuming that only round brackets are used.
     * @param text the text to be checked
     * @return true if brackets are matched correctly, otherwise return false
     */
    public boolean checkSimplified(String text) {
        int openBrackets = 0;
        int closedBrackets = 0;

        for (int i = 0; i < text.length(); i++) {
            if (text.charAt(i) == '(') {
                openBrackets++;
            } else if (text.charAt(i) == ')') {
                closedBrackets++;
                if (closedBrackets > openBrackets) {
                    return false;
                }
            }
        }

        if (openBrackets > closedBrackets) {
            return false;
        } else if (closedBrackets > openBrackets) {
            return false;
        } else {
            return true;
        }

    }
    /**
     * Checks matching brackets assuming that round, square and curly brackets are used.
     * @param text the text to be checked
     * @return true if brackets are matched correctly, otherwise return false
     */

    public boolean check(String text){
        Deque<Character> stack = new ArrayDeque<Character>();
        for (int i = 0; i < text.length(); i++) {
            char x = text. charAt(i);
            switch (x) {
                case '(':
                    stack.push(x);
                    break;
                case '{':
                    stack.push(x);
                    break;
                case '[':
                    stack.push(x);
                    break;
                case ')':
                    if (stack.peek() == null){
                        return false;
                    } else if (stack.peek() == '(') {
                        stack.pop();
                    }
                    break;
                case '}':
                    if (stack.peek() == null){
                        return false;
                    } else if (stack.peek() == '{'){
                        stack.pop();
                    }
                    break;
                case ']':
                    if (stack.peek() == null){
                        return false;
                    } else if (stack.peek() == '[') {
                        stack.pop();
                    }
                    break;
            }
        }
        if (stack.size() == 0){
            return true;
        }else{
            return false;
        }


    }
}