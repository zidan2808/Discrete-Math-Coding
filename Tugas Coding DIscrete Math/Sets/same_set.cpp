#include <iostream>
using namespace std;
const int MAX = 100;

void same_set(int a, int b)
{
  int mark, i, j, n;
  int A[MAX], B[MAX];

  // READ SET A
  cout << "Set of A = ";
  cin >> a;
  i = 0;
  for (i = 0; i < a; i++)
  {
    cout << "A[" << i + 1 << "] = ";
    cin >> A[i];
  }
  j = 0;
  cout << "This is set of A { ";
  for (j = 0; j < a; j++)
  {
    cout << A[j] << ", ";
  }
  cout << "}";

  cout << endl;

  // READ SET B
  cout << "\nSet of B = ";
  cin >> b;
  i = 0;
  for (j = 0; j < b; j++)
  {
    cout << "B[" << j + 1 << "] = ";
    cin >> B[j];
  }
  j = 0;
  cout << "This is set of B { ";
  for (j = 0; j < b; j++)
  {
    cout << B[j] << ", ";
  }
  cout << "}";

  cout << endl;

  // SAME SET A AND B
  if (a > b || a < b)
  {
    cout << "\nSet of A is not equal than Set of B" << endl;
  }
  else
  {
    i = 0;
    n = 0;
    for (i = 0; i < a; i++)
    {
      j = 0;
      mark = 0;
      for (j = 0; j < b; i++)
      {
        if (A[i] == B[j])
        {
          mark = 1;
          break;
        }
      }
      if (mark == 0)
      {
        n++;
      }
    }
    cout << endl;
    if (n == 0)
    {
      cout << "\nSet of A = Set of B" << endl;
    }
    else
    {
      cout << "\nSet of A is not Set of B" << endl;
    }
  }
}

int main()
{
  int a, b;
  cout << "SAME SET PROGRAM \n";
  cout << "---------------- \n";
  same_set(a, b);
  return 0;
}
