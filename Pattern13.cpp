#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        //space print karlo
        int sp = n-i;
        while(sp)
        {
            cout<<"  ";
            sp--;
        }
        //stars print karlo
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
