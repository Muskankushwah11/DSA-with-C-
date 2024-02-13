
// Nearly sorted array using binary search


// #include <iostream>
// #include <vector>
// using namespace std;

// int binary_search(vector<int>& arr, int target) {
//     int s = 0;
//     int e = arr.size() - 1;

//     while (s <= e) {
//         int mid = s + (e - s) / 2;

//         if (arr[mid] == target) {
//             return mid;
//         }

//         if (mid - 1 >= s && arr[mid - 1] == target) {
//             return mid - 1;
//         }

//         if (mid + 1 <= e && arr[mid + 1] == target) {
//             return mid + 1;
//         }

//         if (target > arr[mid]) {
//             s = mid + 2;
//         } else {
//             e = mid - 2;
//         }
//     }

//     return -1;
// }


// int main() {
//     vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
//     int target = 70;
//     int ans = binary_search(arr, target);

//     if (ans != -1) {
//         cout << "Index of " << target << " is " << ans << endl;
//     } else {
//         cout << target << " not found in the array." << endl;
//     }

//     return 0;
// }

                            //  **********************************

// Divide two numbers by using binary search

// #include <iostream>
// using namespace std;

// int solve(int dividend, int divisor) {
//     int s = 0;
//     int e = abs(dividend);
//     int ans = 0;
    
//     while (s <= e) {
//         int mid = s + (e - s) / 2;
        
//         if (abs(mid * divisor) == abs(dividend)) {
//             return mid;
//         }
        
//         if (abs(mid * divisor) > abs(dividend)) {
//             e = mid - 1;
//         } else {
//             // Answer stored inside the loop
//             ans = mid;
//             // Right search
//             s = mid + 1;
//         }
//     }
    
//     return ans;
// }

// int main() {
//     int dividend = 35;
//     int divisor = 5;
//     int ans = solve(dividend, divisor);
    
//     cout << "Ans is " << ans << endl;
    
//     return 0;
// }
                        //    *****************

                    //   odd occuring element in an array     
// #include <iostream>
// #include <vector>
// using namespace std;

// int solve(vector<int>& arr) {
//     int s = 0;
//     int e = arr.size() - 1;
    
//     while (s <= e) {
//         int mid = s + (e - s) / 2;

//         if (s == e) {
//             // single element
//             return s;
//         }

//         // 2nd case => mid is even or mid is odd
//         if (mid % 2 == 0) {
//             if (arr[mid] == arr[mid + 1]) {
//                 s = mid + 2;
//             } else {
//                 e = mid;
//             }
//         } else {
//             if (arr[mid] == arr[mid - 1]) {
//                 s = mid + 1;
//             } else {
//                 e = mid - 1;
//             }
//         }

//         mid = s + (e - s) / 2;
//     }

//     return -1;
// }

// int main() {
//     vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5, 5};
//     int ans = solve(arr);

//     if (ans != -1) {
//         cout << "Single occurrence at index " << ans << endl;
//     } else {
//         cout << "No single occurrence found." << endl;
//     }

//     return 0;
// }
