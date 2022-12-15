#include<iostream>
#include<vector>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}
int main(){
    fastio();

float n;
cin >> n;
if(n<=1){
    cout<<-1<<endl;
    return 1;
}
for (int i = 1; i <= n; i++)
{
    if (i%2==0)
    {
    cout << i << endl;
    }
    
}



return 0;}    