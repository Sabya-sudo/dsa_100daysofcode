//This is Parameterised recursion
 #include <iostream>
using namespace std;
void fun(int n, int sum){
    if(n<1){
        cout<<sum;
        return;
    }
    fun(n-1,sum+n);
    
}
int main() {
    int n;
    cin>>n;
    fun(n,0);
    return 0;
}
