#include<bits/stdc++.h>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}

int main(){

fastio();

unsigned long long n , t ;unsigned int num=0,answer =0;  
cin >> n;
t=n;
if (n == 0){
    cout <<"0" ; 
    return 0;
}
while (t!=0)
{
    t/=10;
    num+=1;
}
int arr[num];

for (int i = num-1; i >= 0; i--)
{
    arr[i]=n%10;
    n/=10;
}

for (int i = 0; i < num; i++)
{
    arr[i]=(arr[i]*2)%10;
}

int tm=1;
for (int i = num -1 ; i >=0; i--)
{
    answer += arr[i]*tm;
    tm*=10;
}
cout<<answer;







return 0;}