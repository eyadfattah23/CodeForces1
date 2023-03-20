#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())

void fastio()
{
   ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr); 

}
string decimal_to_binary(int x){
string binary;
while(x> 0){
binary += (x % 2) + '0';
x/=2;}
reverse(all (binary));
return binary ;
}


























int main(){
    fastio();
   int times =1;
   // cin >> times;
   for (int t = 0; t < times; t++)
   {
    //to print all divisors
    int n = 13; 
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i  == 0)
        {
            cout<<i<<endl;
            cout<<n / i<<endl;
        }
        
    }
    


    //to know if num is prime
        if (n < 2)
        {
            cout<<"not prime"<<endl;
            //and dont enter the loop 
        }
    for (int j = 2; j <= sqrt(n); j++)
    {
        
        if (n % j == 0)
        {
            cout<<n<<" is not prime\n";
            return 0; //if n isnt prime exit 
        }
    }
    cout<<n<<" is prime\n";
            
    n=900;
    // prime factorization (getting all the prime factors of a number)
    for (int ii = 2; ii <= sqrt(n); ii++)
    {
        while (n % ii == 0)
        {
            n/=ii;
            cout<<ii<<endl;
        }
        
    }
    if(n>1){
        cout<<n<<endl;
    }

    //converting from one base to another(a[i]*base^i)
    string s = "1111000";
    int base = 2;
    ll prod = 1;
    int res=0;
    for (int i = sz(s)-1; i >= 0; i--)
    {
        res += (s[i] -'0')*prod;
        prod *= base;
    }
    cout<<res<<endl;
    string s = "150";
    int base = 16;
    ll prod = 1;
    int res=0;
    for (int i = sz(s)-1; i >= 0; i--)
    {
        res += (s[i] -'0')*prod;
        prod *= base;
    }
    cout<<res<<endl;







   
   }
    
    



return 0;}