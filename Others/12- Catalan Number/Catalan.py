def catalan(n):
    cat_ = 1
    # For the first number
    print(cat_, " ", end='')  # C(0)
    # Iterate till N
    for i in range(1, n):
        # Calculate the number
        # and print it
        cat_ *= (4 * i - 2);
        cat_ //= (i + 1);
        print(cat_, " ", end='')