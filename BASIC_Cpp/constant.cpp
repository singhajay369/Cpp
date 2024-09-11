#include<iostream>
using namespace std;
float a = 22.21;
int b = 234;
const c=21;
int main (){
    const int a = 21;
    int b = 21;
    cout << a << endl;
    cout << ::a << endl;
    cout << b << endl;
    // float ::a = int ::a;
    cout << ::a << endl;
    cout<<::b<<endl;
    return 0;
}
