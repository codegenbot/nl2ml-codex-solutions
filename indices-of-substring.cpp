#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    // Preprocess the target to build lps[] that will hold the lengths of longest proper prefixes which are also suffixes.
    int *lps = new int[m];
    int j = 0; // index for target[]

    lps[0] = 1;
    int i, len = 0;

    for (i = 1; i < m; ) {
        if (target[i] == target[j]) {
            j++;
            lps[i] = j;
            i++;
        }
        else if (j != 0) {
            j = lps[j-1];
        }
        else {
            lps[i] = 1;
            i++;
        }
    }

    // Traverse the text and find all occurrences of target[].
    for (int i = 0; i <= n - m; ) {
        len = 0;
        j = 0;
        while (i + len < n && j < m) {
            if (text[i + len] == target[j]) {
                j++;
                len++;
            }
            else {
                i = i - (len - lps[j-1]);
                j = lps[j-1];
            }
        }

        while (j > 0) {
            result.push_back(i);
            j = lps[j-1];
        }
        i += len; // move to the next character
    }

    delete[] lps;

    return result;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target substring: ";
    getline(cin, target);

    vector<int> result = indicesOfSubstring(text, target);
    
    if(result.size() == 0)
        cout << "Target not found in text.";
    else
        cout << "Indices of the target in the text are: ";
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}