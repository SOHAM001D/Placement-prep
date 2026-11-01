#include<iostream>
using namespace std;

namespace Marvellous
{
    int i = 11;

    void Display()
    {
        cout<<"Inside Display";
    }
}

using namespace Marvellous;

int main()
{
    cout<<i<<"\n";

    Display();
    
    return 0;
}