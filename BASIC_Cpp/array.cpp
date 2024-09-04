#include<iostream>
using namespace std;
int main (){
    int  i = 0;
    // syntax : data_type var_name [size] = { decleration };
    int a[5] = {21, 22, 23, 24, 25};
    cout << "by for loop\n";
    for (int i = 0; i < 5;i++)
    {
        cout << "The marks you entered at index " << i << " are " << a[i] << endl;
    }
    
    cout << "by while loop\n";
    int j = 0;
    while (j < 5){
        cout << "The marks you entered at index " << j << " are " << a[j] << endl;
        j++;
    }
    
    cout << "This is by do while loop\n";
    int e = 0;
    do {
        cout << "The marks you entered at index " << e << " are " << a[e] << endl;
        e++;
    } while (e < 5);

    // POINTER AND ARRAY
    cout << endl;
    int *p = a;
    cout << "The value of marks[0] is " << *(p)   << endl;
    cout << "The value of marks[1] is " << *(p + 1) << endl;
    cout << "The value of marks[2] is " << *(p + 2) << endl;
    cout << "The value of marks[3] is " << *(p + 3) << endl;
    cout << "The value of marks[4] is " << *(p + 4) << endl;

    // Summing two arrays element-wise
    int array[5] = {1, 2, 3, 4, 5};
    int sum[5];

    for (int i = 0; i < 5; i++) {
        sum[i] = array[i] + a[i];
        cout << "The sum at index " << i << " is " << sum[i] << endl;
    }

    return 0;
}
