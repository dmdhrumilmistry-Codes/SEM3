import java.util.Scanner;

class Calc{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.println("==========================================================================");
    System.out.println("Exp 07 - Addition , Subtraction , Multiplication, Division of Two Numbers");
    System.out.println("==========================================================================");
    System.out.print("Enter two numbers : ");
    int n1 = sc.nextInt();
    int n2 = sc.nextInt();
    sc.close();

    int ans = n1 + n2;
    System.out.println("Addition : " + ans);

    ans = n1 - n2;
    System.out.println("Subtraction : " + ans);

    ans = n1*n2;
    System.out.println("Multiplication : " + ans);

    ans = n1/n2;
    System.out.println("Division : " + ans);
  }
}
