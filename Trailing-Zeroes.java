import java.util.Scanner;
 
public class TrailingZeroes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int two = power(2, n);
        int five = power(5, n);
        int min = Math.min(two, five);
        System.out.println(min);
        sc.close();
 
    }
 
    static int power(int i, int n) {
        int c = 0, x, f = 1;
        do {
            x = (int) (n / Math.pow(i, f));
            c = c + x;
            ++f;
            if (x == 0)
                break;
        } while (x > 0);
        return c;
    }
}
