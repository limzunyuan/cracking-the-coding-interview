bool unique_char(const std::string& str) {
	bool cnt[256];
	memset(cnt, 0, 256*sizeof(bool));
	for(char ch:str) {
		if(cnt[ch]) {
			return false;
		}
		cnt[ch]=true;
	}
	return true;
}

bool unique_char_no_mem(const std::string& str) {
	for(int i = 0; i < str.size(); ++i) {
		for(int j = i+1; j< str.size(); ++j) {
			if(str[i] == str[j]) {
				return false;
			}
		}
	}
	return true;
}
