void reverse(char* str) {
	char* end = str;
	while(*++end) {
	}
	--end;
	while(str<end) {
		char tmp = *str;
		*str++ = *end;
		*end-- = tmp;
	}
}