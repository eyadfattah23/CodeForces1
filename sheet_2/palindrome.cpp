#include <iostream>
using namespace std;

int main() {

  int n,x, reversed_number = 0, remainder;

  cin >> n;
    x=n;
  while(x != 0) {
    remainder = x % 10;
    reversed_number = reversed_number * 10 + remainder;
    x /= 10;
  }

  cout << reversed_number<<endl;
  if (reversed_number==n){
    cout << "YES" << endl;
  }else
  {
    cout << "NO" << endl;
  }
  

  return 0;
}