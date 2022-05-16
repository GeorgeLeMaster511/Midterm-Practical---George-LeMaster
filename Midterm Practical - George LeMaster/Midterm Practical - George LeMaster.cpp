#include <iostream>

#include "Question.h"

void GradeQuestion(Question checkedQuestion, int answerInput);

int main()
{

	Question questionOne = Question("What color is the sky?", "Blue", "Red", "Magenta", "Taupe", 1, "I... this one was a softball, how did you...? It's Blue. The answer is Blue.");
	Question questionTwo = Question("What is the name for a Europian Village without a church?", "Hobble", "Centere", "Hamlet", "Taupe", 3, "Wrong! The answer is Hamlet! Those Europians were really into Shakespear.");
	Question questionThree = Question("Which Element has the highest melting point?", "Strongtium", "Tungsten", "Stalinium", "Taupe", 2, "Sorry, Wrong! The correct answer is Tungsten! Don't ask me why I know that off the top of my head.");
	Question questionFour = Question("What color is objectivly the best?", "Blue", "Red", "Magenta", "Taupe", 4, "You are wrong. It is Taupe.");


	// Question One Prompt
	int input = 0;
	std::string dummyInput;

	while (input < 1 || input > 4)
	{
		input = 0;
		questionOne.DisplayQuestion();
		std::cin >> input;
	}
	GradeQuestion(questionOne, input);

	std::cout << "\n\nPress any key and then enter to continue.\n";
	std::cin >> dummyInput;

	// Question Two Prompt
	input = 0;
	while (input < 1 || input > 4)
	{
		input = 0;
		questionTwo.DisplayQuestion();
		std::cin >> input;
	}
	GradeQuestion(questionTwo, input);

	std::cout << "\n\nPress any key and then enter to continue.\n";
	std::cin >> dummyInput;

	// Question Three Prompt
	input = 0;
	while (input < 1 || input > 4)
	{
		input = 0;
		questionThree.DisplayQuestion();
		std::cin >> input;
	}
	GradeQuestion(questionThree, input);

	std::cout << "\n\nPress any key and then enter to continue.\n";
	std::cin >> dummyInput;

	// Question Four Prompt
	input = 0;
	while (input < 1 || input > 4)
	{
		input = 0;
		questionFour.DisplayQuestion();
		std::cin >> input;
	}
	GradeQuestion(questionFour, input);

	std::cout << "\n\nPress any key and then enter to Exit.\n";
	std::cin >> dummyInput;
}

void GradeQuestion(Question checkedQuestion, int answerInput)
{
	if (checkedQuestion.correctAnswer == answerInput)
	{
		std::cout << "Correct!";
	}
	else
	{
		std::cout << checkedQuestion.incorrectResponse;
	}
}
