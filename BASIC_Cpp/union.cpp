//Union
/* 
--> union is used when we have to optimise memory
--> union is collectioin of different data type but we can access only a single data at a time
--> if we use two different data at single time then data will over write  
*/

#include<iostream>
using namespace std;

union money {
    int rice;
    char notes;
    float passy;
};

int main(){
    union money a;
    a.rice = 1;
    a.notes = 'h';
    a.passy = 21.0;
    cout << a.notes;
}