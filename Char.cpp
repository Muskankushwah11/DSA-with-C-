//To Print name in the array

// #include <iostream>
// using namespace std;

// int main(){
//     char name[100];
//     cout <<"Enter your name"<<endl;
//     cin>>name;
//     cout <<"Your Name:"<<name<<endl;

// }
                            // *****************
// #include <iostream>
// using namespace std;

// int main() {
//     char ch[100];
    
//     //  Initialize first two characters manually
//     ch[0] = 'a';
//     ch[1] = 'b';
    
//     // Prompt user for input
//     cout << "Enter a character: ";
    
//     // Read one character into ch[2]
//     cin >> ch[2];
    
//     // Output all three characters
//     cout << ch[0] << ch[1] << ch[2] << endl;

//     return 0;
// }

                           //*******************
//  If you want to print your  full name in one line ?                          
// #include <iostream>
// using namespace std;

// int main() {  
//     char name[100];
//     cout << "Enter your name: ";
//     cin.getline(name, 100); // Read entire line including spaces
//     cout << name << endl;
//     return 0;
//  }
//                                     *******************************************

// To get the length of the given string?

// #include <iostream>
// #include <string.h>
// using namespace std;

// int getLength(char name[]) {
//     int Length = 0;
//     int i = 0;
//     while (name[i] != '\0') {
//         Length++;
//         i++;
//     }
//     return Length;
// }

// int main() {
//     char name[100];
//     cout << "Enter a string: ";
//     cin.getline(name, 100);
//     cout << "Length is " << getLength(name) << endl;
//     return 0;
// }
// ***********************************************************************************************************************************

//  Reverse of the string?

// #include <iostream>
// #include <algorithm> // for swap
// #include <string.h>
// using namespace std;

// // Function to reverse a character array
// void reverseCharArray(char name[]) {
//     int n = strlen(name);
//     int i = 0, j = n - 1;
//     while (i < j) {
//         swap(name[i], name[j]);
//         i++;
//         j--;
//     }
// }

// int main() {
//     char name[100];
//     cout << "Enter a string: ";
//     cin.getline(name, 100);

//     cout << "Initially: " << name << endl;
//     reverseCharArray(name);
//     cout << "After reversal Process: " << name << endl;

//     return 0;
// }
// ********************************************************************************************************************************
// Write a Program to print the @ in place of spaces ?
// #include <iostream>
// #include <cstring> // for strlen
// using namespace std;

// void replaceSpaces(char sentence[]) {
//     int n = strlen(sentence);
//     for (int i = 0; i < n; i++) {
//         if (sentence[i] == ' ') {
//             sentence[i] = '@';
//         }
//     }
// }

// int main() {
//     char sentence[100];
//     cout << "Enter a sentence: ";
//     cin.getline(sentence, 100);

//     replaceSpaces(sentence);

//     cout << "Printing sentence after replacing spaces with '@': " << endl << sentence << endl;

//     return 0;
// 
 // ********************************************************************************************************************\
//  Write a program to check wheather a program is palindrome or not 
// #include <iostream>
// #include <cstring> // for strlen

// using namespace std;

// bool checkPalindrome(char word[]) {
//     int n = strlen(word);
//     int i = 0;
//     int j = n - 1;
    
//     while (i < j) {
//         if (word[i] != word[j]) {
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }

// int main() {
//     char arr[100] = "racecar";
//     cout << "Palindrome number: " << checkPalindrome(arr) << endl;
//     return 0;
// }
// ************************************************************************************************************************
// Write a program to convert upper case into lowercase ?
// #include <iostream>
// #include <cstring> // for strlen
// using namespace std;

// void convertIntoUpperCase(char arr[]) {
//     int n = strlen(arr);
//     for(int i = 0; i < n; i++) {
//         if(arr[i] >= 'a' && arr[i] <= 'z') {
//             arr[i] = arr[i] - 'a' + 'A';
//         }
//     }
// }

// int main() {
//     char arr[100] = "babber";
//     convertIntoUpperCase(arr);
//     cout << arr << endl;
//     return 0;
// }

// ********************************************************************************************************************************
// Write a program to convert lowercase into uppercase ?
// #include <iostream>
// #include <cstring> 
// using namespace std;

// void convertIntoLowerCase(char arr[]) {
//     int n = strlen(arr);
//     for(int i = 0; i <n; i++) {
//         if(arr[i] >= 'A' && arr[i] <= 'a') {
//             arr[i] = arr[i] - 'A' + 'a';
//         }
//     }
// }

// int main() {
//     char arr[100] = "BABBER";
//     convertIntoLowerCase(arr);
//     cout << arr << endl;
//     return 0;
// }
// *********************************************************************************************************************************
                                    //  STRINGS
// If you want to print the string in one line                                
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     cout << str;
// }
// ****************************************************************************************************************************
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string str;
//     cin>> str;
//     cout <<str;
//     cout <<"length:"<<str.length() <<endl;
//     cout <<"isempty"<<str.empty()<<endl;
//     // str.push_back ('b');
//     // cout << str <<endl;
//      cout <<str.substr(1,3)<<endl;
//      cout << str << endl;
// }
// ************************************************************************************************************************************

// If you want to sort in ascending order
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     string s = "muskan";
//     sort(s.begin(), s.end());
//     cout << s << endl;
//     return 0;
// }

// If you want to print your string in the reverse order
// #include <iostream>
// #include <algorithm>
// using namespace std;
// bool cmp(char first,char second){
//     return first >second;
// }
// int main (){
//     string s ="aabbcc";
//     sort(s.begin(),s.end(),cmp);
//     cout <<s <<endl;
//     return 0;

// }
// If you want in  the sort in ascending order
#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(char first,char second){
    return first <second;
}
int main (){
    string s ="ddccbbaa";
    sort(s.begin(),s.end(),cmp);
    cout <<s <<endl;
    return 0;

}