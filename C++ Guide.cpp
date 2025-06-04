// # Defining Variables
/* 


Vectors -> Uniform Initialization
vector<int> v = {1, 2, 3, 4, 5}; // vector of integers, seems to be quite similar to arrays
*/





// # Outputs
/* 
cout << "Hello, C++ World!" << endl; // Outputs a string to the console 

cout << "u = " << u << endl or "\n"; // Outputs the value of variable u to the console

*/



// # Loops
/* 
auto variable // automatic type deduction, not commonly used

Unique or Shared Pointers // smart pointers for memory management
std::make_unique<CallPayoff>(75.0);

Only Available in C++11 and later
for (double x : v) // for each element x in vector (array) v
{
    cout << x << " ";
}

e.g. vector<string> sorry_dave{"Open", "I", "can't", "do", "that", "Dave"};
for (const string& word : sorry_dave)
{
    cout << word << " ";
}// C++ Guide
*/



// # Classes
/* 
C++ 17 introduced class template argument deduction (CTAD)
Before: std::vector<int> v
After: std::vector v

*/


// # Arrays
/* 
// Multidimensional arrays, introduced in C++23, mdspan
std::mdspan<int, std::extents<std::size_t, 2, 3>> arr; // 2D array with 2 rows and 3 columns
// Traditional C-style arrays
int arr[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 2D array with 2 rows and 3 columns

*/