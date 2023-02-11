#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz(x) int(x.size())
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}


int main(){
    fastio();
   int n = 56;
   string s = "eyad mohamed";
   /*cin >> n;
   cin.ignore();    
   getline(cin, s);
   cout << s <<n<< endl ;*/
    for(auto& c : s){       //for each --> c = s[i]
        cout<<c <<endl;     
    }
    /*
    -->
        for(i = 0 ; i<s.size();i++ ){
            char& c = s[i];
            c='E';}
    */

   //.size() is with all stls including strings 
    for(char& c : s)
    {
        c = 'E';
    }

    for (int i = s.size()-3; i >= 0; i--)
    {
        cout<<s[i]<<endl;     
    }
    
    for (int i = sz(s)-3; i >= 0; i--)
    {
        cout<<s[i]<<endl;     
    }
    
    cout<<s<<endl;
    s.push_back('b');
    s.push_back('b');
    s.pop_back();
    cout<<s<<endl;
    s+="kkk";
    cout<<s<<endl;
    s.resize(2);
    cout<<s<<endl;
    /*s.begin() --> 1st letter
    s.end()--> '\0
    s.front()--> 1st letter
    s.back() -->last letter
    swap(s[0],s[1]); --> swaps
    sort(s+0,s+s.size()); --> sorting 
    sort(s.begin(),s.end()); --> sorting 
    reverse(s.begin(),s.end()); --->reverse
    */
   s="hahahahsdasff";
   sort(all(s));
   cout<<s<<endl;
   sort(rall(s));
   cout<<s<<endl;
   sort(s.begin()+2,s.end()-4);
   cout<<s<<endl;
   auto it = find(s .begin(), s.end(),'g');
    if(it !=s.end())
        cout<< "Found\n";
    else
        cout<< "Not Found \n";
cout<<s<<endl;
cout<<s.find('a')<<endl;
cout<<s.find('9')<<endl;
if (s.find('9') == string::npos)  //:: (scope resolution) ur saying that npos is in string scope
{
    cout<<"no\n";
}else
{
    cout<<"yes\n";
}
if (s.find('9') == -1)
{
    cout<<"no\n";
}else
{
    cout<<"yes\n";
}

cout<<count(all(s),'a')<<endl;
cout<<*min_element(all(s));
cout<<*max_element(all(s))<<endl;
int idx_min = min_element(all(s))-s.begin() ;
cout<<idx_min<<endl;
int idx = find(s .begin(), s.end(),'f')-s.begin();
cout<<idx<<endl;

cout<<s.find("dff")<<endl;
//search transform function 
s="123546";
n = stoi(s);
cout<<n<<endl;
ll x = stoll(s);
cout<<x<<endl;
s=to_string(x);
cout<<s.substr(0,5)<<endl;
s.erase(0,2);
s.erase(2);
cout<<s<<endl;

/*
String binary;
while(x > 0){
binary +=(x % 2)+ '0';
x /= 2;}
reverse(binary);

*/
s= "ahmed hossa euads fjkadfn";
stringstream sss(s);
string str;
while (sss>>str)
{
    cout<<str<<endl;
}


return 0;}