#include<iostream>
using namespace std;

int sum(int a , int b){
    int c = a + b;
    return c;
}
// This will not swap a and b
void swap (int a ,int b ){   // temp  a  b
    int temp =a;             // 4    4  5
    a = b;                   // 4    5  5
    b = temp;                // 4   5  4

}

// Call by reference using pointers
void swapPointer (int* a ,int* b ){   // temp  a  b
    int temp = *a;                    // 4    4  5
    *a = *b;                           // 4    5  5
    *b = temp;                         // 4   5  4

}

// Call by reference using  C++ reference variables
void swapReferenceVar (int &a ,int  &b ){    // temp  a  b
    int temp = a;                            // 4    4  5
    a = b;                                   // 4    5  5
    b = temp;                                // 4   5  4

}

int main(){
    int x = 4 , y= 5;
    // cout<<"the sum of 4 and 5 is "<<sum(x,y);
    cout<<"The value of x is "<<x<<"and the value of y is "<<y<<endl;
    // swap(x,y);  // This will NOT swap a and b
   // swapPointer(&x , &y); // This will swap a and b using pointer reference
    swapReferenceVar(x , y); // This will swap a and b using reference variables


    cout<<"The value of x is "<<x<<"and the value of y is "<<y<<endl;
    
}
