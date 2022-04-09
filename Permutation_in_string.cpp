class Solution {
public:
	bool checkInclusion(string s, string p) {
		vector<int> sc(26,0),pc(26,0);
		int m=s.size();
		int n=p.size();
		if(n<m) return false;
		for(int i=0;i<m;i++){
			sc[s[i]-'a']++;
			pc[p[i]-'a']++;
		}
		if(sc==pc) return true;;
		for(int i=m;i<n;i++){
			pc[p[i]-'a']++;
			pc[p[i-m]-'a']--;
			if(sc==pc) return true;
		}
		return false;
	}
};
