import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scn = new Scanner(System.in);
        int i = 1;
        while(scn.hasNextLine()) {
            System.out.printf("%d %s\n", i, scn.nextLine());
            i++;
        }
    }
}
