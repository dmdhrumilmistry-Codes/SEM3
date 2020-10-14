import java.util.Scanner;

public class EXP11_Main {
	public static void main(String[] args) {
		String fN,lN;
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter your first name:");
		fN = sc.nextLine();
		
		System.out.println("Enter your Middle Name:");
		String mN = sc.nextLine();
		
		System.out.println("Enter your last name:");
		lN = sc.nextLine();
		
		System.out.println("F Name\tL Name");
		System.out.println(fN.toUpperCase()+"\t"+lN.toUpperCase());
		System.out.println(fN.toLowerCase()+"\t"+lN.toLowerCase());
		
		System.out.println();
		
		String fullName = fN + " " + mN + " " + lN;
		System.out.println("Full Name: "+fullName);
		
		//generating email id 
		fullName = fN+mN+lN;
		String emailID = fullName.toLowerCase() + "@gmail.com";
		System.out.println(emailID);
		
		System.out.println("Enter password to login to your account:");
		String password = sc.nextLine();
		sc.close();
		
		if(password.equals("pass")) {
			System.out.println("Access Granted!");
		}else {
			System.out.println("Access Denied!");
		}
		
		int nameLength = fullName.length();
		System.out.println("Your Name Length: "+ nameLength);
		
	}
}
