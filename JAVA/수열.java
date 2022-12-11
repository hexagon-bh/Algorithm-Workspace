public class 수열 {
    public static void main(String[] args){
       int[][] array = new int[5][5];
       int[] odd=new int[25];
       int b=0;
       for (int i=1;i<=99;i++){
            if (i%2==0 && i%5>0){
                odd[b]=i;
                b++;
                if(b==25){
                    break;
                }
            }
       }
       b=0;
       for (int i=0;i<=4;i++){
            for(int j=0;j<=4;j++){
                array[i][j]=odd[b];
                b++;
            }
       }
       for (int i=0;i<=4;i++){
            for (int j=0;j<=4;j++){
                System.out.print(array[i][j]+" ");
            }
            System.out.println();
       }
   }
}
