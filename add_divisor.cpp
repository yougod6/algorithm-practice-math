    #include <iostream>
    using namespace std;

    void add_divisor(long long n){
        long long sum=0;
        for (int i = 1; i <= n; i++)
            sum += i*(n/i);
        cout<<sum<<endl;
    }

    int main (int argc, char* argv[]){
        long long n;
        while(cin>>n)
            add_divisor(n);
        return 0;
    }
