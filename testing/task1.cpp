#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int k;
    cin >> k;

    long n;
    cin >> n;

    vector<long> beauty;

    for (int i = 0; i < k; i++)
    {
        long c;
        cin >> c;
        beauty.push_back(c);
    }

    sort(beauty.rbegin(), beauty.rend());

    unsigned long long resultSum = 0;

    for (int i = 0; i < beauty.size(); i++)
    {
        long currentBeauty = beauty[i];

        for (int j = i; j < n; j += k)
        {
            resultSum += currentBeauty;
        }
    }

    cout << resultSum << endl;

    return 0;
}
