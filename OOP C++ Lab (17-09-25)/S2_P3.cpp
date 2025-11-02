//Wap  to find the sum of even elements and odd elements separately using pointer arithmetic.
#include <iostream>
using namespace std;

int EvenSum(int arr[], int n){
    int esum= 0;
    for(int i=0; i< n; i++){
        if ((*(arr + i)) % 2 == 0){
            esum += *(arr + i);
        }
    }
    return esum;
}

int OddSum(int arr[], int n){
    int osum= 0;
    for(int i=0; i< n; i++){
        if (*(arr + i) % 2 != 0){
            osum += *(arr + i);
        }
    }
    return osum;
}

int main(){
int n, e, o;
cout << "Enter number of elements: ";
cin >> n;
int* arr = new int[n]; //declaration using pointer arithematic
cout << "Enter " << n << " elements: ";
for (int i=0; i<n; i++)
{
    cin >> arr[i];
}

e = EvenSum(arr, n);
cout<<"Sum of Even Numbers is: "<<e<<endl;
o = OddSum(arr, n);
cout<<"Sum of Odd Numbers is: "<<o;
return 0;
}