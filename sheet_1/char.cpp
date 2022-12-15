#include<iostream>
#include<string>
#include<cctype>

using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}
int main(){

    char c;
    cin >> c;
    if (c<='z' && c>='a'){
        cout<<(char)toupper(c);
    }else if(c<='Z' && c>='A')
    {
        cout<<(char)tolower(c);
        /* code */
    }
    

    return 0;
}