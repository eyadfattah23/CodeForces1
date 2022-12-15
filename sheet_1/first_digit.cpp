#include<iostream>
using namespace std;
void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}
int firstDigit(int n)
{
    // Remove last digit from number
    // till only one digit is left
    while (n >= 10)
        n /= 10;
     
    // return the first digit
    return n;
}
int main(){
fastio();
unsigned int x;
cin>>x;
x= firstDigit(x);
if (x%2==0)
{
    cout << "EVEN";
}else
{
    cout << "ODD";
}







return 0;
}