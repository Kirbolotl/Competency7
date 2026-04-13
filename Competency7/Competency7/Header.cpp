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

	if (!QuestionFile) {
		cout << "File Did Not Open\n";
		return false;
	}


	for (int i = 0; i < num_questions; i++) {
		getline(QuestionFile, TriviaQuestions);
		questions[i].question = TriviaQuestions;
	}
	
	for (int a = 0; a < 40; a++) {
		if ((a % 4) == 0 && a !=0 || a==3) {
			getline(QuestionFile, TriviaAnswers);
		}
		else {
			getline(QuestionFile, TriviaAnswers, ',');
		}
		cout << a << ". " << TriviaAnswers << endl;
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