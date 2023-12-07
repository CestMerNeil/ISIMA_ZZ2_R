#ifndef BAVARDE_HPP
#define BAVARDE_HPP

#include <iostream>

class Bavarde {
    private:
    int m_id;
    static int s_count;

    public:
    Bavarde();
    Bavarde(int);
    ~Bavarde();
    void afficher();
    void fonction(Bavarde);
}; //bizarre(1);

#endif