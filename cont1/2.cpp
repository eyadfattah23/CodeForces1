#include <iostream>

using namespace std;

int main(){

long long x,y,z;
cin >> x >> y >> z;
if (z>x+y){
    cout <<-1<<endl;
}
else if (x>=z)
{
    cout <<0<<endl;
    /* code */
}
else{
    cout<<z-x<<endl;
}

    return 0;
}