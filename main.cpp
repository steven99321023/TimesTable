#include <iostream>
// change layout 2017/9/29
using namespace std;

int main()
{
    int i(0);
    int j(0);

    for(i=1;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
            cout<<i<<"*"<<j<<"="<<i*j<<" ";
            if((i*j)<10)
                cout<<" ";
        }
        cout<<endl;
    }
        return 0;
}
