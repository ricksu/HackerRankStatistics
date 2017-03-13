#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double mean(vector<int> v)
{
    int t = 0;
    for (int i = 0; i < v.size(); i++) {
       t += v[i]; 
    }
    return (double)t / v.size();
}

double stdDeviation(vector<int> v, double mean) {
    double total = 0;
    for (int i = 0; i< v.size(); i++) {
        double tmp = v[i] - mean;
        total += (tmp * tmp);
    }
    return sqrt(total / v.size());
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    double m = mean(v);
    double d = stdDeviation(v, m);
    cout<< setprecision(1) << fixed<<d<<endl;
    
    return 0;
}
