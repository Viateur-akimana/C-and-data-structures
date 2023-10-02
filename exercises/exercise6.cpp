#include <iostream>
using namespace std;

int main(){
    int sum =0;
   
    for(int a = 2; a < 100; a++ ){
        if( a % 2 == 0){
             sum += a;
        }
         cout <<"The sum of the even numbers less than 100 is :" << sum <<endl;
    }
    return 0;
}