#include<iostream>
#include<algorithm>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}



bool prime(int num){
    bool is_prime = true;
    if (num == 0 || num == 1){
        return false;
    } 
    else
    {
        for (int i = 2; i <= num/2; i++)
        {
            if (num % i == 0)
            {
                is_prime = false;
                break;
            }
            
        }
        
    }
    if(is_prime == true){
        return true;
    }else
    {
        return false;
    }
    

}
int main(){
    fastio();

unsigned int n;
cin >> n;

for (int i = 0; i <= n; i++)
{
    if (prime(i))
    {
        cout<<i<<" ";
    }
    
}






return 0;}