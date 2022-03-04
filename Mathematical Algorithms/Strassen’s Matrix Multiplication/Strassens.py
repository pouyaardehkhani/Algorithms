import numpy as np


class Strassens:
    @staticmethod
    def split(matrix):
        row, col = matrix.shape
        row2, col2 = row // 2, col // 2
        return matrix[:row2, :col2], matrix[:row2, col2:], matrix[row2:, :col2], matrix[row2:, col2:]

    @staticmethod
    def multiply(x, y):
        if len(x) == 1:
            return x * y
        a, b, c, d = Strassens.split(x)
        e, f, g, h = Strassens.split(y)
        p1 = Strassens.multiply(a, f - h)
        p2 = Strassens.multiply(a + b, h)
        p3 = Strassens.multiply(c + d, e)
        p4 = Strassens.multiply(d, g - e)
        p5 = Strassens.multiply(a + d, e + h)
        p6 = Strassens.multiply(b - d, g + h)
        p7 = Strassens.multiply(a - c, e + f)
        c11 = p5 + p4 - p2 + p6
        c12 = p1 + p2
        c21 = p3 + p4
        c22 = p1 + p5 - p3 - p7
        c = np.vstack((np.hstack((c11, c12)), np.hstack((c21, c22))))
        return c