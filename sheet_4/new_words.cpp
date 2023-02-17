#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())

void fastio()
{
   ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr); 
}





int main(){
    fastio();
   int times =1;
   // cin >> times;
   for (int t = 0; t < times; t++)
   {
    string s;
    cin >> s;
    transform(s.begin(), s.end(),s.begin(),::tolower);
    int eg[5];
    eg[0] = count(all(s),'e');
    eg[1] = count(all(s),'g');
    eg[2] = count(all(s),'y');
    eg[3] = count(all(s),'p');
    eg[4] = count(all(s),'t');
    sort(eg,eg+5);
    cout<<*min_element(eg,eg+5);
    



















   
   }
    
    



return 0;}