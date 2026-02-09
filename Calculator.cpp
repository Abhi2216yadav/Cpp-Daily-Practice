#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Enter two numbers : ";
  cin >> a >> b;

  char ch;
  cout << "Enter simble (+, -, *, /) to perform task : ";
  cin >> ch;

  switch (ch)
  {
  case '+':
    cout << "Addition of " << a << " + " << b << " = " << a + b << endl;
    break;
  case '-':
    cout << "Subtraction of " << a << " - " << b << " = " << a - b << endl;
    break;
  case '*':
    cout << "Multiplition of " << a << " * " << b << " = " << a * b << endl;
    break;
  case '/':
    if (b <= 0)
    {
      cout << "can`t divid by " << b;
      break;
    }
    cout << "Divisin of " << a << " / " << b << " = " << (double)a / b << endl;
    break;
  default:
    cout << "Enter valid number ";
    break;
  }
  return 0;
}
