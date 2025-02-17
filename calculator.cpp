#include <iostream>
using namespace std;
int main () {

    double num1, num2, result;
    char op;

    for (int r=1; r<=21; r++){
        if(r==(21+1)/2) cout << " CALCULATORl ";
        else cout <<"*";
    }

    cout << endl;
    
    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    cout <<"Enter an oporator (+,-,*,/): ";
    cin >> op;
    
    switch(op){
        case '+':
        result = num1+num2;
        cout << "Result: " << result << endl;
        break;
        case '-':
        result = num1-num2;
        cout << "Result: " << result << endl;
        break;
        case '*':
        result = num1*num2;
        cout << "Result: " << result << endl;
        break;
        case '/':
        result = num1/num2;
        cout << "Result: " << result << endl;
        break;
        default:
        cout << "Error! Invalid oporator!" << endl;
        break;
    }

    for (int r=1; r<=33; r++){
        cout << "*";
    }

    return 0;
}