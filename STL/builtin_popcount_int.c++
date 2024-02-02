#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n = 7;

    cout << __builtin_popcount(n);

    return 0;
}

/* Here is a solution

int count_setbits(int N)
{
    int cnt = 0;

    while (N > 0)
    {
        cnt += (N & 1);
        N = N >> 1;
    }

    return cnt;
}
*/