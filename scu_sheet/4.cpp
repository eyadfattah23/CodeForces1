#include <iostream>

using namespace std;

void square_of_asterisks(int num){
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
        cout<<left<< "#";
        }    
        cout<<"\n";
    }
    
}

int main(int argc, char const *argv[])
{
    square_of_asterisks(4);
    return 0;
}
