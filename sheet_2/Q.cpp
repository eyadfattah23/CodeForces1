#include<iostream>
#include<algorithm>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}

int main(){

    fastio();
    int m=1,n=1,x,y;
    while (m > 0 && n > 0 )
    {
    cin >> m >> n;
    if (m < 1 || n < 1)
    {
        break;
    }
    
    x=min(m,n);
    y=max(m,n);
    int sum=0;
    for (int i = x ; i <= y; i++)
    {
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"sum ="<<sum<<endl;
    

    }
    

    return 0;
}