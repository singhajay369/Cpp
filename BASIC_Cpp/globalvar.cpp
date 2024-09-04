#include<iostream>
using namespace std;
// GLOBAL VAR
int x = 21;
int main (){

    int x = 22;
    cout <<"THIS IS LOCAL VAR"   <<x << endl;
    cout <<"THIS IS gloabal VAR" <<::x << endl;
    
    return 0;
}