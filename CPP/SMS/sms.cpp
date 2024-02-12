#include "sms.hpp"

Telephone::Telephone() : numero(""), reseau(), nbMsg(0) {}
Telephone::Telephone(std::string num) : numero(num), nbMsg(0) {}
bool Telephone::operator<(const Telephone &t)
{
    return numero < t.getNumero();
}

Telephone::Telephone(std::string num, Reseau *r) : numero(num), reseau(r), nbMsg(0) {}

void Telephone::textoter(std::string des, std::string text)
{
    nbMsg++;
    try
    {
        Telephone &a = reseau->trouveTel(des);
        a.nbMsg++;
    }
    catch(MauvaisNumero& e) {
        std::cout << "" << std::endl;
    }
}

void Telephone::mmser(std::string str, MMS *mms)
{
    nbMsg++;
    Telephone &t = reseau->trouveTel(str);
    mms->setExp(this->getNumero());
    mms->setDes(t.getNumero());
    t.nbMsg++;
}

void Reseau::ajouter(std::string num)
{
    Telephone tele(num, this);
    list.push_back(tele);
    sort(list.begin(), list.end());
}

std::string Reseau::lister()
{
    std::string res;
    for (auto i : list)
    {
        res += i.toString();
        res += '\n';
    }
    return res;
}

Telephone &Reseau::trouveTel(const std::string &num)
{
    for (auto &i : list)
    {
        if (num == i.getNumero())
        {
            return i;
        }
    }
    throw MauvaisNumero();
}

SMS::SMS(std::string exp, std::string des, std::string date) : exp(exp), des(des), date(date) {}
void SMS::setTexte(std::string text) { this->text = text; }
std::string SMS::getTexte() const { return text; }
std::string SMS::afficher() const { return text; }

int Message::nextId = 0;

std::string Media::afficher() const { return index; }
Media::Media(std::string std) : index(std) {}

Image::Image() : Media::Media("[[image]]") {}
Son::Son() : Media::Media("[[son]]") {}
Video::Video() : Media::Media("[[video]]") {}