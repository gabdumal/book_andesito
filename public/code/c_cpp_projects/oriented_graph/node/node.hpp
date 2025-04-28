#ifndef __NODE_HPP__
#define __NODE_HPP__

class Node
{
private:
    unsigned long id;
    unsigned long label;
    int data;

public:
    Node(unsigned long id, unsigned long label, int data);
    ~Node() {}

    unsigned long getId() const;
    unsigned long getLabel() const;
    int getData() const;

    void setData(int data);
};

#endif // __NODE_HPP__