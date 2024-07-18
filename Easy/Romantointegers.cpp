#include <iostream>
// Online C++ compiler to run C++ program online
#include <map> // Include the <map> header file
using namespace std;


int romanToInt(string roman) {
        // Create a map of strings to integers
        map<string, int> mp;

        // Insert values into the map
        mp["I"] = 1;
        mp["II"] = 2;
        mp["III"] = 3;
        mp["IV"] = 4;
        mp["V"] = 5;
        mp["VI"] = 6;
        mp["VII"] = 7;
        mp["VIII"] = 8;
        mp["IX"] = 9;
        mp["X"] = 10;
        mp["XL"] = 40;
        mp["L"] = 50;
        mp["XC"] = 90;
        mp["C"] = 100;
        mp["CD"] = 400;
        mp["D"] = 500;
        mp["CM"] = 900;
        mp["M"] = 1000;

        int result = 0;
        int i = 0;
        while (i < roman.length()) {
            if (i + 1 < roman.length() && mp[roman.substr(i, 2)] > 0) {
                // Check for two-character Roman numeral
                result += mp[roman.substr(i, 2)];
                i += 2; // Move to the next two characters
            } else if (i + 2 < roman.length() && mp[roman.substr(i, 3)] > 0) {
                // Check for three-character Roman numeral (like "CM")
                result += mp[roman.substr(i, 3)];
                i += 3; // Move to the next three characters
            } else if (mp[roman.substr(i, 1)] > 0) {
                // Check for single-character Roman numeral
                result += mp[roman.substr(i, 1)];
                i++; // Move to the next character
            } else {
                cout << "Invalid roman number" << endl;
                return 0;
            }
        }
        cout << result << endl;
        return result;
}


int main() {
   
    romanToInt("MCMXCIV");
    return 0;
}