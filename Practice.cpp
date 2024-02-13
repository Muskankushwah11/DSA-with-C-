// Q.1]Write a program to check whether a number is divisible by 5 and 11 or not  ?

// #include <iostream>
// using namespace std;
// int main (){
//     int number;

//     cout<<"Enter a Number:";
//     cin  >> number;

//     if(number % 5 == 0 && number % 11==0){
//         cout<< number<<" is divisible by 5 and 11 both " << endl;
//     }
//     else{
//         cout<< number<<" is not divisible by 5 and 11 both " << endl;
//     }
//     return 0;

// }

//Q.2]Write a program to check whether a given input is character , special digit or character ?

// #include <iostream>
//  using namespace std;
//  int main (){
//      char ch;
//       cout<<"Enter a Character:";
//      cin  >>ch ;

//      if(isdigit(ch)){
//         cout<<ch<<"is a digit"<<endl;
//      }
//      else if(isalpha(ch)){
//         cout<<ch<<"is a alphabet"<<endl;
//      }
//      else {
//         cout<<ch<<"is a special character"<<endl;
//      }
//  }


//Q.3]  Write a program to input marks of five subjects Physics,Chemistry,Biology,Maths,Computer and calculate  its grade ?
//  #include <iostream>
//  using namespace std;
//   int main (){
//     float Physics,Maths,Computer,Biology,Chemistry;
//     float totalmarks,Percentage;
//     char grade;
//         cout <<"Enter a number of Physics"<<endl;
//         cin>>Physics;
//         cout <<"Enter a number of Maths"<<endl;
//         cin>>Maths;
//         cout <<"Enter a number of Computer"<<endl;
//         cin>>Computer;
//         cout <<"Enter a number of Biology"<<endl;
//         cin>> Biology;
//         cout <<"Enter a number of Chemistry"<<endl;
//         cin>>Chemistry;

//       totalmarks = Physics+ Maths +Computer+Biology+ Chemistry;
//      Percentage=  ( totalmarks/500)*100;
//       cout << "Total Marks: " << totalmarks << endl;
//     cout << "Percentage: " << Percentage << "%" << endl;
//       if (Percentage >= 90) {
//         grade = 'A';
//     } else if (Percentage >= 80) {
//         grade = 'B';
//     } else if (Percentage >= 70) {
//         grade = 'C';
//     } else if (Percentage >= 60) {
//         grade = 'D';
//     } else if (Percentage >= 50) {
//         grade = 'E';
//     } else {
//         grade = 'F';

//     }

//     cout << "Grade: " << grade << " grade" << endl;

//  }
// ************************************//
//Q.4 ] Take three input from the user and print the largest one ?
//   #include <iostream>
//   using namespace std;
//    int main (){
//     float num1,num2,num3 , largest;
//      cout << "Enter the first number: ";
//     cin >> num1;
//     cout << "Enter the second number: ";
//     cin >> num2;
//     cout << "Enter the third number: ";
//     cin >> num3;

//     if(num1 > num2&& num1 >num3){
//         largest = num1;
//     }
//     else if (num2> num1 && num2>num3){
//         largest = num2;
//     }
//       else {
//         largest = num3;
//     }
//     cout <<"The largest number is:"<< largest << endl;
//     return 0;
//    }
 // ************************
  //Q.5]Take the year as the input and printr the leap year on the screen ?
//  #include <iostream>
// using namespace std;

// int main() {
//     int year;
//     cout << "Enter the year: ";
//     cin >> year;

//     if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
//         cout << "The year is a leap year." << endl;
//     } else {
//         cout << "The year is not a leap year." << endl;
//     }
//     return 0;
// }

//Q.6] Write the program to print the last and the first digit of the number ?
// #include <iostream>
// using namespace std;

// int main() {
//     int first, last, num;
//     cout << "Enter the number: ";
//     cin >> num;

//     // Extracting the last digit
//     last = num % 10;

//     // Extracting the first digit
//     first = num;
//     while (first >= 10) {
//         first /= 10;
//     }

//     if (num % 10 == last) {
//         cout << "Entered value is the last element: " << last << endl;
//     } else if (num >= 10) {
//         cout << "Entered value is the first element: " << first << endl;
//     } else {
//         cout << "Entered value is a single-digit number: " << num << endl;
//     }
    
//     cout << " The first digit is "<< first << endl;
//     cout << " The Second digit is "<< last << endl;

//     return 0;
// // } 
                                       // *******or ******
// #include <iostream>
// using namespace std;

// int main() {
//     int first, last, num;
//     cout << "Enter a number: ";
//     cin >> num;

//     // Extracting the last digit
//     last = num % 10;

//     // Finding the first digit
//     while (num >= 10) {
//         num /= 10;
//     }
//     first = num;

//     cout << "The first digit of the number is " << first << endl;
//     cout << "The last digit of the number is " << last << endl;

//     return 0;
// // }

//Q.7]  Write a program to enter any number,then store its reverse in the another variable and then print it ?
// #include <iostream>
//  using namespace std;

//  int main() {
//      int  num, reverse=0;
//      cout <<"Enter any number";
//      cin >> num ;

//      while(num>0){
//         reverse = (reverse*10) +  (num%10);
//          num=num/10;
//      }
//      cout <<"print the reverse "<<reverse<<endl;
//      return 0;
//  }


                           //***************//
//Q.8] Write a program to check wheather a number is prime or not
// #include <iostream>
// using namespace std;

// bool checkPrime(int n) {
//     if (n <= 1) {
//         return false;
//     }
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "Prime numbers up to " << n << " are: ";
//     for (int i = 2; i <= n; i++) {
//         if (checkPrime(i)) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;

//     return 0;
// }
              // or//
// #include <iostream>
// using namespace std;

// int main() {
//     int n, i;
//     bool is_prime = true;

//     cout << "Enter a positive integer: ";
//     cin >> n;

//     // 0 and 1 are not prime numbers
//     if (n == 0 || n == 1) {
//         is_prime = false;
//     }

//     // Loop to check if n is prime
//     for (i = 2; i <= n/2; ++i) {
//         if (n % i == 0) {
//             is_prime = false;
//             break;
//         }
//     }

//     if (is_prime)
//         cout << n << " is a prime number";
//     else
//         cout << n << " is not a prime number";

//     return 0;
// }

//[Q.9]  Write a program to enter any number and check wheather the number is palindrome or not ?
// #include <iostream>
// using namespace std;

// int main() {
//     int num, reverse = 0, sum = 0, temp;
//     cout << "Enter the number: ";
//     cin >> num;
//     temp = num;
//     while (num != 0) {
//         reverse = num % 10;
//         sum = sum * 10 + reverse;
//         num = num / 10;
//     }
//     if (sum == temp) {
//         cout << "Palindrome" << endl;
//     } else {
//         cout << "Not palindrome" << endl;
//     }
//     return 0;
// }
// Q.10}Write a program to enter any number and print all the factors of a number?
// #include <iostream>
// using namespace std;

// int main() {
//     int num, factorial = 1;
//     cout << "Enter any number: ";
//     cin >> num;

//     for (int i = 1; i <= num; ++i) {
//         factorial *= i;
//     }

//     cout << "Factorial of " << num << " is: " << factorial << endl;
//     return 0;
// } 

                  //***************************************************//
//  Q.11]  Write a program to check wheather a number is Armstrong number or not?
//  #include <iostream>
// using namespace std;

// int main() {
//     int num, reverse, sum = 0, temp;
//     cout << "Enter any number: ";
//     cin >> num;
//     temp = num;
//     while (num != 0) {
//         reverse = num % 10;
//         sum += (reverse * reverse * reverse); // Corrected the variable name and the expression
//         num = num / 10;
//     }
//     if (sum == temp) {
//         cout << "Armstrong" << endl;
//     } else {
//         cout << "It is not an Armstrong number" << endl; // Corrected the message for clarity
//     }
//     return 0;
// }

// dry run for 153
// Sure, let's dry run the program for the input number 153.

// Input:
// User inputs the number 153.

// Variable Initialization:

// num = 153
// reverse = 0
// sum = 0
// temp = 153
// While Loop Iteration:

// Iteration 1:
// reverse = 153 % 10 = 3
// sum += (3 * 3 * 3) = 27
// num = 153 / 10 = 15
// Iteration 2:
// reverse = 15 % 10 = 5
// sum += (5 * 5 * 5) = 152 (previous sum + 125 = 152)
// num = 15 / 10 = 1
// Iteration 3:
// reverse = 1 % 10 = 1
// sum += (1 * 1 * 1) = 153 (previous sum + 1 = 153)
// num = 1 / 10 = 0
// Check for Armstrong Number:

// sum = 153
// temp = 153
// Since sum is equal to temp, it prints "Armstrong".
// So, according to the program, 153 is an Armstrong number.

                    //**********************************//
// Q.12]  Take 3 number as input from user and print the second largest number on the screen                

// #include <iostream>
// using namespace std;

// int main() {
//     int num1, num2, num3;
    
//     // Input three numbers from the user
//     cout << "Enter three numbers: ";
//     cin >> num1 >> num2 >> num3;

//     // Logic to find the second largest number
//     int secondLargest;
//     if (num1 >= num2 && num1 >= num3) {
//         if (num2 >= num3) {
//             secondLargest = num2;
//         } else {
//             secondLargest = num3;
//         }
//     } else if (num2 >= num1 && num2 >= num3) {
//         if (num1 >= num3) {
//             secondLargest = num1;
//         } else {
//             secondLargest = num3;
//         }
//     } else {
//         if (num1 >= num2) {
//             secondLargest = num1;
//         } else {
//             secondLargest = num2;
//         }
//     }

//     // Output the second largest number
//     cout << "The second largest number is: " << secondLargest << endl;

//     return 0;
// }
        // *Training Day -2 *
        // ****
        //  ****
        //   ****
        //    ****

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the height of the parallelogram: ";
//     cin >> n;

//     // Loop through each row
//     for (int row= 0; row < n; row++) {
//         // Print spaces before each row
//         for (int col = 0; col < row; col++) {
//             cout << " ";
//         }

//         // Print asterisks for each row
//         for (int col = 0; col< n; col++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }
                                    //  *******************************//
    // *
    // **
    // ***
    // ****

//  #include <iostream>
//  using namespace std;

// int main() {
//     int n;
//     cout << "Enter the height of the right angle: ";
//     cin >> n;
//     for(int row= 0; row<n; row ++){
//         for(int col=0; col<row+1; col++){
//             cout <<"*";
//         }
//         cout << endl;
//     }
//         return 0;
//     }
                     //  ********************************************//
    // *
    // **
    // ***
    // ****
    // ***
    // **
    // *
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the height of the pattern: ";
//     cin >> n;

//     // Upper part of the pattern
//     for (int row = 1; row <= n; row++) {
//         for (int col = 1; col <= row; col++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // Lower part of the pattern
//     for (int row = n - 1; row > 0; row--) {
//         for (int col = 1; col <= row; col++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }
