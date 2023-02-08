#include<bits/stdc++.h>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}

const int MAX_CHAR = 26;
void sortString(string &str)
{
    int charCount[MAX_CHAR] = {0};
     
    
    for (int i=0; i<str.length(); i++)
 
        
        charCount[str[i]-'a']++;   
     
    
    for (int i=0;i<MAX_CHAR;i++)
        for (int j=0;j<charCount[i];j++)
            cout << (char)('a'+i);
}

int main(){
    fastio();
   unsigned int n;
   cin>>n;
   string str;
   cin>>str;
   sortString(str);
    
    
   
    



return 0;}