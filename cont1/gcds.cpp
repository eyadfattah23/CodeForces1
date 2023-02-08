#include<bits/stdc++.h>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}
void findGCDsSubsequence(vector<int> arr)
{
     
    vector<int> ans;
 
    set<int> s;
    for(int i : arr)
        s.insert(i);
         
    int M = *max_element(arr.begin(), arr.end());
     
    for(int i = 1; i <= M; i++)
    {
        int gcd = 0;
 
        
        for(int j = i; j < M + 1; j += i)
        {
            if (s.find(j) != s.end())
                gcd = __gcd(gcd, j);
        }
        if (gcd == i)
            ans.push_back(i);
    }

    cout<<*min_element(arr.begin(), arr.end());
}
int main(){
    fastio();
    unsigned int n,x;
    cin >> n;
    vector<int>arr;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    findGCDsSubsequence(arr);
   
    



return 0;}