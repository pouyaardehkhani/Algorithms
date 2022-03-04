#include <vector>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;
class Karatsuba {
public:
    static long long Multiply(long long U, long long V, int n){
        if (U==0 || V==0)
            return 0;
        else if (n<=5)
            return U*V;
        if (n%2!=0)
            n=n+1;

        long long x=(long long)(U/pow(10,n/2));
        long long y=(U%(long long)(pow(10,n/2)));
        long long w=(long long)(V/pow(10,n/2));
        long long z=(V%(long long)(pow(10,n/2)));

        long long xw=Multiply(x,w,n/2);
        long long yz=Multiply(y,z,n/2);
        long long xywz = Multiply((x+y),(w+z),n/2)-xw-yz;

        return (long long)(xw*pow(10,n)+xywz*pow(10,n/2)+yz);
    }
};

