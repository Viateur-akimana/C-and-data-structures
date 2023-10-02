#include<iostream>
#include<cmath>
using namespace std;
int main(){
    const double pi = 3.14159;
    double volume, radius;
     cout << "Enter the radius of the sphere:" <<endl;
     cin >> radius;
      volume = ((4/3)*pi*pow(radius,3));
      cout << "The volume of the sphere is:" <<volume <<endl;

}