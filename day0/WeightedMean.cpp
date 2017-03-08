#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip> 
using namespace std;


int main() {
    int N;
    cin >> N;
    vector<int> v(N), w(N);
    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }
    int total = 0;
    int wcount  = 0;
    for(int i = 0; i < N; i++) {
        cin >> w[i];
        total += v[i]*w[i];
        
        wcount += w[i];
    }
    double r = (double)total / wcount;
    cout << setprecision(1)<<std::fixed<<r;
    
    return 0;
}
