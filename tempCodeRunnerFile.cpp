#include <iostream>
using namespace std;
const int N = 5;
void findLocalMax(const double A[][N], bool B[][N]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            bool isLocalMax = true;  
            
            for (int di = -1; di <= 1; di++) {
                for (int dj = -1; dj <= 1; dj++) {
                    
                    if (di == 0 && dj == 0) continue;

                    int ni = i + di;  
                    int nj = j + dj;  

                    if (ni >= 0 && ni < N && nj >= 0 && nj < N) {
                        if (A[i][j] <= A[ni][nj]) {  
                            isLocalMax = false;
                            break;  
                    }
                }
            }
                if (!isLocalMax) break;  
            }

            B[i][j] = isLocalMax;
        }
    }
}




