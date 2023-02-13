#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())

void fastio()
{
   ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr); 
#ifdef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdin);
#endif // DEBUG
}
string decimal_to_binary(int x){
string binary;
while(x> 0){
binary += (x % 2) + '0';
x/=2;}
reverse(all (binary));
return binary ;
}
int main(){
    fastio();
   int times =1;
   // cin >> times;
   for (int t = 0; t < times; t++)
   {


        int n,q;
        cin >> n>>q;
        string ss;
        cin >> ss;
        int l,r,pos;
        string fs[q];
        for (int i = 0; i < q; i++)
        {
            cin>>fs[i];
            if (fs[i] == "sort" ||fs[i] == "reverse" || fs[i] == "substr")
            {
                cin>>l>>r;
                if (fs[i] == "sort" )
                {
                    sort(ss.begin()+l-1,ss.begin()+r);

                }else if (fs[i] == "reverse" )
                {
                    reverse(ss.begin()+l-1,ss.begin()+r);

                }else if (fs[i] == "substr")
                {
                    cout<<ss.substr(l-1,r-l+1 )<<endl;
                }
                
            }
            else if (fs[i] == "print")
            {
                cin>>pos;
                cout<<ss[pos-1]<<endl;
            }
            else if (fs[i] =="front")
            {
                cout<<ss.front()<<endl;
            }else if (fs[i] == "back")
            {
                cout<<ss.back()<<endl;
            }
            else if (fs[i] == "pop_back")
            {
                ss.pop_back();
            }else if (fs[i] =="push_back")
            {
                char x;
                cin>>x;
                ss.push_back(x);
            }
            
            
            
            
            
            
        }









   }
    
    



return 0;}