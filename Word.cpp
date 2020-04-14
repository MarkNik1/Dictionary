#include "Word.h"
#include <iostream>

#include <string>

Word::Word(std::string original, std::string translation) : original(original)
{
	vTranlations.push_back(translation);
	grade = 0;
}


Word::~Word()
{
}

std::string Word::getOriginal() const
{
	return original;
}

std::vector<std::string> Word::getVecTranslations() const
{
	return vTranlations;
}

short int Word::getGrade() const
{
	return grade;
}

void Word::setNewTranslation(std::string translation)
{
	vTranlations.push_back(translation);
}

std::ostream & operator<<(std::ostream & os, const Word & obj)
{
	os << obj.getOriginal()<< "    ";

	for (auto it : obj.getVecTranslations())
	{
		os << it<<"    ";
	}
	os << obj.getGrade();


	return os;
}
