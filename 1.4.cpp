bool anagram(std::string str1, std::string str2) {
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	return str1==str2;
}
