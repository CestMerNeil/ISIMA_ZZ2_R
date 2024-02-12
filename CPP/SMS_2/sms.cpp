#include "sms.hpp"

int Message::cle = 0;

void Telephone::textoter(std::string dest, std::string text)
{
    try
    {
        Telephone &t = reseau->trouveTel(dest);
        t.addMessage();
        addMessage();
    }
    catch (MauvaisNumero &e)
    {
        addMessage();
    }
}

void Telephone::mmser(std::string dest, MMS* mms)
{
    try
    {
        Telephone &t = reseau->trouveTel(dest);
        t.addMessage();
        addMessage();
        mms->setDest(dest);
        mms->setExp(this->getNumero());
    }
    catch (MauvaisNumero &e)
    {
        addMessage();
    }
}