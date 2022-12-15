#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}

int main(){

int n,num,t,fact=1;
cin >> n;

for (int i = 1; i <= n; i++)
{
    fact = fact *i;
}
 int binaryNum[32];
 
    int i = 0;
    while (fact > 0) {
 
        binaryNum[i] = fact % 2;
        fact = fact / 2;
        i++;
    }
    
int counter = 0;

for (int i = 0; i < 32; i++)
{
    if (binaryNum[i] == '\0'){
        counter++;
    }
}
cout<<counter;
return 0;}


