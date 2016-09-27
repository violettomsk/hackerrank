#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> array_left_rotation(vector<int> a, int n, int k) {
	vector<int> b(n);
	k = k%n;
	int j = 0;
	for (int i = k; i<n; ++i) {
		b[j++] = a[i];
	}
	for (int i = 0; i < k; ++i) {
		b[j++] = a[i];
	}
	a.swap(b);
	return a;
}

int main(){
	int n;
	int k;
	cin >> n >> k;
	vector<int> a(n);
	for (int a_i = 0; a_i < n; a_i++){
		cin >> a[a_i];
	}
	vector<int> output = array_left_rotation(a, n, k);
	for (int i = 0; i < n; i++)
		cout << output[i] << " ";
	cout << endl;
	return 0;
}
