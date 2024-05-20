#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

// Function to check if a string is palindrome
bool isPalindrome(const string& str) {
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        if (str[i] != str[n - i - 1])
            return false;
    }
    return true;
}

int minCostToPalindrome(string& str) {
    // Count frequency of each character
    unordered_map<char, int> freq;
    for (char ch : str) {
        freq[ch]++;
    }

    int cost = 0;
    for (auto& p : freq) {
        char ch = p.first;
        int count = p.second;

        // Calculate cost for converting to lowercase/uppercase
        int lowerToUpperCost = min(count, freq[toupper(ch)]);
        int upperToLowerCost = min(count, freq[tolower(ch)]);

        // Calculate cost for converting to any other character
        int toAnyOtherCost = count - lowerToUpperCost - upperToLowerCost;

        // Update total cost
        cost += lowerToUpperCost + upperToLowerCost + toAnyOtherCost * 2;
    }

    return cost;
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    // Check if the string is already a palindrome
    if (isPalindrome(str)) {
        cout << "The given string is already a palindrome." << endl;
    }
    else {
        // Calculate the minimum cost to make it a palindrome
        int minCost = minCostToPalindrome(str);
        cout << "Minimum cost to make the string a palindrome: " << minCost << " taka" << endl;
    }

    return 0;
}
