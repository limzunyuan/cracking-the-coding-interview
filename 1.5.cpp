void replace(std::string& str) {
	int cnt =0;
	int old_sz = str.size();
	for(int i = old_sz-1; i>=0; --i) {
		if(str[i]==' ') {
			cnt++;
		}
	}
	str.resize(old_sz + cnt*2);
	cnt = old_sz + cnt*2-1;
	for(int i = old_sz-1; i>=0; --i) {
		if(str[i] == ' ') {
			str[cnt--] = '0';
			str[cnt--] = '2';
			str[cnt--] = '%';
		} else {
			str[cnt--] = str[i];
		}
	}
}