import java.util.Scanner;
public class 연산자{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int[] arr=new int[4];
        for (int i=0;i<=3;i++){
            arr[i]=scan.nextInt();
        }
        int sum=0,avg=0;
        for (int i=0;i<=3;i++){
            sum=sum+arr[i];
        }
        avg=sum/4;
        System.out.println("Sum: "+sum);
        System.out.println("Avg: "+avg);
    }
    
}