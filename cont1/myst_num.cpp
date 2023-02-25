#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())

void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
string decimal_to_binary(int x)
{
    string binary;
    while (x > 0)
    {
        binary += (x % 2) + '0';
        x /= 2;
    }
    reverse(all(binary));
    return binary;
}


bool prime(int num){
    bool is_prime = true;
    if (num == 0 || num == 1){
        return false;
    } 
    else
    {
        for (int i = 2; i <= num/2; i++)
        {
            if (num % i == 0)
            {
                is_prime = false;
                break;
            }
            
        }
        
    }
    if(is_prime == true){
        return true;
    }else
    {
        return false;
    }
    

}
int main()
{
    fastio();
    int times = 1;
    cin >> times;
    for (int t = 0; t < times; t++)
    {   
        unsigned int n;
        cin >> n;
        if (prime(n))
        {
            cout<<"Prime\n";
            continue;
        }
        int gpf;
        for (int i = 0; i < n/2; i++)
        {
            if (prime(i) == true && n%i  ==0)
            {
                gpf = i;
            }
            
        }
        cout<<gpf<<endl;
        
    }

    return 0;
}