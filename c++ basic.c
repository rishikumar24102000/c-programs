#include <iostream>
using namespace std;
#include <stdio.h>
class a
{
    public:
    int abc()
    {
        cout<<"hi";
    }
};


class b : public a{
    
};


int main()
{
    b obj;
    obj.abc();

    return 0;
}