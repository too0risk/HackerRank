import java.util.Scanner;

public class Solution {

    static boolean isAnagram(String a, String b) {
        // Complete the function
        if(a.length()!=b.length()) return false;
       
        char[] A = a.toLowerCase().toCharArray();
        char[] B = b.toLowerCase().toCharArray();
        java.util.Arrays.sort(A);
        java.util.Arrays.sort(B);
        String A_Sorted = new String(A);
        String B_Sorted = new String(B);
       
        return A_Sorted.equals(B_Sorted);
    }
    
  public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
