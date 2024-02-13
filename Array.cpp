                                              // Array

                               //declare array               
// #include <iostream>
// using namespace std;
// int main(){
//      int arr [6];
//      cout<< "Array  declare successfully" <<endl;
//      return 0;
// }

                            // ways to initailize the array

// #include <iostream>
// using namespace std;
// int main(){
     //int arr [] = {4,5,2,8};
     // int arr [5]= {2,4,5,7};
    // this is wrong creates an error   int  arr [1] = {2,4,5,7};
      // int  arr [10] = {2,4,5,7};
//       char arr [10] = {'a','b' ,'c'};
//      cout<< "Array  declare successfully" <<endl;
//      return 0;
// }

                        // Printing the values of an array


// #include <iostream>
// using namespace std;
// int main(){
//     int arr [] = {1,3,5,6 ,8};
//     // Printing all the values in an array
//     for(int index =0; index<5 ; index++){
//         cout <<  arr[index] << " ";
//     }
//     return 0;
// }

// Take 5 element as an input and print their doubles :-


// #include <iostream>
// using namespace std;
// int main(){
//     int arr [500] ;
//     int n;
//     cout << "How many numbers do you want to add in array"<< endl;
//     cin >> n;
//     cout << " Enter the numbers" << endl;
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     // print doubles
//     cout << "doubles";
//      for(int i=0;i<n;i++){
//         cout << 2* arr[i] << " ";
//     }
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]={3,5,6,8,4};
//     for(int i=0; i<5; i++){
//         arr[i] = 1;
//     }
//     for(int i =0;  i<5; i++){
//         cout << arr[i] << " ";
//     }
// } 
    // Linear search in array
    // Code for see the value present in array or not ?
//  #include <iostream>
// using namespace std;
// int main(){
//             int arr[] = {1,2,3,4,5,6,7,8};
//             int size = 8;
//             int key = 7;5

//             bool flag = 0;
//             for(int i=0; i<size; i++){
//                 if(arr[i]==key){
//                     flag=1;
//                 }
//             }
//             if (flag){
//             cout <<" Present" << endl;
//             }
//             else{
//                   cout <<" absent" << endl;
//             }
//             return 0;
// }
                                // Write a code for count 0 and 1 in an array

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {0, 1, 0, 1, 0, 1, 0, 1};
//     int size = 8;
//     int numZero = 0;
//     int numOne = 0;

//     for (int i = 0; i < size; i++) {
//         if (arr[i] == 0) {
//             numZero++;
//         }
//         if (arr[i] == 1) {
//             numOne++;
//         }
//     }

//     cout << "Number of zeros: " << numZero << endl;
//     cout << "Number of ones: " << numOne << endl;

//     return 0;
// }
                                          
                                          // Maximum number in array

// #include <iostream>
// #include <climits> // Include this header for INT_MIN
// using namespace std;

// int main() {
//     int arr[] = {2, 4, 5, 4, 8, 4, 6, 7, 9, 56};
//     int size = 10;
//     int maxVal = INT_MIN; // Initialize maxVal to the minimum integer value

//     for (int i = 0; i < size; i++) {
//         if (arr[i] > maxVal) {
//             maxVal = arr[i];
//         }
//     }

//     cout << "Maximum number is: " << maxVal << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,7,5,6,};
//     int size = 7;
//     int key = 7;
//     bool flag = 0;
//     for (int i=0; i <size; i++){
//         if (arr[i] == key){
//             flag =1;
//         }
// }
//   if(flag) {
//   cout << "present "<< endl;
//   }
//   else {
//   cout << "absent" <<  endl;
//   }
//   return 0;
// }

                        // VECTOR

// #include <iostream>
// #include <vector>
// using namespace std;

// int findUnique(vector<int> arr) {
//   int ans = 0;
//   for (int i = 0; i < arr.size(); i++) {
//     ans = ans ^ arr[i];
//   }
//   return ans;
// }

// int main() {
//   int n;
//   cout << "Enter the size of the array" << endl;
//   cin >> n;
//   vector<int> arr(n);
//   cout << "Enter the elements " << endl;
//   for (int i = 0; i < arr.size(); i++) {
//     cin >> arr[i];
//   }
//   int uniqueElement = findUnique(arr);
//   cout << "Unique Element is " << uniqueElement << endl;  // Corrected variable name
//   return 0;
// }
                                      // *************
                                      //Intersection

// #include <iostream>
// #include <vector>
// #include <algorithm> // Required for std::sort
// using namespace std;

// int main() {
//   vector<int> arr {1, 2, 3, 4, 5};
//   vector<int> brr {3, 4, 10};

//   // Sort the vectors for efficient comparison
//   sort(arr.begin(), arr.end());
//   sort(brr.begin(), brr.end());

//   vector<int> commonElements;

//   // Finding common elements
//   for (int i = 0; i < arr.size(); i++) {
//     if (binary_search(brr.begin(), brr.end(), arr[i])) {
//       commonElements.push_back(arr[i]);
//     }
//   }

//   cout << "Printing common elements: ";
//   for (int i = 0; i < commonElements.size(); i++) {
//     cout << commonElements[i] << " ";
//   }

//   return 0;
// }
                                  //   **************UNION**************//
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//   int arr[] = {1, 3, 5, 7, 9};
//   int sizea = 5;
//   int brr[] = {2, 4, 6, 8};
//   int sizeb = 4;
//   vector<int> ans;

//   // PUSH ALL THE ELEMENTS OF ARRAY arr
//   for (int i = 0; i < sizea; i++) {
//     ans.push_back(arr[i]);
//   }

//   // PUSH ALL THE ELEMENTS OF ARRAY brr
//   for (int i = 0; i < sizeb; i++) {
//     ans.push_back(brr[i]);
//   }

//   cout << "Printing an array" << endl;
//   for (int i = 0; i < ans.size(); i++) {
//     cout << ans[i] << " ";
//   }

//   return 0;
// }
                                //**********PAIR SUM************
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//   vector<int> arr{10, 20, 30, 40, 50, 60};

//   // Print all the pairs
//   // Outer loop will traverse for each element
//   for (int i = 0; i < arr.size(); i++) {
//     cout << "We are at element " << arr[i] << endl;
//     int element = arr[i];

//     // Inner loop will traverse for each element after the current one
//     for (int j = i + 1; j < arr.size(); j++) {
//       cout << "Pair " << element << " with " << arr[j] << endl;
//     }
//   }

//   return 0;
// }

                    // 4 Pairs
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//   vector<int> arr{10, 20, 30, 40, 50, 60};
//   int sum = 100; // Assuming sum is given

//   // Print all triplets with the given sum
//   for (int i = 0; i < arr.size() - 2; i++) {
//     int element1 = arr[i];

//     for (int j = i + 1; j < arr.size() - 1; j++) {
//       int element2 = arr[j];

//       for (int k = j + 1; k < arr.size(); k++) {
//         int element3 = arr[k];
        
//       for (int l = k + 1; l < arr.size(); l++) {
//         int element4 = arr[l];
        
//         if (element1 + element2 + element3 + element4== sum) {
//           cout << element1 << ", " << element2 << ", " << element3 << " , " << element4 << endl;
//         }
//       }
//     }
//   }

//   return 0;
// }
// }  
                                   //sort 0's and 1's
// #include <iostream>
// #include <vector>
// using namespace std;

// void sortZerosAndOnes(vector<int>& arr) {
//     int low = 0;
//     int high = arr.size() - 1;
//     int i = 0;

//     while (i <= high) {
//         if (arr[i] == 0) {
//             swap(arr[i], arr[low]);
//             low++;
//             i++;
//         } else if (arr[i] == 1) {
//             i++;
//         } else {
//             swap(arr[i], arr[high]);
//             high--;
//         }
//     }
// }

// int main() {
//     vector<int> arr = {1, 0, 1, 0, 1, 0, 1, 0};
    
//     cout << "Original array: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
    
//     sortZerosAndOnes(arr);
    
//     cout << "\nSorted array: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }

//     return 0;
// }
              // 2D ARRAY 

// #include <iostream>
// using namespace std;

// int main() {
//     // Declare 2D Array
//     int arr[3][3];
    
//     // Initialization
//     int brr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {2, 4, 8}
//     };

//     // Print an element of brr
//     cout << brr[1][2] << endl;

//     return 0;
// }
                      // IF YOU WANT TO PRINT ROW WISE MATRIX
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[3][3];
//     int brr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << brr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
                        // IF YOU WANT TO PRINT COLOUMN WISE MATRIX


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[3][3];
//     int brr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << brr[j][i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

                     // Print the sum of row
 
// #include <iostream>
// using namespace std;

// void printRowWiseSum(int arr[][3], int rows, int cols) {
//     cout << "Print in row-wise sum" << endl;
//     for (int i = 0; i < rows; i++) {
//         int sum = 0;
//         for (int j = 0; j < cols; j++) {
//             sum = sum + arr[i][j];
//         }
//         cout << sum << endl;
//     }
// }

// int main() {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     printRowWiseSum(arr, 3, 3);

//     return 0;
// }
                             // Print the sum of coloumn
// #include <iostream>
// using namespace std;

// void printColumnWiseSum(int arr[][3], int rows, int cols) {
//     cout << "Print in Column-wise sum" << endl;
//     for (int j = 0; j < cols; j++) {
//         int sum = 0;
//         for (int i = 0; i < rows; i++) {
//             sum = sum + arr[i][j];
//         }
//         cout << sum << endl;
//     }
// }

// int main() {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     printColumnWiseSum(arr, 3, 3);

//     return 0;
// }
                   // LINEAR SEARCH IN ARRAY FINDING KEY ELEMENT
// #include <iostream>
// using namespace std;

// bool findKey(int arr[][3], int rows, int cols, int key) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             if (arr[i][j] == key)
//                 return true;
//         }
//     }
//     return false;
// }

// int main() {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };


//     int key;
//     cout << "Enter the key to search: ";
//     cin >> key;

//     if (findKey(arr, 3, 3, key)) {
//         cout << "Key found in the array." << endl;
//     } else {
//         cout << "Key not found in the array." << endl;
//     }

//     return 0;
// }
                                   // Minimum and maximum of 2D array
//  #include <iostream>
// #include <climits> // For using INT_MAX and INT_MIN
// using namespace std;

// void findMaxMin(int arr[][3], int rows, int cols) {
//     int maxVal = INT_MIN; // Initialize maxVal to the smallest possible integer
//     int minVal = INT_MAX; // Initialize minVal to the largest possible integer

//     // Iterate through the array
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             // Update maxVal if current element is greater
//             if (arr[i][j] > maxVal) {
//                 maxVal = arr[i][j];
//             }
//             // Update minVal if current element is smaller
//             if (arr[i][j] < minVal) {
//                 minVal = arr[i][j];
//             }
//         }
//     }

//     // Print the results
//     cout << "Maximum value: " << maxVal << endl;
//     cout << "Minimum value: " << minVal << endl;
// }

// int main() {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     findMaxMin(arr, 3, 3);

//     return 0;
// }
                              // TRANPOSE OF THE MATRIX

 #include <iostream>
using namespace std;

void transposeMatrix(int arr[][3], int rows, int cols) {
    int transposed[3][3];

    // Finding the transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = arr[i][j];
        }
    }

    // Printing the transposed matrix
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nTransposed Matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    transposeMatrix(arr, 3, 3);

    return 0;
}
                                 