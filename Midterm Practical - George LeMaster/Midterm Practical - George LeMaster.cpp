#include <iostream>

#include "Question.h"
#include <vector>

void GradeQuestion(Question checkedQuestion, int answerInput);
void AskQuestion(Question questionInput);

int main()
{
	std::vector<Question> questionVec;

	Question questionOne = Question("What color is the sky?", "Blue", "Red", "Magenta", "Taupe", 1, "I... this one was a softball, how did you...? It's Blue. The answer is Blue.");
	Question questionTwo = Question("What is the name for a Europian Village without a church?", "Hobble", "Centere", "Hamlet", "Taupe", 3, "Wrong! The answer is Hamlet! Those Europians were really into Shakespear.");
	Question questionThree = Question("Which Element has the highest melting point?", "Strongtium", "Tungsten", "Stalinium", "Taupe", 2, "Sorry, Wrong! The correct answer is Tungsten! Don't ask me why I know that off the top of my head.");
	Question questionFour = Question("What color is objectivly the best?", "Blue", "Red", "Magenta", "Taupe", 4, "You are wrong. It is Taupe.");
	
	Question dummyQuestion = Question("", "", "", "", "", 0, "");

	questionVec.push_back(questionOne);
	questionVec.push_back(questionTwo);
	questionVec.push_back(questionThree);
	questionVec.push_back(questionFour);

	for (int i = 0; i < 4; i++)
	{
		
		int nextQuestion = rand() % 4;

		AskQuestion(questionVec[nextQuestion]);
	}
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

void AskQuestion(Question questionInput)
{
	std::string dummyInput;
	int input;
	input = 0;
	while (input < 1 || input > 4)
	{
		input = 0;
		questionInput.DisplayQuestion();
		std::cin >> input;
	}
	GradeQuestion(questionInput, input);

	std::cout << "\n\nPress any key and then enter to continue.\n";
	std::cin >> dummyInput;
}
