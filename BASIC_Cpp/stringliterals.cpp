#include<iostream>
using namespace std;
int main (){
    float a = 2.312;
    int b = 2321;
    cout << "the size of a is " << sizeof(a) << endl;
    cout << "the size of b is " << sizeof(b) << endl;
    cout << "the size of 2.312l is " << sizeof(2.312l) << endl;
    cout << "the size of 2321 is " << sizeof(2321) << endl;
    cout << "the size of 2321 is " << sizeof(2321) << endl;
    cout << "the size of 2321l is " << sizeof(2321l) << endl;
    cout << "the size of 2321L is " << sizeof(2321L) << endl;
}