#ifndef _TOKEN_H
#define _TOKEN_H

#include <string>

struct Token {
	Token(std::string word,
		std::string attr,
		unsigned int innercode,
		unsigned int line,
		unsigned int offset)
		: _lexecal(word), //token����
		_attribute(attr), //��ʶ������
		_innerCode(innercode),//��¼���ŵ����
		_line(line), //��ʾtoken���ĸ�λ��
		_offset(offset) {}

	// data member
	std::string _lexecal;
	std::string _attribute;
	unsigned int _innerCode;
	unsigned int _line;
	unsigned int _offset;

}; // struct Token	

#endif _TOKEN_H