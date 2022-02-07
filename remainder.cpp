#include <iostream>
using namespace std;

void remainder(int A, int B, int C)

{
    //첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.

    cout<<(A+B)%C<<endl;
    cout<<  ((A%C) + (B%C))%C<<endl;
    cout<< (A*B)%C <<endl;
    cout<< ((A%C) * (B%C))%C<<endl;

}

int main (int argc, char* argv[]){
    int A,B,C;
    cin >> A;
    cin >> B ;
    cin >> C ;
    remainder(A,B,C);
}


