// Chapter 5, Programming Challenge 17: Sales Bar Chart
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int num1;
int num2;
cout<< "Input any integer: " << endl;
cin >> num1;
cout << "Input a second integer (larger than the last): "<< endl;
cin >> num2;
if(num2 > num1){
while( num1 < num2){
    cout<<num1<<" ";
    num1+=5;
}

}else{
    cout<< "Second Integer can't be less than the first. Try Again.";
}
cout<<endl;
return 0;
}
