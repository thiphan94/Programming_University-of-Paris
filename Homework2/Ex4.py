# Nu Uyen Thi PHAN - M1 VMI
def make_histo(input_file, nbin=20, height=20):
    data_list = []
    with open(input_file, "r") as f:
        for line in f:
            items = line.split(",")
            data_list = [float(item) for item in items]

    max_val = data_list[0]
    for x in data_list:
        if x > max_val:
            max_val = x

    min_val = data_list[0]
    for x in data_list:
        if x < min_val:
            min_val = x

    bin_length = (max_val - min_val) / nbin

    bin_values = [min_val + bin_length * i for i in range(21)]

    bin_counts = [0] * nbin

    for number in data_list:
        for i in range(len(bin_values) - 1):
            if number >= bin_values[i] and number <= bin_values[i + 1]:
                bin_counts[i] += 1

    max_bincount = bin_counts[0]
    for x in bin_counts:
        if x > max_bincount:
            max_bincount = x

    height_values = [height / max_bincount * i for i in bin_counts]
    height_values = [int(a) for a in height_values]

    for i in range(0, 20):
        for height_val in height_values:
            if (20 - i) <= height_val:
                print(" * ", end="")
            else:
                print(" " * 3, end="")
        print("")
    for val in bin_values:
        if int(val) < 10:
            print(int(val), " ", end="")
        else:
            print(int(val), end=" ")
