public class HelloWorld{
 
    static void search(String pat, String txt)
    {
        int l1 = pat.length();
        int l2 = txt.length();
        int i = 0, j = l2 - 1;
 
        for (i = 0, j = l2 - 1; j < l1;) {
 
            if (txt.equals(pat.substring(i, j + 1))) {
                System.out.println("Pattern found at index "
                                   + i);
            }
            i++;
            j++;
        }
    }

 // string split

 public class String{
  public static void main(String[] args{
Scanner sc = new Scanner(System.in);
   String str = sc.nextLine();
   char[] arr = str.split("");
   for(int i=0;i<arr.length;i++){
    System.out.print(arr[i] + " ");
   }
}
}

