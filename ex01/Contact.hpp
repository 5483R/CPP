#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
class Contact{

    private:
        std::string fname;
        std::string sname;
        std::string contact;
        std::string surnom;
        std::string secret;
    public:
        std::string get_fname();
        std::string get_sname();
        std::string get_contact();
        std::string get_secret();
        std::string get_surnom();
        void set_sname(std::string sname);
        void set_contact(std::string contact);
        void set_fname(std::string fname);
        void set_surnom(std::string surnom);
        void set_secret(std::string secret);
        
};
#endif