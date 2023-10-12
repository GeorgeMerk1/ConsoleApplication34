#include <iostream>
using namespace std;

class Set
{
private: 
    int size;
    int *mul;

    friend ostream& operator<< (ostream& output, const Set& mule);
    friend istream& operator>> (istream& input, Set& mule);
public: 
    explicit Set(int size = 1);
    Set(const Set& mule);
    ~Set();
    int length() const;

    int& operator[](int);
    int operator[](int) const;

    void addel()
    {
        Set m();

    }
    friend Set operator+ (Set set, int x);
};

Set operator+ (Set set, int x)
{

}


ostream& operator<< (ostream& output, const Set& mule)
{
    for (int i = 0; i < mule.size; i++)
    {
        output << mule[i] << ", ";
    }
    return output;
}


istream& operator>> (istream& input, Set& mule)
{
    for (int i = 0; i < mule.size; i++)
    {
        input >> mule[i];
    }
    return input;
}

Set::Set(int _size)
{
    this->size = _size;
    mul = new int(_size);

}


Set::Set(const Set& mule)
{
    size = mule.size;
    mul = new int(mule.size);
    for (int i = 0; i < mule.size; i++)
    {
        mul[i] = mule[i];
    }

}

Set::~Set()
{
    delete[] mul;
}


int& Set::operator[](int index) {
    if (index < 0 or index >= size) {
        cout << "Индекс за пределами массива";
    }
    return mul[index];
}

int Set::operator[](int index) const {
    if (index < 0 or index >= size) {
        cout << "Индекс за пределами массива";
    }
    return mul[index];
}
int main()
{
    setlocale(LC_ALL, "rus");
    Set m1;
    cout << m1;

}

