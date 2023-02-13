#include<bits/stdc++.h>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}


int main(){
    fastio();
    string url,usrname="",pwd="",prof="",rol="",key="";
    cin>>url;
    for (int i = 0; i < url.length(); i++)
    {
        if (url[i] == '?' && url.substr(i+1,8)=="username")
        {
            int st=i+10;
            while (url[st] != '&')
            {
                usrname.push_back(url[st]);
                st++;
            }
            
        }
        else if (url[i] == '&' && url.substr(i+1,3)=="pwd")
        {
            int st=i+5;
            while (url[st] != '&')
            {
                pwd.push_back(url[st]);
                st++;
            }
        }
        else if (url[i] == '&' && url.substr(i+1,7)=="profile")
        {
            int st=i+9;
            while (url[st] != '&')
            {
                prof.push_back(url[st]);
                st++;
            }
        }
        else if (url[i] == '&' && url.substr(i+1,4)=="role")
        {
            int st=i+6;
            while (url[st] != '&')
            {
                rol.push_back(url[st]);
                st++;
            }
        }
        else if (url[i] == '&' && url.substr(i+1,3)=="key")
        {
            int st=i+5;
            while (st != url.size())
            {
                key.push_back(url[st]);
                st++;
            }
        }


        
    }
    cout<<"username: "<<usrname<<endl;
    cout<<"pwd: "<<pwd<<endl;
    cout<<"profile: "<<prof<<endl;
    cout<<"role: "<<rol<<endl;
    cout<<"key: "<<key<<endl;






   
    



return 0;}