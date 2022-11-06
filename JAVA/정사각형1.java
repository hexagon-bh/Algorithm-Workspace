import java.util.Scanner;
public class 정사각형1{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int aString=65;
        char[][] arr=new char[n][n];
        for (int j=n-1;j>=0;j--){
            for (int i=n-1;i>=0;i--){
                arr[i][j]=(char)aString;
                aString++;
            }
        }
        for (int i=0;i<=n-1;i++){
            for (int j=0;j<=n-1;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
}