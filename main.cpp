
#include <bits/stdc++.h>

using namespace std;
bool testing = false;
#define F first
#define S second
#define ll long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define all(A) A.begin(), A.end()
//===============================================
//                                              //
//          BBBB.                               //
//          B...B                               //
//          BBBB.                               //
//          B...B                               //
//          BBBB.     EEEE                      //
//                    E...                      //
//                    EEEE                      //
//                    E...                      //
//                    EEEE   DDD.               //
//                           D..D               //
//                           D..D               //
//                           D..D               //
//                           DDD.   .OOO.       //
//                                  O...O       //
//                                  O...O       //
//                                  O...O       //
//                                  .OOO.       //
//===============================================
void fio()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
}

void file_io(string fname)
{

    freopen((fname + ".in").c_str(), "r", stdin);
    freopen((fname + ".out").c_str(), "w", stdout);
}
void file_i(string fname)
{

    freopen((fname + ".in").c_str(), "r", stdin);
}

void cv(vector<int> &arr, int n)
{
    arr.resize(n);
    for (int se = 0; se < n; se++)
    {
        cin >> arr[se];
    }
}
bool isPalindrome(int number)
{
    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0)
    {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

void rv(const vector<int> &arr, int n)
{
    for (int se = 0; se < n; se++)
    {
        cout << arr[se] << " ";
    }
    cout << endl;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
// ------------------ Global variables declaration --------------------- //

// -------------------------------------------------------------------- //

//---------------------------------methods-------------------------------------

//---------------------------------methods-------------------------------------

int main()
{
    testing = true;
    fio();
    if (testing)
    {
        file_io("test");
        //    exec_time();
    }
    //-------------------------------solution--------------------------------
    int x;
    cin >> x;
    cout << x;

    //-----------------------------------------------------------------------

    return 0;
}