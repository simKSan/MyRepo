#include <iostream>
#include <vector>
using namespace std;
string reverse(string str)
{
    vector<char> revString;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        revString.push_back(str[i]);
    }
    return string(revString.begin(), revString.end());
}
bool isPalindrome(string str)
{
    string rev = reverse(str);
    return rev == str;
}

int main()
{
    string palinString;
    cout << "Enter a string to check if it is a palindrome: " << endl;
    cin >> palinString;
    isPalindrome(palinString)) ? cout << palinString << " is a palindrome" << endl; : cout << palinString << " is not a palindrome" << endl;
    return 0;
}