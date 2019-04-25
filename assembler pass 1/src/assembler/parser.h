#ifndef ASSEMBLER_PARSER_H_
#define ASSEMBLER_PARSER_H_
#include "mnemonicinstruction.h"
#include <string>
#include <map>
#include <regex>

class info {

public:
	unsigned int formate :4;
	string opcode;
	unsigned int operands :2;
	info(unsigned int f, string opc, unsigned int opr) {
		this->formate = f;
		this->opcode = opc;
		this->operands = opr;
	}
};

class parser {

public:

	map<string, info> optab;
	map<string, info> derctivetab;
	map<string, int> register_tab;

	parser();
	virtual ~parser();
	mnemonic_instruction parse(string ins);
private:
	void load_optab();
	void add(string name, info i);
	info make_info(unsigned int f, string s, unsigned int opr);
	void check_mnemonic(mnemonic_instruction*x,string op);
	void one_field(mnemonic_instruction*x, string field);
	void two_field(mnemonic_instruction*x,vector<string>& fields);
	void three_field(mnemonic_instruction*x,vector<string>& fields);
	void four_field(mnemonic_instruction*x,vector<string>& fields);
	void valid_syntax(mnemonic_instruction& x);
	void load_register_tab();
	vector<string> get_groups(smatch m);
	void load_derictve();
};

#endif /* ASSEMBLER_PARSER_H_ */
