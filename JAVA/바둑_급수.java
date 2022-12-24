import java.util.Scanner;
public class 바둑_급수 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int brother=0,sister=0;
        System.out.print("Brother: ");
        brother=sc.nextInt();
        System.out.print("Sister: ");
        sister=sc.nextInt();
        if (brother!=sister){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
    }
    
}