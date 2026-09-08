/*
191. Number of 1 Bits

Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

Example 1:

Input: n = 11

Output: 3

Explanation:

The input binary string 1011 has a total of three set bits.

Example 2:

Input: n = 128

Output: 1

Explanation:

The input binary string 10000000 has a total of one set bit.

Example 3:

Input: n = 2147483645

Output: 30

Explanation:

The input binary string 1111111111111111111111111111101 has a total of thirty set bits.

Constraints:

1 <= n <= 2^31 - 1

Follow up: If this function is called many times, how would you optimize it?

*/

#include<iostream>

using namespace std;

int hammingWeight(int num)
{
    string binary;

    if ( num == 0 )
    {
        binary = "0";
    }

    while ( num > 0 )
    {
        binary = to_string( num % 2 ) + binary;
        num = num / 2;
    }

    int count = 0;
    int i = 0;
    while ( binary[i] != '\0' )
    {
        if ( binary[i] == '1' )
        {
            count++;
        }
        i++;
    }

    return count;
}

int main ()
{
    int num = 11;
    cout << hammingWeight(num);

    return 0;
}
