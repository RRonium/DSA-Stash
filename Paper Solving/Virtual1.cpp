#include <iostream>
using namespace std;
class Person
{
    public:
    string name;
    Person(string name)
    {
        this->name=name;
    }
};
class Faculty : virtual public Person
{
    public:
    int facID;
    Faculty(int id, string name) : Person(name)
    {
        facID=id;
    }
};
class Student : virtual public Person
{
    public:
    int stuID;
    Student(int id, string name) : Person(name)
    {
        stuID=id;
    }
};
class TeachingAssistant : public Faculty, public Student
{
    public:
    TeachingAssistant(int id, string name) : Person(name), Faculty(id,name), Student(id,name)
    {}
};
int main()
{
    TeachingAssistant ta(1,"Sannidhya");
    return 0;
}