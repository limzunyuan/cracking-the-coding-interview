void rotateMatric(std::vector<std::vector<int>>& mat) {
        int m = mat.size();
        int tmp;
        for(int i = 0; i < m/2; ++i) {
            for(int j = 0; j < (m+1)/2; ++j) {
                tmp = mat[i][j];
                mat[i][j] = mat[m-1-j][i];
                mat[m-j-1][i] = mat[m-1-i][m-1-j];
                mat[m-i-1][m-1-j] = mat[j][m-1-i];
                mat[j][m-1-i] = tmp;
            }
        }
}