#include <iostream>
#include <algorithm>
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
  }

#define cy cout<<"yes"; 
int main (){
fastio ();


string name (10, 'a');

cout<< name<< "\n";

getline (cin, name);

name.push_back('f');

cout<< name<< "\n";

name.pop_back();

cout<< name<< "\n";

cout<< name.capacity()<< "\n";      //unusable

name.resize(3);

cout<< name<< "\n";

cout<< name.size()<< "\n";      //most used 

cout<< *name.begin()<< "\n";

cout<< *(name.end()-1)<< "\n";

cout<< *name.rbegin()<< "\n";   //end of name
cout<< *name.rend()<< "\n";   

string name2 ="7amasa";
swap(name2, name);
cout<< name<< "\n";
cout<< name2<< "\n";

sort(name.begin(), name.end());         // sort asc. by Ascii
cout<< name<< "\n";

reverse(name.begin(), name.end());         // reverse the string
cout<< name<< "\n";

transform(name.begin(), name.end(),name.begin(), ::toupper);    //unusable
cout<< name<< "\n";

cout<< (name<name2)<< "\n";     // if name < name2 return 1

cout<< name.substr(2,4)<< "\n";
cout<< name.find('7')<< "\n";
cout<< name.find('5')<< " " << string ::npos<<endl; 
if (name.find('5') != string::npos){
    cout<< "5 is not a found";
}
else{
    cout<<"not found"<<endl;
}

int x,y;
cin >>x >> y;
cout <<(x <= y);    //between () is a condition 
}


/*
stoi(string )-->str to int 
stoll(string )-->str to long long
stof(string )-->str to float
stold(string )-->str to double
stoull(string )-->str to unsigned long
*/
void Swap (int &a, int &b){
int tmp = a; // a: 5, b: 10, tmp: 5
a = b; // a: 10, b: 10, tmp: 5
b=tmp; //a: 10, b: 5, tmp: 5



}
/*
20 % 5 = 0          كل ما بتزود 5 نفس الناتج بيطلع
21 % 5 = 1
22 % 5 = 2          
23 % 5 = 3
24 % 5 = 4          الماكس = 4
25 % 5 = 0
26 % 5 = 1
27 % 5 = 2



( x + y ) % c = 0 --> at x+y == a number that is divisble by c 
        --> so if x%c + y%c == c then (x+y)%c==0 
*/


/*
23 % 5 = 23 - ((int)23/5 * 5) = 23 - (4*5) = 3

2 % 5 = 2

56 % 90 = 56

-12 % 5= -2 

( x % y ) + y) % y --> (-12%5)+5)%5 {this rule applies on + and -}

-10 % 5 =0

(a + b) % c =  ((a % c) + (b % c)) % c
(a - b) % c =  ((a % c) - (b % c)) % c
(a * b) % c =  ((a % c) * (b % c)) % c



*/

/*
at 3 oclock whats the time after 15hrs
( 3 + 15 ) % 12 = 18 % 12 = 6

before 20 hrs
( 3 - 20 ) % 12 = -17 % 12 = -5 
add 12 using this law ( x % y ) + y) % y

-5 + 12 = 7 
*/