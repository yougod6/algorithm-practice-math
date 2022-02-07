#include <iostream>
using namespace std;

void find_place_value(int n){
  int k=0;
  long long int result =1;
    while(1){
      k++;
      if(result%n==0){
        cout<<k<<endl;
        break;
      }
      result=result*10 + 1;
      result%=n;
    }
  }

int main (int argc, char* argv[]){
    int n;
    while(cin>>n)
      find_place_value(n);

    return 0;
}
