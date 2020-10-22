#include <iostream>
using namespace std;
int t,n;


void decToBinary(int n) 
{ 
   
    int binaryNum[100]; 
  

    int i = 0; 
    while (n > 0) { 
  
     
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
  
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
  

int main() 
{ 
    cin >> t; 
    for ( int i = 0; i < n; ++i ) cin >> n;
    decToBinary(n); 
    cout << decToBinary(n); 
    return 0; 
} 