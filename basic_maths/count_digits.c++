#include <iostream>

using namespace std;

int count_digits(int n)
{
    int digits = floor(log10(n) + 1);
    return digits;
}

int main()
{
    int n = 12345;
    cout << "Number of digits in " << n << " is " << count_digits(n);
    return 0;
}

/*


#include<bits/stdc++.h>

using namespace std;

int count_digits( int n )
{
  string x = to_string(n);
  return x.length();
}

int main()
{
   int n = 12345;
   cout<< "Number of digits in "<<n<<" is "<<count_digits(n);
   return 0;
}

*/

/*

#include<bits/stdc++.h>

using namespace std;

int count_digits( int n )
{
   int x = n; int count =0;
   while( x !=0 )
   {
       x = x / 10;
       count++;
   }
   return count;
}


int main()
{
   int n = 12345;
   cout<< "Number of digits in "<<n<<" is "<<count_digits(n);
   return 0;
}

*/