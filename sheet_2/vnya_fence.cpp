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

int n, h;
cin >> n >> h;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
int w = 0;
for (int i = 0; i < n; i++)
{
    if (arr[i]>h){
        w+=2;
    }else if (arr[i]<=h)
    {
        w+=1;
    }
    
}
cout<<w<<endl;


return 0;}