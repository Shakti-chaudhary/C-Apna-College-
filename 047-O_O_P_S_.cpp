#include <iostream>
using namespace std;

class student
{
public:
    // ============== Data Members ========================

    string name;
    int age;
    int gender;

    // ========= Members Functions =====================

    void setName(string s)
    {
        name = s;
    }
    void setAge(int a)
    {
        age = a;
    }

    void setGender(int g)
    {
        gender = g;
    }

    // ==== Default Constructer =======================

    student()
    {
        cout << "Default Constructer Invoked " << endl;
    }

    // ===== Parametrized Constructer =================

    student(string s, int a, int g)
    {
        name = s;
        age = a;
        gender = g;
    }

    // ===== Copy Counstructer =========================

    student(student &a)
    {
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    // ======== Destructer =============================

    ~student()
    {
        cout << age << " " << name << " " << gender << endl;
    }

    // ====== Operator Overloading =====================

    bool operator == (student s)
    {
        if (name == s.name && age == s.age && gender == s.gender)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    student a;
    a.setName("Raja");
    a.setAge(43);
    a.setGender(0);

    student s("Mohan", 16, 0);
    student r(a);

    if (a == r)
    {
        cout << "Both the objects are same : " << endl;
    }

    return 0;
}