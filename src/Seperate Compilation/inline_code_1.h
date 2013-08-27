#include <string>

class student {
public:
    student();
    int getage();
    void setage(int update);
    int getID();
    void setID(int update);
    string getname();
    void setname(string update);
private:
    int age;
    int ID;
    string name;
};
