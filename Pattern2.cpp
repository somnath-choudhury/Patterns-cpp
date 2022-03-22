#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int r=1;
    for(r=1;r<=n;r++)
    {
        int c=1;
        for(c=1;c<=r;c++)
        {
            cout<<r;
        }
        cout<<endl;
    }

    return 0;
}