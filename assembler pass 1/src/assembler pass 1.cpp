#include <iostream>
#include "assembler/assembler.h"
#include "assembler/parser.h"
#include "assembler/mnemonicinstruction.h"
#include <sstream>
#include <vector>
#include <iomanip>
using namespace std;
template<typename T>
long long hex_to_dec(T h) {
	long long l;
	std::stringstream ss;
	ss << h;
	ss >> std::hex >> l;
	return l;
}
template<typename T>
string dec_to_hex(T d) {
	stringstream ss;
	ss << std::hex << d;
	return ss.str();
}
vector<string> get_groups(smatch m) {
	vector<string> v;
	for (long long unsigned int i = 1; i < m.size(); i++) {
		if (!m[i].str().empty()) {
			cout << i << " : " << m[i] << endl;
			v.push_back(m[i].str());
		}
	}
	return v;
}
int main() {
//	parser p;
//	mnemonic_instruction m;
//	m = p.parse("rsub");
//	cout<<m.getMnemonic()<<"  m"<<endl;
//	regex instruction("^\\s*(?:(\\S+)?\\s+)?"
//		"(\\s*[+]?[\\w]+)\\s*"
//		"(?:\\s+([#@,\\w\\s]+)?\\s*)?"
//		"(?:\\s+(\\.[\\s\\S]+)?)?$");
//	string s = "adsdnasd adkajdh .sdfkjskd ";
//	smatch m;
//	regex_match(s, m, instruction);
//	cout << m.size() << endl;
//	cout << m.str() << endl;
//	vector<string> v = get_groups(m);
//	cout << v.size()<<endl<<v[0] << endl;
	cout <<std::left<<setw(20)<<"Artist" <<setw(20)<< "Title" <<setw(20)<< "Price"<<endl;
	cout <<std::left<<setw(20)<<"Merle"<<setw(20)<<"Blusssnnnnnnnn\n nnnnnvvvc" <<setw(20)<< 12<<endl;
	return 0;
}
