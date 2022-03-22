//     1
//    121   
//   12321  
//  1234321 
// 123454321

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        //Printing space
        int sp=n-i;
        while(sp)
        {
            cout<<" ";
            sp--;
        }

        //Printing first triangle
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }

        //Printing second triangle
        int start=i-1;
        while(start)
        {
            cout<<start;
            start--;
        }

        cout<<endl;
        i++;
    }
}