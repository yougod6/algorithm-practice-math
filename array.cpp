#include <iostream>

int main (int argc, char* argv[]){
    //연습 1 : 2차원 배열에서 9,8,7 순서로 출력
   int arr[3][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}
                    };

    for(int i=2; i>=0; i--){
        std::cout<<arr[2][i]<<std::endl;
    }
    
    return 0;
}
