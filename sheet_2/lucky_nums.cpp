#include<iostream>
#include<algorithm>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}


bool is_lucky(int num){
    if (num == 7 || num ==4)
    {
        return true;
    }
    
    while ( num != 0 )
    {
        int last = num % 10;
        if (last == 4 || last ==7)
        {
        num /= 10;
        }
        else
        {
            
            return false;
        }
        
        
    }
    return true;

}


int main(){
    fastio();
int a , b;
cin>>a>>b;
bool fu=false;
for (int i = a; i <= b; i++)
{
    if (is_lucky(i))
    {
        cout<<i<<" ";
        fu=true;
    }
    
}
if (fu == false)
{
    cout<<-1;
}




return 0;}