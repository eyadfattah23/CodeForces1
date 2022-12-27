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
    unsigned int n;
    cin >> n;
    int a[n],tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0  ; i < n-1; i++)
    {
        for (int l = 1 ,m =0; l < n-i; l++ ,m++)
        {
            if (a[m]>a[l])
            {
                tmp = a[m];
                a[m] = a[l];
                a[l] = tmp;
            }
            
        }

    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    

//        tmp = a[i];
//      a[i] = a[j];
//        a[j] = tmp;


return 0;}