import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "";
        
        // Complete the function
        // 'smallest' must be the lexicographically smallest substring of length 'k'
        // 'largest' must be the lexicographically largest substring of length 'k'
        int len=s.length()-k+1;
        String[] splitted=new String[len];
        for(int i=0;i<len;i++){
            splitted[i]=s.substring(i,k+i);
        }
        java.util.Arrays.sort(splitted);
        smallest=splitted[0];
        largest=splitted[splitted.length-1];
        
        return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}
