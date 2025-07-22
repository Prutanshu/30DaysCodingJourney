class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int k,l;
        vector<vector<int>> temp=matrix;
        for(int i=0;i<temp.size();i++){
            for(int j=0;j<temp[i].size();j++){
                if(temp[i][j]==0){
                     for(int c=0;c<matrix.size();c++){
                               for(int d=0;d<matrix[i].size();d++){
                                   if(c==i || d==j){
                                    matrix[c][d]=0;
                                }
                            }
                        }
                }
            }
        }
    }
};

