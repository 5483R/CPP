#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
class Contact{

    private:
        std::string fname;
        std::string sname;
        int contact;
        std::string surnom;
        std::string secret;
    public:
        std::string get_fname();
        std::string get_sname();
        int get_contact();
        std::string get_secret();
        std::string get_surnom();
        void set_sname(std::string sname);
        void set_contact(int contact);
        void set_fname(std::string fname);
        void set_surnomn(std::string surnom);
        void set_secret(std::string secret);
        
};
#endif