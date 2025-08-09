# Factorial
Factorial of any number
#include <iostream>
using namespace std;

int main() {
int n,i;
double fact=1;
cout<<"Factorial of what? =";
cin>>n;
for(i=n;i>1;i--){
    cout<<i<<"×";
    fact *= i;
}
cout<<1<<"="<<n<<"!"<<"="<<fact;


    return 0;
}
