#include <iostream>
using namespace std; 

// void printArray(int arr[], int size) {
//   for(int i = 0; i < size; i++) {
//     cout << arr[i] << " ";
//   }
// }

// bool linearSearch(int arr[], int size, int target) {
//   for(int i = 0; i < size; i++) {
//       if(arr[i] == target) {
//         return true;
//       }
//     }
//   return false;
// }

void countOnesAndZeros(int arr[], int size) {
  int one = 0;
  int zero = 0;
  for(int i = 0; i < size; i++) {
    if(arr[i] == 0) {
      zero++;
    } else {
      one++;
    }
  }
  cout << "The number of ones are: " << one << endl;
  cout << "The number of zeros are: " << zero << endl;
}



int main() {

  // ARRAYS & FUNCTIONS
  int arr[] = {1,0,1,0,1,0,1,0,1,0,1};
  int size = sizeof(arr) / sizeof(int);
  countOnesAndZeros(arr, size);
  



  
  // int target = 10;
  // int arr[] = {22, 23, 24, 25, 26, 27, 28, 29, 10, 23};
  // int size = sizeof(arr) / sizeof(int);
  // bool check = linearSearch(arr, size, target);
  // if(check) { 
  //   cout << "Target found" << endl;
  // } else {
  //   cout << "Target not found" << endl;
  // }
  
  
  // int arr[5] = {1, 2, 3, 4, 5};
  // int size = 5;
  // printArray(arr, size);



  

  // LINEAR SEARCH IN AN ARRAY
  // int target = 10;
  // int arr[] = {22, 23, 24, 25, 26, 27, 28, 29, 10, 23};
  // bool flag = false;
  // int position = 0;

  // for(int i = 0; i < 10; i++) {
  //   if(arr[i] == target) {
  //     flag = true;
  //     position = i;
  //     break;
  //   }
  // }

  // if(flag) {
  //   cout << "Target found at index " << position << endl;
  // } else {
  //   cout << "Target not found" << endl;
  // }

  

  // // Question 
  // int arr[10];
  // int n = 10;
  // // taking input
  // for(int i = 0; i<n; i++) {
  //   cin >> arr[i];
  // }
  // // double-up
  // for(int i = 0; i<n; i++) {
  //   arr[i] = 2 * arr[i];
  // }
  // // output
  // for(int i = 0; i<n; i++) {
  //   cout << arr[i] << " ";
  // }

    


  // INDEXING IN ARRAY : 0 to (N-1)
  
  // int a[] = {1,2,3,4,5};
  // cout << a[3] << endl;
  // for(int i=0;i<5;i++) {
  //   cout << a[i] << " ";
  // }

  // int arr[5];
  // int n = 5;
  // for(int i = 0; i<n; i++) {
  //   cin >> arr[i];
  // }

  // cout << arr[3];



  
  // int n;
  // cin >> n;
  // int arr[n]; // BAD PRACTICE
  // cout << sizeof(arr) << endl;

  
  // int a[] = {};
  // cout << sizeof(a) << endl;

  // int ab[2] = {2,3,4,5,6}; // excess element error
  // int a[] = {1,2,3,4,5};
  // int abc[5] = {1,2,3}; // rest of places will be filled with 0
  
  // int a[50];
  // cout << "Address of a : " << &a << endl;
  // int arr[0];
  // cout << "Address of a : " << arr << endl;
  // cout << sizeof(arr) << endl;
  

  // int num[10];
  // char ch[10];
  // bool b[10];
  // float f[10];
  // short s[10];
  // cout << sizeof(num) << endl;
  // cout << sizeof(ch) << endl;
  // cout << sizeof(b) << endl;
  // cout << sizeof(f) << endl;
  // cout << sizeof(s) << endl;

  return 0;
}