// structure is the collection of different type of data 
/*synatax :
declaired befor the main fuction 
struct _name_ {
    declaration
}*/
#include<iostream>
using namespace std;

typedef struct employee {
    int eId;
    float salary;
    char favchar;
    
}em;
int main (){
    struct employee harry;
    harry.salary = 120000000;
    harry.eId = 01;
    harry.favchar = 'a';


    em ajay;
    ajay.salary = 1300000000;
    ajay.eId = 1;
    ajay.favchar = 'A';

    cout << "The value of harry salary  is " << harry.salary  << endl;
    cout << "The value of harry eId     is " << harry.eId     << endl;
    cout << "The value of harry favchar is " << harry.favchar << endl;
    cout << "The value of ajay  salary  is " << ajay.salary   << endl;
    cout << "The value of ajay  eId     is " << ajay.eId      << endl;
    cout << "The value of ajay  favvhar is " << ajay.favchar  << endl;

    return 0;
}