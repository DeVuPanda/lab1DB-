#ifndef ORDER_H
#define ORDER_H

#include <string>

using namespace std;

class Order {
public:
    Order() : id_(0), customer_id_(0), item_(""), quantity_(0), order_date_(""), delivery_date_("") {}
    Order(int id, int customer_id, const string& item, int quantity, const string& order_date, const string& delivery_date) :
            id_(id), customer_id_(customer_id), item_(item), quantity_(quantity), order_date_(order_date), delivery_date_(delivery_date) {}

    int id() const { return id_; }
    void set_id(int id) { id_ = id; }
    int customer_id() const { return customer_id_; }
    void set_customer_id(int customer_id) { customer_id_ = customer_id; }
    string item() const { return item_; }
    void set_item(const string& item) { item_ = item; }
    int quantity() const { return quantity_; }
    void set_quantity(int quantity) { quantity_ = quantity; }
    string order_date() const { return order_date_; }
    void set_order_date(const string& order_date) { order_date_ = order_date; }
    string delivery_date() const { return delivery_date_; }
    void set_delivery_date(const string& delivery_date) { delivery_date_ = delivery_date; }

    void write(ostream& os) const;
    void read(istream& is);


    int id_;
    int customer_id_;
    string item_;
    int quantity_;
    string order_date_;
    string delivery_date_;
};

#endif

