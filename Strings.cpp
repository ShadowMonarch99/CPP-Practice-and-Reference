#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2;
    cin>>s1>>s2;
    int l1=s1.length();
    int l2=s2.length();
    cout<<l1<<" "<<l2<<endl;
    cout<<s1+s2<<endl;
    swap( s1[0],s2[0] ); //swapping the first character
    cout <<s1<< ' ' <<s2<< endl;
  
    return 0;
}
