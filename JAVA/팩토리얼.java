import java.util.Scanner;
public class 팩토리얼 {
    public static void main(String[] args){
        int value=0,answer=1;
        Scanner sc = new Scanner(System.in);
        value=sc.nextInt();
        if (value>10){
            value=value%10;
        }
        for(int i=1;i<=value;i++){
            answer=answer*i;
        }
        System.out.print(answer);

    }
}
