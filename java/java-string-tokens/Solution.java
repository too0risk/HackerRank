import java.io.*;
import java.util.*;
import java.util.stream.Collectors;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        // Write your code here.
        String regex="[!,?._'@ ]";
        String[] splitted=s.split(regex);
        splitted=Arrays.asList(splitted).stream().filter(str->!str.isEmpty()).collect(Collectors.toList()).toArray(new String[0]);
        System.out.println(splitted.length);
        for(String S:splitted)
           System.out.println(S);
        scan.close();
    }
}
