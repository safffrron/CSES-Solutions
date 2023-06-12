
import java.util.Scanner;
 
public class TowerofHanoi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int c = towerOfHanoi(n);
        System.out.println(c);
        moves(n, 1, 2, 3);
        sc.close();
    }
 
    static int towerOfHanoi(int a) {
        if (a == 1) {
            return 1;
        } else {
            return (1 + (2 * towerOfHanoi(a - 1)));
        }
    }
 
    static void moves(int a, int one, int two, int three) {
        if (a == 1) {
            System.out.println(one + " " + three);
 
        } else {
            moves(a - 1, one, three, two);
            System.out.println(one + " " + three);
            moves(a - 1, two, one, three);
        }
 
    }
}
