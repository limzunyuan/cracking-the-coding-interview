void removeDuplicates(char* str) {
	char* i = str;
	char* cur = str;
	while(*i) {
		char*j = i+1;
		while(*j) {
			if(*i==*j) {
				break;
			}
			++j;
		}
		if(!*j) {
			*cur++=*i;
		}
		++i;
	}
	*cur = '\0';
}