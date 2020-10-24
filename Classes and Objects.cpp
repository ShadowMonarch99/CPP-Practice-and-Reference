#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
  class Student {
  private:
    int scores[5];
    int sum;
  public:
    Student() : sum(0) {}//Initializer
    int calculateTotalScore() {return sum;}
    void input() {
        for(int i=0; i<5; i++) {
            cin >> scores[i];
            sum+=scores[i];
        }
    }
};
int main() {
