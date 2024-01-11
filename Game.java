import java.util.Scanner;

public class Game {
 
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n1 = scan.nextInt();
        int n2 = scan.nextInt();
        // int k1=  scan.nextInt();
        // int k2 = scan.nextInt();
        System.out.println(n1>n2 ? "First" : "Second");
    }  
}
