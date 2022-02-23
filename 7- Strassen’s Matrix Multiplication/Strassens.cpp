#include <vector>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

void add(vector< vector<int> > &matrixA, vector< vector<int> > &matrixB,
         vector< vector<int> > &matrixC, unsigned int mSize) {
    for (int i = 0; i < mSize; i++) {
        for (int j = 0; j < mSize; j++) {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

void sub(vector< vector<int> > &matrixA,vector< vector<int> > &matrixB,
         vector< vector<int> > &matrixC, unsigned int mSize) {
    for (int i = 0; i < mSize; i++) {
        for (int j = 0; j < mSize; j++) {
            matrixC[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
}

vector<vector<int>> strassenR(vector< vector<int> > &matrixA,vector< vector<int> > &matrixB,
               vector< vector<int> > &matrixC,unsigned int mSize) {
    if (mSize == 1) {
        matrixC[0][0] = matrixA[0][0] * matrixB[0][0];
        return matrixC;
    }
    else {
        int newMSize = mSize / 2;
        vector<int> innerVector(newMSize, 0);
        vector< vector<int> > matrixA11(newMSize, innerVector),
                matrixA12(newMSize, innerVector),
                matrixA21(newMSize, innerVector),
                matrixA22(newMSize, innerVector),
                matrixB11(newMSize, innerVector),
                matrixB12(newMSize, innerVector),
                matrixB21(newMSize, innerVector),
                matrixB22(newMSize, innerVector),
                matrixC11(newMSize, innerVector),
                matrixC12(newMSize, innerVector),
                matrixC21(newMSize, innerVector),
                matrixC22(newMSize, innerVector),
                s1(newMSize, innerVector),
                s2(newMSize, innerVector),
                s3(newMSize, innerVector),
                s4(newMSize, innerVector),
                s5(newMSize, innerVector),
                s6(newMSize, innerVector),
                s7(newMSize, innerVector),
                s8(newMSize, innerVector),
                s9(newMSize, innerVector),
                s10(newMSize, innerVector),
                p1(newMSize, innerVector),
                p2(newMSize, innerVector),
                p3(newMSize, innerVector),
                p4(newMSize, innerVector),
                p5(newMSize, innerVector),
                p6(newMSize, innerVector),
                p7(newMSize, innerVector),
                tempMatrixA(newMSize, innerVector),
                tempMatrixB(newMSize, innerVector);
        for (int i = 0; i < newMSize; i++) {
            for (int j = 0; j < newMSize; j++) {
                matrixA11[i][j] = matrixA[i][j];
                matrixA12[i][j] = matrixA[i][j + newMSize];
                matrixA21[i][j] = matrixA[i + newMSize][j];
                matrixA22[i][j] = matrixA[i + newMSize][j + newMSize];

                matrixB11[i][j] = matrixB[i][j];
                matrixB12[i][j] = matrixB[i][j + newMSize];
                matrixB21[i][j] = matrixB[i + newMSize][j];
                matrixB22[i][j] = matrixB[i + newMSize][j + newMSize];
            }
        }
        // s1 = b12 - b22
        sub(matrixB12, matrixB22, s1, newMSize);
        // s2 = a11 + a12
        add(matrixA11, matrixA12, s2, newMSize);
        // s3 = a21 + a22
        add(matrixA21, matrixA22, s3, newMSize);
        // s4 = b21 - b11
        sub(matrixB21, matrixB11, s4, newMSize);
        // s5 = a11 + a22
        add(matrixA11, matrixA22, s5, newMSize);
        // s6 = b11 + b22
        add(matrixB11, matrixB22, s6, newMSize);
        // s7 = a12 - a22
        sub(matrixA12, matrixA22, s7, newMSize);
        // s8 = b21 + b22
        add(matrixB21, matrixB22, s8, newMSize);
        // s9 = a11 - a21
        sub(matrixA11, matrixA21, s9, newMSize);
        // s10 = b11 + b12
        add(matrixB11, matrixB12, s10, newMSize);
        // p1 = a11 * s1
        strassenR(matrixA11, s1, p1, newMSize);
        // p2 = s2 * b22
        strassenR(s2, matrixB22, p2, newMSize);
        // p3 = s3 * b11
        strassenR(s3, matrixB11, p3, newMSize);
        // p4 = a22 * s4
        strassenR(matrixA22, s4, p4, newMSize);
        // p5 = s5 * s6
        strassenR(s5, s6, p5, newMSize);
        // p6 = s7 * s8
        strassenR(s7, s8, p6, newMSize);
        // p7 = s9 * s10
        strassenR(s9, s10, p7, newMSize);
        // c11 = p5 + p4 - p2 + p6
        add(p5, p4, tempMatrixA, newMSize); // p5 + p4
        add(tempMatrixA, p6, tempMatrixB, newMSize); // (p5 + p4) + p6
        sub(tempMatrixB, p2, matrixC11, newMSize); // (p5 + p4 + p6) - p2
        // c12 = p1 + p2
        add(p1, p2, matrixC12, newMSize);
        // c21 = p3 + p4
        add(p3, p4, matrixC21, newMSize);
        // c22 = p5 + p1 - p3 + p7
        add(p5, p1, tempMatrixA, newMSize); // p5 + p1
        sub(tempMatrixA, p3, tempMatrixB, newMSize); // (p5 + p1) - p3
        sub(tempMatrixB, p7, matrixC22, newMSize); // (p5 + p1 - p3) - p7
        // group into matrixC
        for (int i = 0; i < newMSize ; i++) {
            for (int j = 0 ; j < newMSize ; j++) {
                matrixC[i][j] = matrixC11[i][j];
                matrixC[i][j + newMSize] = matrixC12[i][j];
                matrixC[i + newMSize][j] = matrixC21[i][j];
                matrixC[i + newMSize][j + newMSize] = matrixC22[i][j];
            }
        }
        return matrixC;
    }
}


