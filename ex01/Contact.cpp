#include "Contact.hpp"

void Contact::set_sname(std::string sname)
{
    this->sname = sname;
}
void Contact::set_fname(std::string fname)
{
    this->fname = fname;
}
void Contact::set_contact(int contact)
{
    this->contact = contact;
    
}
std::string Contact::get_fname()
{
    return this->fname;
}
std::string Contact::get_sname()
{
    return this->sname;
}
int Contact::get_contact()
{
    return this->contact;
}

std::string Contact::get_secret()
{
    return this->secret;
}
std::string Contact::get_surnomn()
{
    return this->surnomn;
}
