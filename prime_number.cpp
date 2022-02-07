    #include <iostream>
    using namespace std;

    void find_prime_number(int n){
        int arr[n];
        int num=0;
        bool is_prime = true;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++){
            is_prime = true;
            for (int j = 2; j < arr[i]; j++)
            {
            if(arr[i]%j==0)
                is_prime=false;
            }
            if(arr[i]!= 1 && is_prime)
                num++;
        }

        cout<<num<<endl;
        
        
    }


    int main (int argc, char* argv[]){
        int n;
        while(cin >> n)
            find_prime_number(n);
        return 0;
    }
