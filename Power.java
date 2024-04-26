import java.util.Scanner;
public class Power {
    public static void main(String[] args){
        int count=0;
        int sum=0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number");
        int number = sc.nextInt();
        System.out.println("Enter N");
        int n = sc.nextInt();
        while (number % n == 0) {
            count++;
            number = number/n;
        }
        
        System.out.println("Your answer is: "+count);
        
    }
    
}
