#include <stdexcept>
#include <string>

class OutOfRangeException : public std::out_of_range {
public:
    OutOfRangeException(const std::string& message) : std::out_of_range(message) {}
};