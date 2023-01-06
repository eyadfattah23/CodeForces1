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
    unsigned int n,count=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < n; i++)
    {
        if (a[0] == a[i]){
            count++;
        }
    }
    if (count %2 != 0)
    {
        cout<<"Lucky";
    }else
    {
        cout<<"Unlucky";
    }
    
    

    



return 0;}