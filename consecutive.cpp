
/* 
Question :
Find the maximum consecutive 1's in an array of 0's and 1's.
Example:
a) 00110001001110 - Output :3 [Max num of consecutive 1's is 3]
b) 1000010001 - Output :1 [Max num of consecutive 1's is 1]
*/

// used C++ language

#include<bits/stdc++.h> 
using namespace std; 

void findZeroes(int arr[], int n, int m) 
{ 
    int wL = 0, wR = 0;
    int bestL = 0, bestWindow = 0;
    int zeroCount = 0;
    
    while (wR < n) 
    { 
         
        if (zeroCount <= m) 
        { 
            if (arr[wR] == 0) 
              zeroCount++; 
            wR++; 
        } 
        
        if (zeroCount > m) 
        { 
            if (arr[wL] == 0) 
              zeroCount--; 
            wL++; 
        } 
         
        if ((wR-wL > bestWindow) && (zeroCount<=m)) 
        { 
            bestWindow = wR-wL; 
            bestL = wL; 
        } 
    } 
    for (int i=0; i<bestWindow; i++) 
    { 
        if (arr[bestL+i] == 0) 
           cout << bestL+i << " "; 
    } 
} 