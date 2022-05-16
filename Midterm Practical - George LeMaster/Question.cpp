#include "Question.h"

#include <string>
#include <iostream>

Question::Question(std::string _questionInput, std::string _optionOneInput, std::string _optionTwoInput, std::string _optionThreeInput, std::string _optionFourInput, int _correctAnswer, std::string _incorrectResponse)
{
	question = _questionInput;

	optionOne = _optionOneInput;
	optionTwo = _optionTwoInput;
	optionThree = _optionThreeInput;
	optionFour = _optionFourInput;

	correctAnswer = _correctAnswer;

	incorrectResponse = _incorrectResponse;
}

void Question::DisplayQuestion()
{
	system("cls");

	std::cout << question << std::endl;

	std::cout << "[1]: " << optionOne << std::endl;
	std::cout << "[2]: " << optionTwo << std::endl;
	std::cout << "[3]: " << optionThree << std::endl;
	std::cout << "[4]: " << optionFour << std::endl;

	std::cout << "Please select an answer by entering an Int, 1 through 4: ";

}

