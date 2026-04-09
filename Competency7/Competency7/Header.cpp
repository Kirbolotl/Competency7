#include "Header.h"

void WriteHeader() {
	cout << "Jacob Diaz, Competency 7,The Purpose of this program is to make a two player trivia game\n";
}

bool InitQuestions(Question questions[]) {
	ifstream QuestionFile;
	QuestionFile.open(filename.c_str());
	string TriviaQuestions;
	if (!QuestionFile) {
		cout << "File Did Not Open";
		return false;
	}

	//while (getline(QuestionFile, TriviaQuestions)) {
	//	cout << TriviaQuestions << endl;
	//}
	//
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