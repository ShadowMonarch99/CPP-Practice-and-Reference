#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    int n,num,i;
    cin>>n;
    while(cin>>num)
    v.push_back(num);
    sort(v.begin(),v.end()); 
    for(auto i:v)
    cout<<i<<' ';
    return 0;
}
