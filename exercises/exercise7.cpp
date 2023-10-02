#include<iostream>
using namespace std;
int main(){
    int product = 1;
    for(int a = 1; a < 20; a++){
        if(a % 2 == 1){
            product *= a;
        }
        cout <<"The product of the odd numbers btn 1 and 20 is: " <<product <<endl;
    }
    return 0;
}