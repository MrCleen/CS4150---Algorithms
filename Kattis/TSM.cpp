// problem using naive approach.
#include <bits/stdc++.h>
using namespace std;

 
// Driver Code
int main()
{
  cout << "How many lines?" << endl;
  int n;
  cin >> n;

  cout << "Result = " << n << endl;
  // matrix representation of graph
  int graph[n][n];
  string temp;
  int count = 0;

  for (int i = 0; i < n; i++)
  {
    cout << n << "th line: " << endl;
    cin >> temp;
    while (count != n)
    {
      cout << "In while loop" << endl;
      graph[i][count] = temp[count];
      count = count + 2;
    }
    count = 0;
  }    
    return 0;
}
