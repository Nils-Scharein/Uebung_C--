#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
private:
    char *str; 

public:
    //Constructor
    Mystring();
    Mystring(const char *s);
    //Coppy
    Mystring(const Mystring &source);
    //Deconstructor 
    ~Mystring();

    //functions 
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif