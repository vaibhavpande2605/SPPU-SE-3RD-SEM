#include<iostream>
using namespace std;

class Personal_Information
{
    string dob, lic_no, blood_grp;
public:
    Personal_Information();
    Personal_Information(Personal_Information &);
    ~Personal_Information()
    {
        cout << "\nDatabase deleted successfully !!!";
    }
    friend class Student;
};

class Student
{
    string name, address, cls;
    int roll;
    char div;
    long long mob_no;
    static int Count;
public:
    void create_database(Personal_Information &);
    void display_database(Personal_Information &);
    inline static void increment_count()
    {
        Count++;
    }
    inline static void show_count()
    {
        cout << "\nTotal no. of students :" << Count << endl;
    }
    Student();
    Student(Student &);
    ~Student()
    {
        cout << endl;
    }
};

int Student :: Count;
Student :: Student()
{
    string name, address, cls;
    int roll;
    char div;
    long long mob_no;
}

Personal_Information :: Personal_Information()
{
    string dob, lic_no, blood_grp;
}

Student :: Student(Student &obj)
{
    name=obj.name;
    address=obj.address;
    cls=obj.cls;
    roll=obj.roll;
    div=obj.div;
    mob_no=obj.mob_no;
}

Personal_Information :: Personal_Information(Personal_Information &obj)
{
    dob = obj.dob;
    lic_no = obj.lic_no;
    blood_grp = obj.blood_grp;
}

void Student :: create_database(Personal_Information &obj)
{
    cout << "\nEnter your name :" ;
    cin >> name;
    cout << "Enter your roll no :" ;
    cin >> roll;
    cout << "Enter your class :" ;
    cin >> cls;
    cout << "Enter your division :" ;
    cin >> div;
    cout << "Enter your date of birth :" ;
    cin >> obj.dob;
    cout << "Enter your blood group :" ;
    cin >> obj.blood_grp;
    cout << "Enter your address :" ;
    cin >> address;
    cout << "Enter your mobile number :" ;
    cin >> mob_no;
    cout << "Enter your driving license no :" ;
    cin >> obj.lic_no;
}

void Student :: display_database(Personal_Information &obj)
{
    cout << "\nName :" << name;
    cout << "\nRoll no :" << roll;
    cout << "\nClass :" << cls;
    cout << "\nDivision :" << div;
    cout << "\nDate of birth :" << obj.dob;
    cout << "\nBlood group :" << obj.blood_grp;
    cout << "\nAddress :" << address;
    cout << "\nMobile number :" << mob_no;
    cout << "\nDriving license no :" << obj.lic_no << endl;
}

int main()
{
    int n;
    char ch;
    cout << "Enter no of students :" ;
    cin >> n;
    Student *stud_obj = new Student[n];
    Personal_Information *per_obj = new Personal_Information[n];
    cout << "\nEnter your information below" << endl;
    for(int i=0;i<n;i++)
    {
        stud_obj[i].create_database(per_obj[i]);
        stud_obj[i].increment_count();
    }
    cout << "\nDisplaying your database ..." << endl;
    stud_obj[0].show_count();
    for(int i=0;i<n;i++)
    {
        stud_obj[i].display_database(per_obj[i]);
    }
    cout << "\nDo you want to delete your database ? (y/n) :";
    cin >> ch;
    if(ch=='y')
        delete [] per_obj;
        delete [] stud_obj;
    return 0;
}
