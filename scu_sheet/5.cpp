#include <iostream>

using namespace std;


double circleArea(double radius){
    return 3.14159*radius*radius;
}

int main(){
    double radius;
    cout<<"enter radius: ";
    cin >> radius;
    cout<<"area = "<<circleArea(radius)<<endl;
}