void rotateMatric(std::vector<std::vector<int>>& mat) {
	int m = mat.size();
	for(int i = 0; i < (m+1)/2; ++i) {
		for(int j = 0; j < (m+1)/2; ++j) {
			int tmp = mat[i][j];
			mat[i][j] = mat[i][m-1-j];
			mat[i][m-1-j] = mat[m-1-i][m-1-j];
			mat[m-i-1][m-1-j] = mat[m-i-1][j];
			mat[m-i-1][j] = tmp;
		}
	}
}