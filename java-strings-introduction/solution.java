import java.io.*;
import java.util.*;

public class Solution {

    public static String capitalize(String A, String B) {
        String aCaps = A.toUpperCase().charAt(0) + A.substring(1, A.length());
        String bCaps = B.toUpperCase().charAt(0) + B.substring(1, B.length());
        String combinedStrings = aCaps + " " + bCaps;
        return combinedStrings;
    }
    
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        int totalLen = A.length() + B.length();
        System.out.println(totalLen);
        
        if (A.compareTo(B) > B.compareTo(A)) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
        
        System.out.println(capitalize(A, B));
    }
}
