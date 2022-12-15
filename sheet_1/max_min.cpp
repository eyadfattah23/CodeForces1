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
    int a,b,c;
    int array[3];
    cin >>a>>b>>c;
    array[0]=a;array[1]=b;array[2]=c;
    sort(array,array+3);
    cout<<array[0]<<" ";
    cout<<array[2];


   

    
    
    
return 0;}