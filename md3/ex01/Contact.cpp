#include "Contact.hpp"

void Contact::set_sname(std::string sname)
{
    this->sname = sname;
}
void Contact::set_fname(std::string fname)
{
    this->fname = fname;
}
void Contact::set_contact(std::string contact)
{
    this->contact = contact;
}
void Contact::set_surnom(std::string surnom)
{
    this->surnom = surnom;
}
void Contact::set_secret(std::string secret)
{
    this->secret = secret;
}
std::string Contact::get_fname()
{
    return this->fname;
}
std::string Contact::get_sname()
{
    return this->sname;
}
std::string Contact::get_contact()
{
    return this->contact;
}

std::string Contact::get_secret()
{
    return this->secret;
}
std::string Contact::get_surnom()
{
    return this->surnom;
}
