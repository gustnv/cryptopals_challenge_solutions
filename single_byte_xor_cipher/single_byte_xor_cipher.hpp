#ifndef SINGLE_BYTE_XOR_CHARACTER_HPP
#define EX03

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <sstream>
#include <iomanip>
using namespace std;

string single_byte_xor_cipher(string encripted_hex);
int find_key(vector<unsigned char>);
vector<unsigned char> hex_to_bytes(const string& encripted_hex);

#endif
