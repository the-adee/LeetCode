// initial code
// whatever came to my mind.
public class Valid_Parentheses_20 {
    static boolean isValid(String s) {
        Stack st = new Stack(s);
        return st.checkBalance();
    }

    public static void main(String[] args) {
        String s1 = "([)]";
        // String s2 = "([])";

        boolean result = isValid(s1);

        if (result) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
    }
}

class Stack {
    char[] st;
    int top;
    String s;

    Stack(String s) {
        top = -1;
        st = new char[s.length()];
        this.s = s;
    }

    public void push(char c) {
        if (top == st.length - 1) {
            System.out.println("Stack overflow!");
            return;
        }
        st[++top] = c; // increment first, then assign
    }

    public char pop() {
        if (top == -1) {
            System.out.println("Stack underflow!");
            return '\0'; // null char
        }
        return st[top--];
    }

    boolean checkBalance() {
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '{' || c == '[' || c == '(') {
                push(c);
            } else {
                if (c == '}') {
                    char matchingBracket = pop();
                    // System.out.println("1 " + matchingBracket);
                    if (matchingBracket != '{') {
                        return false;
                    }
                } else if (c == ']') {
                    char matchingBracket = pop();
                    // System.out.println("2 " + matchingBracket);
                    if (matchingBracket != '[') {
                        return false;
                    }
                } else {
                    char matchingBracket = pop();
                    // System.out.println("3 " + matchingBracket);
                    if (matchingBracket != '(') {
                        return false;
                    }
                }
            }
        }
        return true;
    }
}
