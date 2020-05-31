#ifndef _TOKEN_H
#define _TOKEN_H

#include <string>

struct Token {
	Token(std::string word,
		std::string attr,
		unsigned int innercode,
		unsigned int line,
		unsigned int offset)
		: _lexecal(word), //token单词
		_attribute(attr), //标识的属性
		_innerCode(innercode),//记录符号的序号
		_line(line), //表示token在哪个位置
		_offset(offset) {}

	// data member
	std::string _lexecal;
	std::string _attribute;
	unsigned int _innerCode;
	unsigned int _line;
	unsigned int _offset;

}; // struct Token	

#endif _TOKEN_H