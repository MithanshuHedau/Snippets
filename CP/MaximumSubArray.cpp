#include <bits/stdc++.h>
using namespace std;

int main()
{
  // 3 -4 5 4 -1 7 -8
  int arr[] = {3, -4, 5, 4, -1, 7, -8};
  int n = sizeof(arr) / sizeof(arr[0]);
  int currsum = 0;
  int maxsum = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (currsum < 0)
    {
      currsum = 0;
    }
    currsum += arr[i];
    maxsum = max(maxsum, currsum);
  }
  cout << maxsum << endl;
  return 0;
}
