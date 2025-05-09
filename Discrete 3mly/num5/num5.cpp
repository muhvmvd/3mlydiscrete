#include <iostream>
using namespace std;

int main() {
    int Size_A , Size_B ;
cout << "Enter number of Elements of Set A: ";
cin >> Size_A;
int A[Size_A];
for (int i=0 ; i < Size_A ; i++){
    cout << "Element No " << i+1 << ": ";
    cin >> A[i];
}

cout << "Enter number of Elements of Set B: ";
cin >> Size_B;
int B[Size_B];
for (int j=0 ; j < Size_B ; j++){
    cout << "Element No " << j+1 << ": ";
    cin >> B[j];
}

cout << "A x B = { ";
for (int i=0 ; i<Size_A ; i++){
    for (int j=0 ; j<Size_B ; j++){
        cout << "(" << A[i] << ", " << B[j] << ") ";
    }
}
cout << "}";
    return 0;
}