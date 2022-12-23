#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}

int sum_digits(int num){
    int sum = 0;
    while (num)
    {
        sum+=num%10;
        num /= 10;
    }
   return sum;

}

int main(){
    fastio();

    int n , a , b ,sum=0;
    cin >> n >> a >> b ;
    
    for ( int i = 1 ; i <= n ; i++){ 
        if (sum_digits(i)>=a && sum_digits(i)<=b)
        {
            sum+=i;
        }
      
    }
    cout<<sum;

return 0;}