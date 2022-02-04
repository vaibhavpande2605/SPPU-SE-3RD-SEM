first_row_count = int(input("Enter the number of rows of 1st matrix :"))
first_col_count = int(input("Enter the number of columns of 1st matrix :"))

second_row_count = int(input("\nEnter the number of rows of 2nd matrix :"))
second_col_count = int(input("Enter the number of columns of 2nd matrix :"))

first_matrix = []
second_matrix = []


def transpose(matrix):
    tran = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            tran[j][i] = matrix[i][j]
    print("\nTranspose of matrix is :", *tran, sep="\n")


if (first_row_count == second_row_count) and (second_row_count == second_col_count):
    print("\nEnter the elements of first matrix row-wise :")
    for i in range(0, first_row_count):
        row = []
        input_variable = None
        for j in range(0, first_col_count):
            input_variable = int(input())
            row.append(input_variable)
        first_matrix.append(row)

    print("\nEnter the elements of second matrix row-wise :")
    for i in range(0, second_row_count):
        row = []
        input_variable = None
        for j in range(0, second_col_count):
            input_variable = int(input())
            row.append(input_variable)
        second_matrix.append(row)

    print("\nAddition is :")
    result = [[first_matrix[i][j] + second_matrix[i][j] for j in range(len(first_matrix[0]))] for i in
              range(len(first_matrix))]
    for a in result:
        print(a)

    print("\nSubtraction is :")
    result = [[first_matrix[i][j] - second_matrix[i][j] for j in range(len(first_matrix[0]))] for i in
              range(len(first_matrix))]
    for b in result:
        print(b)

    print("\nMultiplication is :")
    result = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
    for i in range(len(first_matrix)):
        for j in range(len(second_matrix[0])):
            for k in range(len(second_matrix)):
                result[i][j] += first_matrix[i][k] * second_matrix[k][j]
    for c in result:
        print(c)

    transpose(first_matrix)
    transpose(second_matrix)

elif first_col_count == second_row_count:
    print("\nEnter the elements of first matrix row-wise :")
    for i in range(0, first_row_count):
        row = []
        input_variable = None
        for j in range(0, first_col_count):
            input_variable = int(input())
            row.append(input_variable)
        first_matrix.append(row)

    print("\nEnter the elements of second matrix row-wise :")
    for i in range(0, second_row_count):
        row = []
        input_variable = None
        for j in range(0, second_col_count):
            input_variable = int(input())
            row.append(input_variable)
        second_matrix.append(row)

    print("\nAddition and subtraction can't be done of given matrices !!!")

    print("\nMultiplication is :")
    result = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
    for i in range(len(first_matrix)):
        for j in range(len(second_matrix[0])):
            for k in range(len(second_matrix)):
                result[i][j] += first_matrix[i][k] * second_matrix[k][j]
    for c in result:
        print(c)

    transpose(first_matrix)
    transpose(second_matrix)

else:
    print("\nAddition, subtraction and multiplication can't be done of given matrices !!!")
