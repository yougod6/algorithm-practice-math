    #include <iostream>
    using namespace std;

    void find_maximum_pledge(int a, int b){
        long long max=0;
        for (int i = 1; i <= a; i++){
            if(a%i==0 && b%i ==0)
                max=i;
        }
        cout<<max<<endl;
    }

    void find_minimun_multiple(int a, int b){
        long long min=0;
        int i=a;
        while(1){
            if(i%a==0 && i%b==0)
                break;
            i++;
        }
        min=i;
        cout<<min<<endl;
    }


    int main (int argc, char* argv[]){
        int a,b;
        cin>>a;
        cin>>b;
        find_maximum_pledge(a,b);
        find_minimun_multiple(a,b);
        return 0;
    }
