#include<iostream>
using namespace std;

int main()
{
    srand(time(0));
    for(int i=0;i<5;i++)
    {
        cout<<rand() % 100<<"/n";   //will generate the random number between 0-99
    }
    return 0;
}