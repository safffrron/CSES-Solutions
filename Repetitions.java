import java.util.Scanner;
 
public class RepetitionOg 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
      
        long c = 1, max = 1;
        for (int i = 1; i < s.length(); i++) 
        {
            if (s.charAt(i - 1) == s.charAt(i)) 
            {
                ++c;
            } 
            else 
            {
                c = 1;
            }
            max = Math.max(max, c);
        }
        System.out.println(max);
        sc.close();
    }
