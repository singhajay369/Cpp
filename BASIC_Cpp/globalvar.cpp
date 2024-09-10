#include<iostream>
using namespace std;

// GLOBAL VAR
int x=22;
void myfunction (){

int x = 21; 
cout <<"This is local  variable:"<<x<<endl;
cout <<"This is global variable:"<<::x<<endl;
                    }
int main (){

    myfunction();
    
    return 0;
}