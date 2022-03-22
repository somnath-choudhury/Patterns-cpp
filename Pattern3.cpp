#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=1;
    int r=1;
    while(r<=n)
    {
        int c=1;
        while(c<=r)
        {
            cout<<count<<"  ";
            count++;
            c++;
        }
        r++;
        cout<<endl;
    }
}