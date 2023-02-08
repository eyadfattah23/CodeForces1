#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}





int main(){
    int t;
    cin>>t;
    cin.ignore();
    for (int times = 0; times < t; times++)
    {
       string str , s="" , t="";
       getline(cin, str);
       int i;
       for (i = 0; i < str.length(); i++){
        if (str[i] == ' ')
        {
            break;
        }
        s.push_back(str[i]);
       }
       int j;
       for ( j = i+1; j < str.length(); j++)
       {
        t.push_back(str[j]);
       }
       
       int ii = 0, jj = 0;
       while (ii<i && jj < t.length())
       {
        cout<<s[ii];
        cout<<t[jj];
        ii++;
        jj++;
       }
        
       if (s.length() > t.length())
       {
        for (int ll = ii; ll < s.length(); ll++)
        {
            cout<<s[ll];
        }
        
       }else if (t.length() > s.length())
       {
        for (int kll = jj; kll < t.length(); kll++)
        {
            cout<<t[kll];
        }
        
       }
       
       
       
       cout<<"\n";
       
       
       

    }
    
    
    


return 0;}