def union(students_list1, students_list2):
    union_list = students_list1.copy()
    for a in students_list2:
        if a not in union_list:
            union_list.append(a)
    return union_list


def intersection(students_list1, students_list2):
    intersection_list = []
    for b in students_list1:
        if b in students_list2:
            intersection_list.append(b)
    return intersection_list


def difference(students_list1, students_list2):
    difference_list = []
    for d in students_list1:
        if d not in students_list2:
            difference_list.append(d)
    return difference_list


def only_c(students_list1, students_list2):
    only_cList = difference(union(students_list1, students_list2), students_list2)
    return only_cList


def only_b(students_list1, students_list2):
    only_bList = difference(union(students_list1, students_list2), students_list1)
    return only_bList


def neither_cb(students_list1, students_list2, students_list3):
    neither_cbList = difference(students_list3, (union(students_list1, students_list2)))
    print("\nNo of students who play neither Cricket nor Badminton :", len(neither_cbList))
    print("Set of students who play neither Cricket nor Badminton :", neither_cbList)


se_computer = []
seStudentsNo = int(input("Enter the number of students in SE Computer :"))
print("Enter the roll no of students in SE Computer :")
for i in range(0, seStudentsNo):
    students = int(input())
    se_computer.append(students)
print("The set of students in SE Computer is :", se_computer)

cricket = []
cricketNo = int(input("\nEnter the number of students who play Cricket :"))
print("Enter the roll no of students who play Cricket :")
for j in range(0, cricketNo):
    cricket_students = int(input())
    cricket.append(cricket_students)
print("The set of students playing cricket is :", cricket)

badminton = []
badmintonNo = int(input("\nEnter the number of the students who play Badminton :"))
print("Enter the roll no of students who play Badminton :")
for k in range(0, badmintonNo):
    badminton_students = int(input())
    badminton.append(badminton_students)
print("The set of students playing Badminton is :", badminton)

flag = 1
while flag == 1:
    print("\nSelect any option you want :")
    print("1] Set of students who play either Cricket or Badminton or Both.")
    print("2] Set of students who play both Cricket and Badminton.")
    print("3] Set of students who play only Cricket.")
    print("4] Set of students who play only Badminton.")
    print("5] Number of students who play neither Cricket nor Badminton.")
    print("6] Exit.")
    option = int(input("\nEnter Option :"))

    if option == 1:
        print("\nSet of students who play either Cricket or Badminton or Both :", union(cricket, badminton))
        con = input("\nDo you want to close (y/n) :")
        if con == "y":
            break
        else:
            flag = 1

    elif option == 2:
        print("\nSet of students who play both Cricket and Badminton :", intersection(cricket, badminton))
        con = input("\nDo you want to close (y/n) :")
        if con == "y":
            break
        else:
            flag = 1

    elif option == 3:
        print("\nSet of students who play only Cricket :", only_c(cricket, badminton))
        con = input("\nDo you want to close (y/n) :")
        if con == "y":
            break
        else:
            flag = 1

    elif option == 4:
        print("\nSet of students who play only Badminton :", only_b(cricket, badminton))
        con = input("\nDo you want to close (y/n) :")
        if con == "y":
            break
        else:
            flag = 1

    elif option == 5:
        neither_cb(cricket, badminton, se_computer)
        con = input("\nDo you want to close (y/n) :")
        if con == "y":
            break
        else:
            flag = 1

    elif option == 6:
        flag = 0

    else:
        print("\nPlease select correct option !!")
        con = input("\nDo you want to close (y/n) :")
        if con == "y":
            break
        else:
            flag = 1
