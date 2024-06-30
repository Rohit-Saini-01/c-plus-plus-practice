#include <iostream>

class Student
{
    int roll_no;
    static int admin_no;
    std::string name;

public:
    Student(std::string name_arg)
    {
        admin_no++;
        roll_no = admin_no;
        name = name_arg;
    }

    int display()
    {
        std::cout << "Name of the student is " << name << "\n"
                  << "Roll number is " << roll_no<<"\n";
        return 0;
    }
};

int Student::admin_no = 0;

int main()
{
    Student stu("Rohit");
    stu.display();

    Student stu_2("Meenakshi");
    stu_2.display();

    return 0;
}