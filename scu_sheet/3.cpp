#include<cmath>
#include<iostream>
using namespace std;
double hypotenuse(double l1, double l2){
    double hyp_sq= pow(l1,2)+pow(l2,2);
    return sqrt(hyp_sq);
}


int main(int argc, char const *argv[])
{
    cout<<hypotenuse(3,4);
    return 0;
}
