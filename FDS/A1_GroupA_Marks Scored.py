n = int(input("Enter number of students :"))
marks_list = []
absent = []
print("\nNote : Please enter -1 if Student is Absent :\n")
count = 0

for i in range(n):
    m = int(input("Enter marks :"))
    if m == -1:
        count += 1
        student = input("Enter the Name of Absent Student :")
        absent.append(student)
        continue
    else:
        marks_list.append(m)


def average():
    sumOfMarks = 0
    num = 0
    for j in range(len(marks_list)):
        if marks_list[j] != -999:
            sumOfMarks += marks_list[j]
            num += 1
    avg = sumOfMarks / num
    return avg


def maximum():
    for k in range(len(marks_list)):
        if marks_list[k] != -999:
            max_marks = marks_list[0]
            break
    for k in range(1, len(marks_list)):
        if marks_list[k] > max_marks:
            max_marks = marks_list[k]
    return max_marks


def minimum():
    for l in range(len(marks_list)):
        if marks_list[l] != -999:
            min_marks = marks_list[0]
            break
    for l in range(1, len(marks_list)):
        if marks_list[l] < min_marks:
            min_marks = marks_list[l]
    return min_marks


x = 0
res = marks_list[0]
for n in marks_list:
    freq = marks_list.count(n)
    if freq > x:
        x = freq
        res = n

print("\nAverage Score of Class is :", average())
print("\nHighest Score of Class is :", maximum())
print("\nLowest Score of Class is :", minimum())
print("\nNo of Absent Students :", count)
print("\nName of the student Absent for Exam :", absent)
print("\nMost Frequent Marks is :", res)
