import java.util.Scanner;
public class 평행사변형 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int line=0;
        line=sc.nextInt();
        for (int i=0;i<=line-1;i++){
            for (int j=0;j<=i;j++){
                System.out.print("# ");
            }
            System.out.println();
        }
        for (int i=0;i<=line-2;i++){
            for (int j=0;j<=i;j++){
                System.out.print("  ");
            }
            for (int j=0;j<=line-(i+2);j++){
                System.out.print("# ");
            }
            System.out.println();
        }
    }
}
