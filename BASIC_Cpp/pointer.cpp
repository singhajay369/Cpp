#include<iostream>
using namespace std;
int main(){
    int  a = 21;
    int *b = &a; //& --> this is called addressing operator
    //* --> this is called derefresing

    cout << "a =  "<<a   <<endl;
    cout << "&a = "<<&a  <<endl;
    
    cout << "b  = "<<b  <<endl;
    cout << "&b = "<<&b <<endl;//-->this points the address where the value is stored 
    cout << "*b = "<<*b <<endl;//--> this is showing the value that is stored in 'a' or that &b points

    /*
    21
    0x61ff0c
    0x61ff0c
    0x61ff08*/
    return 0;
}