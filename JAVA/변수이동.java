public class 변수이동 {
    public static void main(String[] args){
        int[] num={2,4,7,8,1,2};
        int[] numb=new int[10];
        for (int i=0;i<num.length;i++){
            numb[i]=num[i];
        }
        for(int i=0;i<numb.length;i++){
            System.out.print(numb[i]+" ");
        }
    }
}
