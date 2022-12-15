#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int x,a,b,c,maxj,mid,minj,pay;
    cin >> x >> a >> b >> c;
    maxj=max(a,max(b,c));
    minj = min(a,min(b,c));
    mid = a+b+c-maxj-minj;

if (x >=maxj)
{
    pay=maxj;
}
else if (x<maxj && x>=mid)
{
    pay=mid;
}

else if (x<maxj && x>=minj  && x<mid)
{
    pay=minj;
}
if (pay == a)
{
    cout<<"Mango Juice";
}else if (pay == b)
{
    cout<<"Apple Juice";
}else if (pay == c)
{
    cout<<"Lemon Juice";
}else
{
    cout << "Go and drink some water" << endl;

}







    return 0;
}