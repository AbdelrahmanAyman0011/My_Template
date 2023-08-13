
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

void exec_time()
{

    using namespace std::chrono;
    // Get starting timepoint
    static auto start = high_resolution_clock::now();
    static bool end = false;
    // Get ending timepoint
    if (end)
    {
        auto stop = high_resolution_clock::now();

        // Get duration. Substart timepoints next
        // get durarion. To cast it next proper unit
        // use duration cast method
        auto duration = duration_cast<milliseconds>(stop - start);

        cout << "\nExec Time :"
             << duration.count() << " milliseconds\n";
    }
    else
        end = true;
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
    int c[3];
    int m[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> c[i] >> m[i];
    }

    for (int i = 0; i < 100; i++)
    {
        int start = i % 3;
        int next = (i + 1) % 3;
        int pour = min(m[start], c[next] - m[next]);

        m[start] -= pour;
        m[next] += pour;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << m[i] << endl;
    }

    //-----------------------------------------------------------------------
    // if (testing)
    //   exec_time();

    return 0;
}