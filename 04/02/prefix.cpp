#include <iostream>
#include <string>

using namespace std;

string s;

string ParsePlusMinus(string);

string ParseMultiplyDivide(string s)
{
    int n = s.size();

    int k;
    for (k = 0; k != n; ++k)
        if (s[k] == '*' || s[k] == '/')
            break;

    if (k == n)
        return ParsePlusMinus(s);
    else
        return s[k] + ParseMultiplyDivide(s.substr(0, k)) + ParseMultiplyDivide(s.substr(k + 1, n - k - 1));
}

string ParsePlusMinus(string s)
{
    int n = s.size();

    int k;
    for (k = 0; k != n; ++k)
        if (s[k] == '+' || s[k] == '-')
            break;

    if (k == n)
        return s;
    else
        return s[k] + ParsePlusMinus(s.substr(0, k)) + ParseMultiplyDivide(s.substr(k + 1, n - k - 1));
}

int main()
{
    cin >> s;
    cout << ParseMultiplyDivide(s) << endl;

    return 0;
}

