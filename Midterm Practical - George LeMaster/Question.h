#pragma once

#include <string>

class Question
{

public:

	Question(std::string _questionInput, std::string _optionOneInput, std::string _optionTwoInput, std::string _optionThreeInput, std::string _optionFourInput, int _correctAnswer, std::string _incorrectResponse);
	void DisplayQuestion();

	std::string question;

	std::string optionOne;
	std::string optionTwo;
	std::string optionThree;
	std::string optionFour;

	int correctAnswer;

	std::string incorrectResponse;

};

