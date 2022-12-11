public class 성적 {
    public static void main(String[] args){
        int[] arr={7,1,4,5,6};
        int three=0;
        int max=arr[0];
        int min=arr[0];
        int sum=0,avg=0;
        for(int i=1;i<=4;i++){
            if (max<arr[i]){
                max=arr[i];
            }
        }
        for (int i=1;i<=4;i++){
            if (min>arr[i]){
                min=arr[i];
            }
        }
        for(int i=0;i<=4;i++){
            sum=sum+arr[i];
        }
        avg=sum/5;
        System.out.println(arr[3]);
        for (int i=0;i<=4;i++){
            if (arr[i]==3){
                three++;
            }
        }
        if (three==0){
            System.out.println("n");
        }
        else{
            System.out.println("y");
        }
        System.out.println("합계: "+sum);
        System.out.println("평균: "+avg);
        System.out.println("최대: "+max);
        System.out.println("최소: "+min);
    }
}
