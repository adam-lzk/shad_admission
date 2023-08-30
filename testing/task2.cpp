#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(NULL));

    unsigned long long countA = 0, countB = 0, countC = 0;

    B:
    if (rand() % 2)
    {
        countA++;
        goto A;
    }
    else
    {
        countC++;

        if (countC >= 1000000000)
            goto exit;

        goto C;
    }

    A:
    if (rand() % 2)
    {
        countA++;
        goto A;
    }
    else
    {
        countB++;
        goto B;
    }

    C:
    if (rand() % 2)
    {
        countA++;
        goto A;
    }
    else
    {
        countB++;
        goto B;
    }

    exit:
    unsigned long long res = countA + countB + countC;

    cout << "A: " << fixed << setprecision(10) << (long double)countA/res << endl;
    cout << "B: " << fixed << setprecision(10) << (long double)countB/res << endl;
    cout << "C: " << fixed << setprecision(10) << (long double)countC/res << endl;

    return 0;
}
