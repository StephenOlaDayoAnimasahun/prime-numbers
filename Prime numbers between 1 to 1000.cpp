#include <iostream>

using namespace std;

int main()
{
    int i;
    int j=0;
    int k;

    cout << "Prime numbers between 1 to 1000 are:" << endl;
    for(i=1;i<=1000;i++)
    {
        for(k=2;k<i;k++)
            {
                if(i%k==0)
                   {
                       j++;
                       break;

                   }
            }
            if(j==0 &&i!=1)
            {
             cout<<i<<endl;
            }
            j=0;

    }
    cout<<endl;
    return 0;

}
