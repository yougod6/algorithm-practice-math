#include <iostream>
using namespace std;

void find_prime_numbers(int start, int end)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n = (end - start) + 1;  
    bool is_prime = true;

    for (int i = 0; i < n; i++)
    {
        is_prime = true;
        for (int j = 2; j*j <= start + i; j++)
        {
            if ((start + i) % j == 0)
            {
                is_prime = false;
                break;
            }
        }

        if ((start + i) != 1 && is_prime)
            cout << (start + i) <<"\n";
    }
}

int main(int argc, char *argv[])
{
    int start;
    int end;
    cin >> start >> end;
    find_prime_numbers(start, end);

    return 0;
}