#include <bits/stdc++.h>

using namespace std;

void Create_Simple_List(vector < int > &p, int upper_bound, long long &cnt) {
	p.clear();
	p.push_back(2);
	for (int i = 3; i <= upper_bound; i += 2) {
		bool f = true;
		for (int j = 0; p[j] * p[j] <= i && f; j++) {
			f = (i % p[j] != 0);
			cnt++;
		}
		if (f) p.push_back(i);
	}
}

void Print(vector < int > p) {
	for (int i = 0; i < p.size(); i++)
		cout<<p[i]<<" ";
	cout<<"\n";
}

int main() {
	ios::sync_with_stdio(false);
	vector < int > list;
	
	int n = 100000000;
	long long cnt = 0;
	Create_Simple_List(list, n, cnt);
	
	cout<<cnt<<" "<<n<<endl;
	
	//Print(list);
}

