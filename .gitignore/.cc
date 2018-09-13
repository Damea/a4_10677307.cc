#include <iostream>
using namespace std;

int main()
{
        int a, b, x, y ,t, gcd ;

        cout<<"Please enter two integers :"<<endl;
        cin>>x>>y;

        a=x;
        b=y;

        while (b != 0)
        {
                 t = b;
                 b = a % b;
                 a = t;
        }

        gcd = a;


        cout<<"The greatest common factor of "<<x<<" and "<<y<<" is:"<<gcd<<endl;


        return 0;
}
