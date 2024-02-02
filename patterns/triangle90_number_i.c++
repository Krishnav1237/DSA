#include <iostream>
using namespace std;

void pattern4(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 1; i <= N; i++)
    {
        // This is the inner loop which loops for the columns
        // no. of columns = row number for each line here.
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }

        // As soon as stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

int main()
{
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N;

    cin >> N;

    pattern4(N);

    return 0;
}