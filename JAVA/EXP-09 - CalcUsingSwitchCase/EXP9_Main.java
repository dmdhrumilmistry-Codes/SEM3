import java.util.Scanner;

public class EXP9_Main{
	static void PrintMenu() {
		System.out.println("Choose Operation to perform : ");
		System.out.println("+.Addition");
		System.out.println("-.Subtraction");
		System.out.println("*.Multiplication");
		System.out.println("/.Division");
		System.out.println("Enter the operation symbol : ");
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Two Numbers : ");
		double n1 = sc.nextDouble();
		double n2 = sc.nextDouble();
		PrintMenu();
		char operation = sc.next().charAt(0);
		sc.close();
		
		double ans = 0;
		switch (operation) {
		case '+':
			ans = n1+n2;
			break;
			
		case '-':
			ans = n1-n2;
			break;
			
		case '*':
			ans = n1*n2;
			break;
			
		case '/':
			ans = n1/n2;
			break;
			
		default:
			System.err.println("Choose Valid operation symbol.");
			break;
		}	
		System.out.println(n1 + " " + operation + " " + n2 + " = " + ans);
	}
}

