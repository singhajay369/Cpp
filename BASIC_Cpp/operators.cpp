#include<iostream>
using namespace std;
int main (){
    // THERE ARE 9 TYPES OF OPERATORS IN C++
    // ARITHMATIC OPERATORS
    int a = 10;
    int b = 5;
    cout << "ARITHMATIC OPERATORS\n";
    cout << "The value of a+b is  " << a + b << endl;
    cout << "The value of a-b is  " << a - b << endl;
    cout << "The value of a*b is  " << a * b << endl;
    cout << "The value of a/b is  " << a / b << endl;
    cout << "The value of a%b is  " << a % b << endl;
    cout << "The value of a++ is  " << a++   << endl;
    cout << "The value of ++a is  " << ++a   << endl;
    cout << "The value of b++ is  " << b++   << endl;
    cout << "The value of ++b is  " << ++b   << endl;
    cout << endl;
    // ASSIGMENT OPERATORS
    cout << "ASSIGMENT OPERATORS\n";
    // ?int a = 20;
    // int b = 20;
    a = b;
    a += b;
    a -= b;
    a *= b;
    a /= b;
    cout << endl;

    // RELATION OPERATOR
    cout << "Relation  operator \n";
    cout << "The value of a==b is " << (a == b) << endl;
    cout << "The value of a!=b is " << (a != b) << endl;
    cout << "The value of a<=b is " << (a <= b) << endl;
    cout << "The value of a>=b is " << (a >= b) << endl;
    cout << "The value of a<b is  " << (a < b) << endl;
    cout << "The value of a>b is  " << (a > b) << endl;
    cout << endl;

    // SIZEOF FUNCTION
    cout <<"THE SIZE OF A IS " << sizeof(a)<<endl;
    cout << endl;

    // TYPEOF FUNCTION
    // cout << typeof(a) << endl;

    // LOGICAL OPERATOR
    cout << "Logical operators\n"<< endl;
    cout << "The value of ((a==b)&&(a!=b)) is  " << ((a == b)&&(a!=b)) << endl;
    cout << "The value of ((a==b)||(a!=b)) is  " << ((a == b)||(a!=b)) << endl;
    cout << "The value of (!(a==b)) is " << (!(a == b)) << endl;
    cout << endl;

    int x = 1010010, y = 11000110;
    // BITWISE OPERATOR
    cout << "BITWISE OPERATOR\n";
    cout << "The value of (x&y) is "<<(x&y)<<endl;
    cout << "The value of (x|y) is "<<(x|y)<<endl;
    cout << "The value of (x^y) is "<<(x^y)<<endl;
    cout << "The vslue of (~x) is " << (~x) << endl;
    cout << "The vslue of (~y) is " << (~y) << endl;
    cout << endl;
    
    //miscellaneous operator/ ternary operator

    cout << "MISCELLANEOUS OPERATOR / TERNARY OPERATOR  \n";
    cout << (x == true) ? "hello" : "bye";
    cout << endl;

    return 0;
}