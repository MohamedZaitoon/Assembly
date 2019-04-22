#ifndef ASSEMBLER_PARSER_H_
#define ASSEMBLER_PARSER_H_
#include "mnemonicinstruction.h"
#include <string>
#include <map>
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
	parser();
	virtual ~parser();
	mnemonic_instruction parse(string ins);
private:
	void load_optab();
	void add(string name, info i);
	info make_info(unsigned int f, string s, unsigned int opr);
};

#endif /* ASSEMBLER_PARSER_H_ */
