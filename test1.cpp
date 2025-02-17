#include <iostream>
#include <string>

using namespace std;

int main(){
    int num1, num2;
    int comp = 20;
    int sum;

    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;

    sum = num1 + num2;
    sum >= comp ? cout << "The sum is greater than " << comp << endl
                : cout << "The sum is less than " << comp << endl;
    
}