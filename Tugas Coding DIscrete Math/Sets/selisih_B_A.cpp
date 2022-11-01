#include <iostream>
using namespace std;
const int MAX = 100;

void subtraction_set(int a, int b)
{
  int flag, i, j;
  int A[MAX], B[MAX], C[MAX];

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

  // SUBTRACTION
  cout << "B - A = {";
  for (j = 1; j <= b; j++)
  {
    for (i = 1; i <= a; i++)
    {
      if (B[j] == A[i])
      {
        break;
      }
      if (i == a)
      {
        cout << B[j] << " ";
      }
    }
  }
  cout << "}";
}

int main()
{
  int a, b;
  cout << "SUBSTRACTION SET PROGRAM \n";
  cout << "------------------------ \n";
  subtraction_set(a, b);
}