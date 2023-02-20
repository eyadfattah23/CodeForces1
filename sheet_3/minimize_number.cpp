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

    int min_num(){

    unsigned int no_op=0,n;
    cin >> n;
    unsigned int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool x=true;
    
    while (x == true)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                x=false;
                cout<<no_op;
                break;
            }
            else
            {
                a[i] /= 2;
            }
            
        }
    no_op+=1;
    }
    return 0;
    }

int main(){
    fastio();
    min_num();
   
    



return 0;}