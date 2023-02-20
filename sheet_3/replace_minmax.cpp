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

int main(){
    fastio();
    int n,max,min,idxmin,idxmax ;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    max=a[0];
    min=a[0];
    for (int i = 0; i < n; i++)
    {
        if (max <= a[i])
        {
            max=a[i];
            idxmax=i;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (min >= a[i])
        {
            min=a[i];
            idxmin=i;

        }
        
    }
    int tmp;
    
            tmp=a[idxmin];
            a[idxmin]=a[idxmax];
            a[idxmax]=tmp;

        
    for (int i = 0; i < n; i++)
    {
        cout<<a[i] <<" ";
    }
    




return 0;}