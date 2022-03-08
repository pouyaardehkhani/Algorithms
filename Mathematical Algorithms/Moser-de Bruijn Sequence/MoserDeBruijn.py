# Function to generate nth term of Moser-de Bruijn Sequence
def gen(n):
    S = [0, 1]
    for i in range(2, n + 1):
        # S(2 * n) = 4 * S(n)
        if i % 2 == 0:
            S.append(4 * S[int(i / 2)])
        # S(2 * n + 1) = 4 * S(n) + 1
        else:
            S.append(4 * S[int(i / 2)] + 1)
    z = S[n]
    return z


# Generating the first 'n' terms of Moser-de Bruijn Sequence
def moserDeBruijn(n):
    for i in range(n):
        print(gen(i), end=" ")