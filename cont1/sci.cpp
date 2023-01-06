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

int n,num,counter=0;
unsigned long long fact=1;
cin >> n;
if (n==0){
    cout<<0;
    return 0;
}

for (int i = 1; i <= n; i++)
{
    fact = fact *i;
}
vector<int>bin;
while (fact != 0)
{
    bin.push_back(fact%2);
    fact /= 2;
}
for (int i = 0; i < bin.size(); i++)
{
    counter++;
}

cout<<counter;

return 0;}


