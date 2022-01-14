import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        int left=0;
        boolean check=false;
        for(int i=A.length()-1;i>=0;i--){
            if(A.charAt(i)!=A.charAt(left)){
                break;
            }else{
                check=true;
                left++;
            }
        }
        if(check){
            System.out.print("Yes");
        }else{
            System.out.print("No");
        }
    }
}
