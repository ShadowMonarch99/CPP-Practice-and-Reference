#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector <int> a;
    stringstream ss(str);
    char ch;
    int temp;
    while(ss)   // While the stringstream object does not hit a null byte
    {
        ss>>temp>>ch;   // Extract the comma seperated ints with the extraction >> operator
        a.push_back(temp);   // Push the int onto the vector
    } 
    
    return a; // Return the vector of ints
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
