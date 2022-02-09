import java.util.*;
import java.util.regex.*;

// Write your code here. DO NOT use an access modifier in your class declaration.

class Parser{
    static String isBalanced(String s) 
    {
        String ans="";
        Map<Character, Character> braces = new HashMap<>();
        braces.put('(', ')');
        braces.put('[',']');
        braces.put('{','}');

        if (s.length() % 2 != 0) {
            ans="false";
            return ans;
        }

        Stack<Character> halfBraces = new Stack();
        for(char ch: s.toCharArray()) {
            if (braces.containsKey(ch)) {
                halfBraces.push(braces.get(ch));
            }
            else if(halfBraces.isEmpty() || ch != halfBraces.pop()) {
                ans="false";
                return ans;
            }
        }
        return String.valueOf(halfBraces.isEmpty());
    }
    
}
class Solution {
	
	public static void main(String[] args) {
		Parser parser = new Parser();
        
		Scanner in = new Scanner(System.in);

		while (in.hasNext()) {
			System.out.println(parser.isBalanced(in.next()));
		}
        
		in.close();
	}
}
