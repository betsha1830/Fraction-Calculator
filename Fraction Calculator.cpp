#include <iostream>
#include <iomanip>     

using namespace std;

string Operator;
int a, b, c, d;

void Menu()
{
    cout << setfill(' ') << setw(30) << "#" << setfill('#') << setw(46) << "#" << endl <<
    setfill(' ') << setw(30) << "#" << setfill(' ') << setw(46) << "#" << endl <<
    setfill(' ') << setw(30) << "#" << setfill(' ') << setw(46) << "#" << endl;
    cout << setfill(' ') << setw(30) << '#' << "    Welcome to your Fraction Calculator      #" << endl <<
    setfill(' ') << setw(30) << "#" << setfill(' ') << setw(46) << "#" << endl <<
    setfill(' ') << setw(30) << '#' << "         a" << "\t \t" << "c" << setfill(' ') << setw(19) << "#" << endl <<
    setfill(' ') << setw(30) << '#' << "         _" << "  (+, -, x, /) " << " _" << setfill(' ') << setw(19) << "#" << endl <<
    setfill(' ') << setw(30) << "#" << setfill(' ') << setw(46) << "#" << endl <<
    setfill(' ') << setw(30) << '#' << "         b" << "\t \t" << "d" << setfill(' ') << setw(19) << "#" << endl <<
    setfill(' ') << setw(30) << "#" << setfill(' ') << setw(46) << "#" << endl;
    cout << setfill(' ') << setw(30) << "#" << setfill('#') << setw(46) <<"#" << endl << endl;
}

void Input()
{
    cout << "Please enter the value of a: ";
    cin >> a;
    cout << "Please enter the value of b: ";
    cin >> b;
    cout << "Please enter an operator: ";
    cin >> Operator;
    cout << "Please enter the value of c: ";
    cin >> c;
    cout << "Please enter the value of d: ";
    cin >> d;
    cout << endl;
}

int Denumerator ()
{
    int denumerator;
    if (Operator == "+" || Operator == "-" || Operator == "*" || Operator == "x" || Operator == "X")
        denumerator = b * d;
    else if (Operator == "/")
        denumerator = b * c;
    else cout << "Wrong operator";
    return denumerator;
}

int Numerator ()
{
    int numerator;
    if (Operator == "+")
        numerator = (d*a) + (c*b);
    else if (Operator == "-")
        numerator = (d*a) - (c*b);
    else if (Operator == "*" || Operator == "x" || Operator == "X")
        numerator = a * c;
    else if (Operator == "/")
        numerator = a * d;
    return numerator;
}

void LowestForm ()
{
    int num, dum;
    num = Numerator(); dum = Denumerator();
    if (num > dum)
    {
        for (int i = num; i >= 2; i--)
    {
    if (num%i == 0 && dum%i == 0)
            {
            num = num/i;  dum = dum/i;
            }
    }
    }
    else if (dum > num)
    {
        for (int i = dum; i >= 2; i--)
    {
    if (num%i == 0 && dum%i == 0)
            {
            num = num/i;  dum = dum/i;
            }
    }
    }
    cout << "Your answer is: " << num << "/" << dum << endl;
}

int main()
{
    Menu();
    Input();
    LowestForm();
}
