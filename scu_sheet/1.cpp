#include <iostream>
#include <cmath>

using namespace std;
double sphereVolume(double radius){
    return (4.0/3.0)*3.14159*pow(radius,3);
}
int main(){
    double r;
    cout<<"enter radius: ";
    cin>> r;
    cout<<sphereVolume(r);

return 0;}
