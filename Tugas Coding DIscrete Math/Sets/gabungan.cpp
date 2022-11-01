#include <iostream>
using namespace std;

void union_set(int a, int b)
{
  int flag, i, j;
  int max = 100;
  int A[max], B[max];

  // READ SET A
  cout << "Set of A = ";
  cin >> a;
  for (i = 1; i <= a; i++)
  {
    cout << "A[" << i << "] = ";
    cin >> A[i];
  }

  // READ SET B
  cout << "Set of B = ";
  cin >> b;
  for (j = 1; j <= b; j++)
  {
    cout << "B[" << j << "] = ";
    cin >> B[j];
  }

  // UNION SET
  cout << "Union A and B = {";
  for (i = 1; i <= a; i++)
  {
    cout << A[i] << " ";
  }
  for (j = 1; j <= b; j++)
  {
    flag = 1;
    for (i = 1; i <= a; i++)
    {
      if (A[i] == B[j])
      {
        flag = 0;
      }
    }
    if (flag == 1)
    {
      cout << B[j];
      cout << " ";
    }
  }
  cout << "}";
}

int main()
{
  int a, b;
  cout << "UNION SET PROGRAM \n";
  cout << "----------------- \n";
  union_set(a, b);
}