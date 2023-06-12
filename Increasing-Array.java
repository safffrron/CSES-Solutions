import java.util.Scanner;
 
public class IncreasingArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int j = 0;
        long c = 0;
        long[] ar = new long[n];
        sc.nextLine();
        String s = sc.nextLine();
        for (String i : s.split(" ")) {
            ar[j] = Long.parseLong(i);
            ++j;
        }
        for (int a = 1; a < n; a++) {
            if (ar[a - 1] >= ar[a]) {
                c = c + (ar[a - 1] - ar[a]);
                ar[a] = (ar[a - 1]);
 
            }
        }
        System.out.println(c);
        sc.close();
 
    }
}
