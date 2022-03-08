# Function to find out first n terms (considering 4 as 0th term) of Lucas-Lehmer series.
def LucasLehmer(n):
    # the 0th term of the series is 4.
    current_val = 4;
    # create an array to store the terms.
    series = []
    # compute each term and add it to the array.
    series.append(current_val)
    for i in range(n):
        current_val = current_val * current_val - 2;
        series.append(current_val);
    # print out the terms one by one.
    for i in range(n + 1):
        print("Term", i, ":", series[i])