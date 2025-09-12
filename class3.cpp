#include <iostream>

template <typename T, int N, int M>
class Matrix {
private:
    T matrix[N][M];
public:
    Matrix() {};

    void set(int row, int col, T value) {
        matrix[row][col] = value;
    }

    T get(int row, int col) {
        return matrix[row][col];
    }

    void print() {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                std::cout << get(i, j) << " ";
            }
            std::cout << std::endl;
        }
    }

    Matrix operator+(const Matrix &other) const {
        Matrix result;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }
        return result;
    }
};


int main() {
    Matrix<int, 2, 2> matrix1;
    matrix1.set(0, 0, 1);
    matrix1.set(0, 1, 2);
    matrix1.set(1, 0, 3);
    matrix1.set(1, 1, 4);
    matrix1.print();
    return 0;
}