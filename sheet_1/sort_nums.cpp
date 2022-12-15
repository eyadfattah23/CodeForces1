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

int a,b,c,x,y,z;
cin >> a>>b>>c;
x=a; y=b; z=c;
int arr[]={a,b,c};
sort(arr,arr+3);
cout<<arr[0]<<"\n"<<arr[1]<<"\n"<<arr[2]<<"\n"<<endl;
cout<<x<<"\n"<<y<<"\n"<<z<<endl;



return 0;}