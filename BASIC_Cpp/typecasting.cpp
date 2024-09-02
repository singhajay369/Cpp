#include<iostream>
using namespace std;
int main (){
    // TYPECASTING MEANS CHANGING THE DATA TYPE OF A VARIABLE
    int x = 21;
    float y = 354.34;
    cout << "the typecasting of int into float is " << (float)x<<endl;
    cout << "the typecasting of int into float is " << (float)(x)<<endl;
    cout << "the typecasting of int into float is " << (int)y<<endl;
    cout << "The typecasting of flaot into int is " << (int)(y) << endl;
    cout << x + y << endl;
    cout << x + int(y) << endl;
    cout << x + (int)y << endl;
    cout << x + (int)(y) << endl;
    cout << float(x) + int(y) << endl;
    cout << (float)(x) + (int)(y) << endl;
    return 0;
}