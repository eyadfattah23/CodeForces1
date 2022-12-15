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

unsigned int n;
cin >> n;
int x[n];

for (int i = 0; i < n; i++)
{
    cin >> x[i];
}
for (int m = 0; m < n; m++)
{
    
    
    for (int j = 1; j < x[m]; j++)
    {
        /* code */
        x[m]*=j;
    }
    
}
for (int k = 0; k < n; k++)
{
    /* code */
    cout<<x[k]<<endl;
}








return 0;}    