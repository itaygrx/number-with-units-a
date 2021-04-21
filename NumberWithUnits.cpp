#include <iostream>
#include <istream>
using namespace std;

#include "NumberWithUnits.hpp"

NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits& b){
    _Num_size = _Num_size+b._Num_size;
    return *this;
    }

NumberWithUnits operator*(double n ,const NumberWithUnits& obj){return NumberWithUnits(obj._Num_size*3,obj._Num_unit);}
NumberWithUnits operator-(const NumberWithUnits& obj){return NumberWithUnits(obj._Num_size,obj._Num_unit);}
std::ostream &operator<<(std::ostream &os, const NumberWithUnits &obj){
        return (os << obj._Num_size << " " << obj._Num_unit);
}
  std::istream& operator>>(std::istream& os , const NumberWithUnits& obj){return os;}

void NumberWithUnits::read_units(std::ifstream& file){}
NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits& b){return *this;}
NumberWithUnits NumberWithUnits::operator+=(const NumberWithUnits& b){return *this;}
bool NumberWithUnits::operator>(const NumberWithUnits& b) const{return true;}
bool NumberWithUnits::operator<=(const NumberWithUnits& b) const{return true;}
bool NumberWithUnits::operator==(const NumberWithUnits& b) const{return true;}