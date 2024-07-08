// GradeBook.h
#include <string>

class GradeBook
{
public:
    GradeBook(std::string);
    void setCourseName(std::string);
    std::string getCourseName();
    void displayMessage();

private:
    std::string courseName;
};
