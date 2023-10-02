#include<iostream>
using namespace std;
int fib(int a){
    if(a == 0){
        return 0;
    };
    if(a == 1){
        return  1;
    }
    int smallOutputNumber1 = fib(a-1);
    int smallOutputNumber2 = fib(a-2);
  return  smallOutputNumber1 + smallOutputNumber2;
}
int main(){
    cout << fib(20);
}