#include <iostream>
#include <string>

typedef std::map<std::string, std::string> mss;
mss m;

int main(int, char**) {
    m.insert(pair<std::string, std::string>("loic", "405042"));
    m.insert(make_pair("pierre", "384929"));
    m.insert(make_pair("SOS C++ 24/7", "407662"));
    m["secours"] = "42";

    mss::iterator it = m.find("loic");
    if(it == m.end()) cout << "et moi ?";

}
