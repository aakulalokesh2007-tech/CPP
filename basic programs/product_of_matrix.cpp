#include <iostream>
using namespace std;

class Solution {
  public:
    bool multiplyMatrix(int mat1[4][4], int mat2[4][4], int result[4][4]) {
        // code here
        int me[4][4];
        for (int a=0;a<4;a++){
            for(int i=0;i<4;i++){
                int temp=0;
                for (int j=0;j<4;j++){
                    temp+=((mat1[a][j])*(mat2[j][i]));}
                me[a][i]=temp;
            }
            
        }
        //checking;
        for (int a=0;a<4;a++){
            for (int j=0;j<4;j++){
                if (me[a][j]!=result[a][j]){return false;}
            }
        }
        return true;
    }
    
};


main(){
    Solution s;
    int mat1[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int mat2[4][4] = {{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
    int result[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    
    if (s.multiplyMatrix(mat1, mat2, result)) {
        cout << "Matrices multiplied correctly." << endl;
    } else {
        cout << "Matrices multiplication failed." << endl;
    }
}