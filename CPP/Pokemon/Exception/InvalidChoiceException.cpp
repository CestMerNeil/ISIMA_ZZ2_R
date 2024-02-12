#include <exception>
#include <string>

class InvalidChoiceException : public std::exception
{
    /*
private:
    std::string msg;
public:
    InvalidChoiceException(std::string msg) : msg(msg) {}
    ~InvalidChoiceException() {}
    virtual const char* what() const throw() {
        return msg.c_str();
    }
    */
   public:
   const char * what() const noexcept override {
    return "MSG";
   }
};