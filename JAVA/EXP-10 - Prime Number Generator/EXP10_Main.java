/*
 *  Experiment 10 - Prime Numbers
 *  Written By Dhrumil Mistry
 *  SE EXTC A 14
 *  written on 10/08/2020
 */

import java.util.Scanner;

public class EXP10_Main {
	//Function to print n Prime Numbers
	public static void PrintPrimes(int n) {
		int i,count=1;
		for(i=2;count<=n;i++) {
			int j=2;
			while(i%j!=0) {
				j++;
			}
			if(i==j) {
				count++;
				System.out.println(i);
			}
		
		}
	}
	
	//Main Function
	public static void main(String args[]) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number of prime numbers to be printed:");
		int n = sc.nextInt();
		sc.close();
	
		PrintPrimes(n);
		
	}
	
}