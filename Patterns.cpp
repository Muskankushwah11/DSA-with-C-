// # include<iostream>
// using namespace std;
// int main (){
//     cout <<"hlo"<<endl;
//     return 0;
// }
                //  PATTERNS//


// WRITE A PROGRAM TO DRAW THE FOLLOWING PATHERNS ? 
                        //*****
                        //*****
                        //*****
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int row = 0; row < n; row++) {
//         for (int col = 0; col < n; col++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }
                                     // *************//

                                    //  *
                                    //  **
                                    //  ***
                                    //  ****
                                    //  *****
// # include <iostream>
// using namespace std;
// int main(){
//      int n;
//      cin>>n;
//      for(int row=0; row<n; row++){
//         for(int col=0; col<row+1; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//      }
// }
                                                                  // ********//    
                          
                        //   *******
                        //   *****
                        //   ***
                        //   **
//                      //   *

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int row=0;  row<n; row++){
//          for (int col=0;  col<n-row; col++){
//             cout << "*";
//          }
//          cout << endl;
//     }
// }
                             //*******//


                            //       *
                            //      ***
                            //     *****
                            //    *******

// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0; row<n ; row++){
//         for(int col=0; col<n-row-1; col++) {
//             cout << " ";
//         }
//         for(int col=0; col<2*row+1; col++){
//             cout <<"*";
//         }
//         cout<<endl;
//     }
// }

                                         //******//
                                        //                     *********
                                        //                      *******
                                        //                       *****
                                        //                        ***
                                        //                         *
// # include <iostream>
// using namespace std;
//  int main(){
//     int n;
//     cin>>n;
    //    for(int row=0; row<n ; row++){
    //     for(int col=0; col<row; col++) {
    //          cout << " ";
    //      }
    //      for(int col=0; col<2 * (n - row) - 1; col++){
    //         cout <<"*";
    //     }
//         cout<<endl;
//      }
//  }                        
                        // ********  //
                        // 1
                        // 12
                        // 123
                        // 1234
                        // 12345
                                 
//  # include <iostream>
//  using namespace std;
//  int main(){
//     int n;
//     cin >> n;
//     for(int row=0; row<n; row++){
//         for(int col=0; col<=row; col++){
//             cout<<col+1;
//         }
//         cout << endl;
//     }
//  }            

                            // *********
//                             1
//                             1 2
//                             1  3
//                             1    4
//                             1      5
//                             1 2 3 4 5 6
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int row = 0; row < n; row++) {
//         for (int col = 0; col <= row; col++) {
//             if (col == 0 || col == row || row == n - 1) {
//                 cout << col + 1 << " ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
       
       //                                       ***************

                                        //    12345
                                        //    2345
                                        //    345
                                        //    45
                                        //    5
//  #include <iostream>
//  using namespace std;

//  int main() {
//      int n;
//      cin >> n;
//      for(int row=0; row<n; row++){
//         for(int col=row+1; col<=n; col++){
//             cout<<col;
//         }
//         cout<<endl;
//      }
//      }
                                           //   ****************

//                                            1 2 3 4 5
//                                            2    5
//                                            3  5
//                                            4 5
//                                            5
                                           
//  #include <iostream>
//  using namespace std;

//  int main() {
//      int n;
//      cin >> n;
//      for(int row=0; row<n; row++){
//         for(int col=row+1; col<=n; col++){
//             if(col==row+1|| col==n|| row==0){
//                 cout<<col;
//             }
//            else{
//             cout<< " ";
//            }

//         }
//         cout<<endl;
//      }
//      }
                                      //***************
                                            //    1
                                            //    2 3
                                            //    4 5 6
                                            //    7 8 9 10
//  #include <iostream>
//  using namespace std;

//  int main() {
//      int n;
//      cin >> n;

//      int count =1;
//      for(int row=1;row<n;row++){
//         for(int col=0;col<=row; col++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout << endl;
//      }
//  } 
                                      //   *******


//                                       *      *
//                                       **    **
//                                       ***  ***
//                                       ********
//                                       ***  ***
//                                       **    **
//                                       *      *
//  #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int row = 0; row < 2 * n; row++) {
//         int cond = row < n ? row : 2 * n - row - 1;
//         int space_count = row < n ? 2 * (n - cond - 1) : row - cond - 1;

//         for (int col = 0; col <= 2 * n; col++) {
//             if (col <= cond) {
//                 cout << "*";
//             } else if (space_count > 0) {
//                 cout << " ";
//                 space_count--;
//             } else {
//                 cout << "*";
//             }
//         }

//         cout << endl;
//     }

//     return 0;
// }

//******************************************//
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

