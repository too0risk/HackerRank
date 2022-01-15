import java.util.Scanner;
import java.util.regex.*;

public class Solution
{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int T = Integer.parseInt(in.nextLine());
		while(T>0){
			String pattern = in.nextLine();
          	//Write your code
            try{
                Pattern p=Pattern.compile(pattern);
                System.out.println("Valid");
            }catch(Throwable t){
                System.out.println("Invalid");
            }
            T--;
		}
	}
}
