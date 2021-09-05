#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    cout << decimalNumber;
}


void twocomplement(int binary[])
{
    // finding two complement of a number
    /*
        It is usually found by adding 1 to one's complement.
    */
    string s;
    int carry = 1;
    for (int k = 0; k <= 15; k++)
    {
        if (binary[k] == 1 and carry == 1)
            binary[k] = 0;
        else if (binary[k] == 0 and carry == 1) {
            binary[k] = 1;
            carry = 0;
        }
    }
    for (int j = 15; j >= 0; j--) {
        s += binary[j];
        cout << binary[j];
    }
    // int number = stoi(s);
    convertBinaryToDecimal( 1111111111100100);

}


void onecomplement(int binary[])
{
    // Finding one's complement of the number
    for (int k = 15; k >= 0; k--)
    {
        binary[k] = !binary[k];
    }
    //Binary representation of 1's complement of number
    for (int j = 15; j >= 0; j--)
        cout << binary[j];
    twocomplement(binary);
}


void decToBinary(int n)
{
    int binary[16] = {0}, i = 0;
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }

    //Binary Representation of Number
    for (int j = 15; j >= 0; j--)
        cout << binary[j];

    //onecomplement(binary);
}

int32_t main()
{
    int n;
    cin >> n;
    decToBinary(n);
}

