#include<iostream>
using namespace std;
void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}
int main(){
fastio();

double x,y;
cin >> x >>y;
if (x==0 && y==0){
    cout<<"Origem";
}
else if (x==0)
{
    cout<<"Eixo Y";
    
}
else if (y==0)
{
    cout<<"Eixo X";
    
}
else
{
    if(x>0 && y>0){
        cout<<"Q1";
    }
    else if (x<0 && y<0)
    {
        cout<<"Q3";
    }
    else if (x>0 && y<0)
    {
        cout<<"Q4";
    }
    else if (x<0 && y>0)
    {
        cout<<"Q2";
    }
    
}


return 0;}