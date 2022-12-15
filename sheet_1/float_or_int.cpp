#include<iostream>
using namespace std;
void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}
int main(){
fastio();

float n;
cin >> n;
if (n/(int)n !=1){
    cout << "float "<<(int)n<<" "<< n-(int)n << endl;
}
else
{
    cout << "int "<<(int)n<<endl;
}







return 0;}