#include<bits/stdc++.h>
using namespace std;

string minWindow(string s, string t) {
	unordered_map<char, int>tMapper;  // mapping values of string t
	unordered_set<char>satisfied; // if the counts of repeated vaues ar same then we add it
	for (auto c : t) {
		tMapper[c]++;
	}
	unordered_map<char, int>tracker; /// tracking values in s
	int i = 0;
	int j = 0;
	int minSize = numeric_limits<int>::max();
	string ans="";
	int counter = 0;
	while (j < s.size()) {
		if (tMapper.count(s[j])) {
			tracker[s[j]]++;
			if (tracker[s[j]] >= tMapper[s[j]]) {
				satisfied.insert(s[j]);
			}
		}
		while (tracker.size() == tMapper.size() && satisfied.size() == tMapper.size()) {
			if (j - i + 1 < minSize) {
				minSize = j - i + 1;
				ans = s.substr(i, j - i + 1);
			}
			if (tracker.count(s[i])) {
				tracker[s[i]]--;
				if (tracker[s[i]] < tMapper[s[i]]) {
					satisfied.erase(s[i]);
				}
			}	
			i++;
		}
		j++;
	}
	return ans;
}

int main(){
    
}