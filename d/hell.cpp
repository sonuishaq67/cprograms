#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    vector<int> a = { 1, 7, 2, 4, 8, 3 }; 
    sort(a.begin(), a.end()); 
    for (int i; i < a.size(); i++) 
        cout << a[i] << " "; 
    return 0; 
} 