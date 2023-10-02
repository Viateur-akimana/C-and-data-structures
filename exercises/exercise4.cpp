#include<iostream>
using namespace std;
void swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a,b;
cout << "Enter the first number:" <<endl;
cin >> a ;
cout << "Enter the second number:" <<endl;
cin >> b;
swap(b,a);
cout << "After swapping the 1st number is:" << a <<endl;
cout << "After swapping the second number is:" << b <<endl;

}