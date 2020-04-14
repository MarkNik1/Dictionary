#pragma once
#include <iostream>
#include <vector>
class Word
{
public:
	Word(std::string original, std::string translation);
	~Word();

	std::string getOriginal() const;
	std::vector<std::string> getVecTranslations() const;
	short int getGrade() const;

	void setNewTranslation(std::string);


private:
	 const std::string original;
	 std::vector<std::string> vTranlations;
//for word knowledge evaluation; grade e [0...10]
	 short int grade;
};

std::ostream& operator<<(std::ostream& os, const Word& obj);