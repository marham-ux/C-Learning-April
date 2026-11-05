#include <iostream>

using namespace std;

class Product
{
    int code;
    string name;
    double price;
    double stock;

public:
public:
    Product(int c, string n, double p, int s) : code(c), name(n), price(p), stock(s) {}
    int getCode() { return code; }
    string getName() { return name; }
    double getPrice() { return price; }
    int getStock() { return stock; }
    void setPrice(double p)
    {
        if (p > 0)
            price = p;
    }
    bool sell(int q)
    {
        if (q <= 0 || q > stock)
        {
            cout << " Not enough stock of " << name << " for " << q << " piece(s)" << endl;
            return false;
        }
        stock -= q;
        return true;
    }
    void restock(int q)
    {
        if (q > 0)
            stock += q;
    }
};

class orderItem
{
    Product *Product2;
    int quantity;
    double savedPrice;

public:
    orderItem(Product *p, int q)
        : Product2(p), quantity(q), savedPrice(p->getPrice()) {}
    void show()
    {
        cout << "   " << Product2->getName() << " x" << quantity << endl;
    }

    double getSubtotal() { return savedPrice * quantity; }
    void giveBack() { Product2->restock(quantity); }
};
}
;

class Order;

class Customer
{
    string name;
    string phone;
    Order *orders[10];
    int orderCount;

public:
    Customer(string n, string p) : name(n), phone(p), orderCount(0) {}
    string getName() { return name; }
    void addOrder(Order *o)
    {
        if (orderCount < 10)
            orders[orderCount++] = o;
    }
};

class Order
{

    const int number; // given automatically
    static int nextNumber;
    Customer *customer;  // order knows its customer, customer does not die with the order
    orderItem items[10]; // COMPOSITION: items belong to this order only
    int itemCount;
    bool cancelled;
    Order(Customer *c) : number(nextNumber++), customer(c), itemCount(0), cancelled(false)
    {
        // c->addOrder(this);
    }
    void additem(Product *p, int q)
    {
        if (q > 10 || cancelled)
            return;
        if (p->sell(q))
            items[itemCount++] = orderItem(p, q);
    }
    double gettotal()
    {
        int t = 0;
        for (int i = 0; i < itemCount; i++)
        {
            t += items[i].getSubtotal();
        }
        return t;
    }
    void cancel()
    {
        if (cancelled)
            return;
        for (int i = 0; i < itemCount; i++)
            items[i].giveBack(); // stock returns to shop
        itemCount = 0;           // items are gone
        cancelled = true;
    }
}

/*
The problem:
• The shop sells Products. Each Product has a code, a name, a price and the quantity in stock.
• A Customer can register with a name and phone number, and can place many orders.
• One order can contain several items, for example 2 shirts and 1 jeans. Each item records how
many pieces were bought.
• Every order must get its own order number automatically, and the Customer sees the total bill.
• If an order is cancelled, its items are gone, but the Product stays in the shop and the Customer
stays registered.
• If the shop changes a Product's price next week, the bills of old orders must not change.
• The owner also wants to see all orders of one Customer.
• Stock must never become negative, and nobody should be able to type any stock value directly.
Staff can only sell or restock.
• The person placing an order should not need to know how the bill is calculated. They only ask
the order for its total.
Your task: Design and build the order system for this shop*/