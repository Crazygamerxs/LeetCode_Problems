#include <iostream>
#include <vector>
#include <string>
using namespace std;


string longestCommonPrefix(vector<string>& strs) {

    if (strs.empty()) {
            cout << "No common prefix" << endl;
            return "";
        }

        string prefix = strs[0]; // Start with the first string as the initial prefix

        for (int i = 1; i < strs.size(); ++i) {
            int j = 0;
            while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
                j++;
            }
            prefix = prefix.substr(0, j); // Update prefix to the common part
            if (prefix.empty()) {
                cout << "No common prefix" << endl;
                return "";
            }
        }

        cout << "Longest common prefix: " << prefix << endl;
        return prefix;
}



int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    longestCommonPrefix(strs);
   
    return 0;
}


        
    
    
