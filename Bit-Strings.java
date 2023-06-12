import java.util.Scanner;
 
public class BitString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long bit = 1;
        for (int i = 1; i <= n; i++) {
            bit = (2 * bit) % 1000000007;
        }
        System.out.println(bit);
        sc.close();
    }
}
