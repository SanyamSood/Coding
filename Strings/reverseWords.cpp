#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void reverse(string& str, int low, int high) {
    char temp;
    while (low <= high) {
        temp = str[low];
        str[low] = str[high];
        str[high] = temp;
        low++;
        high--;
    }
}

void reverseWords(string& str) {
    int n = str.length();
    int start = 0;
    for (int end = 0; end < n; end++) {
        if (str[end] == ' ') {
            reverse(str, start, end - 1);
            start = end + 1;
        }
    }
    reverse(str, start, n - 1);
    reverse(str, 0, n - 1);
}

int main() {
    string str;
    getline(cin,str);
    reverseWords(str);
    cout << str << endl;

    return 0;
}

