class Miss {
    public static void main(String[] args) {
        int[] arr={1,2,3,5,6};
        int n=6;
        int exp=n*(n+1)/2;
        int act=0;
        for(int i=0;i<arr.length;i++){
            act+=arr[i];
        }
        int missing_numer=exp-act;
        System.out.println(missing_numer);
    }
}
