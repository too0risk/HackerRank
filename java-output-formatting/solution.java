import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++)
            {
                String s1=sc.next();
                int x=sc.nextInt();
                int xLength = (int)(Math.log10(x)+1);
                
                if (xLength == 3) {
                    System.out.printf("%-15s%d\n", s1, x);
                } else {
                    System.out.printf("%-15s%03d\n", s1, x);
                }
            }
            System.out.println("================================");
    }
}
