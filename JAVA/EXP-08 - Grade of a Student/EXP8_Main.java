import java.util.Scanner;

public class EXP8_Main {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the number of Subjects : ");
		int n = sc.nextInt();
		
		int marks[] = new int[n];
		System.out.println("Enter the marks for " + n +" Subjects :");
		for(int i=0;i<n;i++) {
			marks[i] = sc.nextInt();
		}
		sc.close();
		
		float average = 0;
		for(int i=0;i<n;i++) {
			average += marks[i];
		}
		
		average /= n;
		
		if(average>=80&&average<=100) {
			System.out.println("A");
		}else if(average >= 70 && average < 80) {
			System.out.println("B");
		}else if(average>=60 && average<70) {
			System.out.println("C");
		}else if(average>=50 && average<60) {
			System.out.println("D");
		}else if(average>=40 && average<50) {
			System.out.println("E");
		}else {
			System.out.println("F");
		}
	}
	
}