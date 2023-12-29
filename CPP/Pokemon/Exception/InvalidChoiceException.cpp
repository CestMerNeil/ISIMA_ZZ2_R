#include <exception>
#include <string>

class InvalidChoiceException : public std::exception
{
private:
    /* data */
    std::string msg;
public:
    InvalidChoiceException(std::string msg) : msg(msg) {}
    ~InvalidChoiceException() {}
    virtual const char* what() const throw() {
        return msg.c_str();
    }
};