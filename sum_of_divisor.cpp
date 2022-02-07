#include <iostream>
#include <vector>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num_test = 0;
    const int num_max = 1000000;
    cin >> num_test;
    vector<int> test_set(num_test, 0);
    vector<int>::iterator test_iter;
    vector<long long> sum_divisors(num_max+1, 1);
    vector<long long>::iterator iter;
    for(int i =2; i<=num_max;i++){
        for(int j=1; i*j<=num_max;j++)
            sum_divisors[i*j-1] += i;
    }
    for(int i=0; i<num_max; i++)
        sum_divisors[i+1] += sum_divisors[i];

    for (int test = 0; test < num_test; test++)
        cin >> test_set[test];

    for (test_iter = test_set.begin(); test_iter != test_set.end(); ++test_iter)
        cout << sum_divisors[*test_iter-1] << '\n';
  
}