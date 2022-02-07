#include<iostream>
#include<vector>
using namespace std;
vector<bool> eratosthenes(const int num_max){
    vector<bool> eratosthenes(num_max+1,true);
    eratosthenes[0],eratosthenes[1]=false;
    for (int i = 2; i <=num_max; i++){
        if(eratosthenes[i]==true){
            for(int j = 2*i; j<=num_max; j+=i)
                eratosthenes[j]=false;  
        }
    }
    return eratosthenes;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    const int num_max = 1000000;
    int input=1;
    int n=1;
    int a=0;
    vector<bool> prime;
    prime = eratosthenes(num_max);

    while(cin>>input){
        if(input==0)
            break;
        n=input;
        for(n; n>=2;n--){
            if(prime[n]==true){
                a = input-n;
                if(prime[a])
                    break;
            }
        }
       cout<<input<<" = "<<a<<" + "<<n<<'\n'; 
    }
}
