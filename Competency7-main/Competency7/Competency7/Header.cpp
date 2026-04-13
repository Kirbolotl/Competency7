#include "Header.h"

void WriteHeader() {
	cout << "Jacob Diaz, Competency 7,The Purpose of this program is to make a two player trivia game\n";
}

bool InitQuestions(Question questions[]) {
	ifstream QuestionFile;
	QuestionFile.open(filename.c_str());
	string TriviaQuestions;
	string TriviaAnswers;
	string TriviaCorrectIndex;
	int final = 3;
	int index = 0;

	string abcd[4] = { "A. ","B. ","C. ","D. " };

	if (!QuestionFile) {
		cout << "File Did Not Open\n";
		return false;
	}


	for (int i = 0; i < num_questions; i++) {
		getline(QuestionFile, TriviaQuestions);
		questions[i].question = TriviaQuestions;
	}
	
	for (int a = 0; a < 40; a++) {
		
		if (a == final) {
			getline(QuestionFile, TriviaAnswers);
			final += 4;
		}
		else {
			getline(QuestionFile, TriviaAnswers, ',');
		}

		cout << abcd[index] << TriviaAnswers << endl;
		index += 1;
		if (index > 3) {
			//cout << endl;
			index = 0;
		}
	}
	
	
	
}

void Goodbye() {
	cout << "Thank you for using this Program! Goodbye.";
}

bool DoAgain() {
	cout << "Would you like to play again? (Y/N): ";
	string userchoice;
	cin >> userchoice;
	if (userchoice == "Y") {return true;}
	else { return false; }
}