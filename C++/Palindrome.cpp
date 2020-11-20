#include <iostream>

using namespace std;

bool helper(string str, int i)
{
    int j = str.length() - 1 - i;
    return i >= j ? true : str[i] == str[j] && helper(str, i +1);
}

bool isPalindrome(string str)
{
    return helper(str, 0);
}

int main()
{
    string palinString;
    cout << "Enter a string to check if it is a palindrome: " << endl;
    cin >> palinString;
    if(isPalindrome(palinString))
    {
        cout << palinString << " is a palindrome" << endl;
    }
    else
    {
        cout << palinString << " is not a palindrome" << endl;
    }

    return 0;
}