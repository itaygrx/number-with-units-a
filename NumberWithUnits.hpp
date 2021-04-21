#pragma once
#include <string>
#include <iostream>
#include <istream>
#include <stdbool.h>
#include <map>

class NumberWithUnits{

private:
double _Num_size;
std::string _Num_unit;

public:
NumberWithUnits(double num, std::string unit) : _Num_size(num), _Num_unit(unit) {}                                                    
static void read_units(std::ifstream& file);
NumberWithUnits operator+(const NumberWithUnits &b);
NumberWithUnits operator-(const NumberWithUnits &b);
NumberWithUnits operator+=(const NumberWithUnits &b);
bool operator>(const NumberWithUnits &b) const;
bool operator<=(const NumberWithUnits &b) const;
bool operator==(const NumberWithUnits &b) const;
friend NumberWithUnits operator*(double n ,const NumberWithUnits &obj);
friend NumberWithUnits operator-(const NumberWithUnits &obj);
friend std::ostream& operator<<(std::ostream& os , const NumberWithUnits& obj);
friend std::istream& operator>>(std::istream& os , const NumberWithUnits& obj);
};



