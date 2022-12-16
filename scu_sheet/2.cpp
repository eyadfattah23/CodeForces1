#include <iostream>

using namespace std;

 long long int integerPower(int base, unsigned int exponent){
    long long result=1;
    for (int i = 1; i <=exponent ; i++)
    {
        result = result*base;
    }
    return result; 
}

