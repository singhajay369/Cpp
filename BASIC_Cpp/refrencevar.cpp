#include<iostream>
using namespace std;
int main (){
    int x = 21;
    int &y = x;
    int z = x;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    return 0;
}