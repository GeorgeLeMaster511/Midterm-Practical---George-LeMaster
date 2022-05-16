#include <iostream>

#include "Question.h"
#include <vector>

// Prototypes
void GradeQuestion(Question checkedQuestion, int answerInput);
void AskQuestion(Question questionInput);

int main()
{
	// Creates a vecotr to store the question in
	std::vector<Question> questionVec;

	// Seeds random at the start of the program, ensuring a different question order than possible previous runs
	srand(time(0));

	// Creates 4 different questions using the Question Class and Constructor
	Question questionOne = Question("What color is the sky?", "Blue", "Red", "Magenta", "Taupe", 1, "I... this one was a softball, how did you...? It's Blue. The answer is Blue.");
	Question questionTwo = Question("What is the name for a Europian Village without a church?", "Hobble", "Centere", "Hamlet", "Taupe", 3, "Wrong! The answer is Hamlet! Those Europians were really into Shakespear.");
	Question questionThree = Question("Which Element has the highest melting point?", "Strongtium", "Tungsten", "Stalinium", "Taupe", 2, "Sorry, Wrong! The correct answer is Tungsten! Don't ask me why I know that off the top of my head.");
	Question questionFour = Question("What color is objectivly the best?", "Blue", "Red", "Magenta", "Taupe", 4, "You are wrong. It is Taupe.");
	
	// Pushes said Questions back into the Question vector
	questionVec.push_back(questionOne);
	questionVec.push_back(questionTwo);
	questionVec.push_back(questionThree);
	questionVec.push_back(questionFour);

	// Loop that askes each question
	for (int i = 0; i < 4; i++)
	{
		// Initailizes the randomIndex for the next question
		int questionIndex = rand() % 4;

		// Checks weather or not the question has already been asked
		while (questionVec[questionIndex].asked == true)
		{
			// If the question has been asked, the questionIndex is re-randomized
			questionIndex = rand() % 4;
		}

		// Sets the next question's "asked" flag to true and askes said question
		questionVec[questionIndex].asked = true;
		AskQuestion(questionVec[questionIndex]);

	}
}

// Function for grading the given question, checking checkedQuestion.correctAnswer against answerInput
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

// Function for promting the user with a question (questionInput)
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
