#include <iostream>
using namespace std;

void find_number(int n){
    int arr[n];
    for (int i = 0; i < n; i++)
    {
                cin>> arr[i];
    }
    
    int min=arr[0];
    int max=arr[0];

    for (int j = 0; j < n; j++){
        if(arr[j]<min)
            min=arr[j];
        if(arr[j]>max)
            max=arr[j];
    }
    cout<<min*max<<endl;
  }

int main (int argc, char* argv[]){
    int n;
    while(cin>>n)
        find_number(n);
    return 0;
}
