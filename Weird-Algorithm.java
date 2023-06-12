import java.util.Scanner;
 
public class CsesProblemset {
 
	public static void main(String[] args) {
 
		{
			Scanner sc = new Scanner(System.in);
			long n = sc.nextInt();
			long a = n;
			System.out.print(a + " ");
 
			while (a > 1) {
				if (a % 2 == 0) {
					a = a / 2;
					System.out.print(a + " ");
				} else {
					a = (a * 3) + 1;
					System.out.print(a + " ");
				}
			}
			sc.close();
		}
 
	}
}
