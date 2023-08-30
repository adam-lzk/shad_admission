#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;

    int vertex_power[size], v[size];

    for (int k = 0; k < size; k++)
    {
        cin >> v[k];
        vertex_power[k] = 0;
    }

    for (int k = size - 1; k >= 0; k--)
    {
        vertex_power[k] += v[k];
        for (int i = 1; i <= v[k]; i++)
        {
            vertex_power[k-i]++;
        }
    }


    for (int k = 0; k < size; k++)
    {
        cout << vertex_power[k] << " ";
    }
    cout << endl;

    return 0;
}
