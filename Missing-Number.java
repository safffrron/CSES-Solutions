import java.util.Scanner;
 
public class MissingNumber 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        long a = 0, s = 0;
        long n = sc.nextLong();
      
        sc.nextLine();
        String st = sc.nextLine();
      
        for (String i : st.split(" ")) {
            a = Long.parseLong(i);
            s = s + a;
        }
      
        System.out.println(((n * (n + 1)) / 2) - (s));
      
        sc.close();
    }
}
