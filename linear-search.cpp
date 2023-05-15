#include <iostream>
using namespace std;

int search(int array[], int n, int x)
{
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main()
{
  int array[] = {0, 784735, 4, 2, 8, 9, 11, 123, 553, 4, 0, 1, 9, 1};
  int x = 1;
  int n = sizeof(array) / sizeof(array[0]);

  int result = search(array, n, x);

  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;

  return 0;
}
