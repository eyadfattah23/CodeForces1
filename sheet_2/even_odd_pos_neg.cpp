#include<iostream>
#include<vector>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}
int main(){
    fastio();

unsigned int count,even=0,odd=0,pos=0,neg=0;
cin >> count;
int array[count];
for (int i = 0; i < count; i++)
{
    /* code */
    cin >> array[i];
    if(array[i] %2 == 0){
        even++;
    }
    else if (array[i] %2 != 0)
    {
        odd++;
    }
    if (array[i] > 0)
    {
        pos++;
    }
    else if (array[i] < 0)
    {
        neg++;
    }
    
    
    
}
cout<<"Even: "<<even<<"\nOdd: "<<odd<<"\nPositive: "<<pos<<"\nNegative: "<<neg<<endl;



return 0;}    