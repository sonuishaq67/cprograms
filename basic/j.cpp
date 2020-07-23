#include <iostream> 
#include <vector>
using namespace std; 
  
int main() 
{ 
    vector<int> a = { 1, 7, 2, 4, 8, 3 }; 
    qsort(a.begin(), a.end()); 
    for (int i; i < a.size(); i++) 
       std::cout << a[i] << " "; 
    return 0; 
} 
