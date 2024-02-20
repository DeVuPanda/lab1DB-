#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

using namespace std;

class Customer {
public:
    Customer() : id_(0), name_(""), email_(""), phone_(""), address_("") {}
    Customer(int id, const string& name, const string& email, const string& phone, const string& address) :
            id_(id), name_(name), email_(email), phone_(phone), address_(address) {}

    int id() const { return id_; }
    void set_id(int id) { id_ = id; }
    string name() const { return name_; }
    void set_name(const string& name) { name_ = name; }
    string email() const { return email_; }
    void set_email(const string& email) { email_ = email; }
    string phone() const { return phone_; }
    void set_phone(const string& phone) { phone_ = phone; }
    string address() const { return address_; }
    void set_address(const string& address) { address_ = address; }

    void write(ostream& os) const;
    void read(istream& is);

    int id_;
    string name_;
    string email_;
    string phone_;
    string address_;
};

#endif