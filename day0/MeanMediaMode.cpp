#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip> 
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin >> N;
    vector<int> v;
    int total;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        total += x;
    }
    sort(v.begin(), v.end());
    double mean = (double)total / N;
    cout << std::setprecision(1) <<std::fixed<< mean <<endl;
    
    //get median
    int index = N / 2;
    if (N % 2 == 0) {
        cout << ((double)(v[index - 1] + v[index])) / 2  <<endl;
    }
    
    //get mode
    int mode = 1;
    index = 0;
    for (int i = 0; i < N ; i++) {
        int tmp = 1;
        for (int j = i + 1; j < N; j++){
            if (v[i] == v[j]) {
                tmp++;
            }
        }
        if (tmp > mode) {
            mode = tmp;
            index = i;
        }
    }
    
    cout << v[index];
    return 0;
}
