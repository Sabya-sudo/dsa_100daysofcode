 import java.util.*;

class HelloWorld {
    public static void main(String[] args) {
         
         Scanner sc = new Scanner(System.in);
         int n = sc.nextInt();
         
         int [] arr = new int[n];
         for(int i=0;i<n;i++){
             arr[i]=sc.nextInt();
         }
         
         for(int i=0;i<n;i++){
             boolean isprime=true;
             if(arr[i]<=1){
                 isprime=false;
             }
             else{
                 for(int j=2;j<=arr[i]/2;j++){
                     if(arr[i]%j==0){
                         isprime = false;
                         break;
                     }
                      
                 }
             }
             
             if(isprime){
                 System.out.println(arr[i]+" ");
             }
         }
         
         
    }
}
