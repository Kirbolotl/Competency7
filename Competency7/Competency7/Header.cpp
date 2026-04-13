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
	int AnsIndex = 0;
	int QuesIndex = 0;
	const int number_answers = 40;

	if (!QuestionFile) {
		cout << "File Did Not Open\n";
		return false;
	}

	for (int i = 0; i < num_questions; i++) {
		getline(QuestionFile, TriviaQuestions);
		questions[i].question = TriviaQuestions;
	}
	
	for (int a = 0; a < number_answers; a++) {
		
		if (a == final) {
			getline(QuestionFile, TriviaAnswers);
			final += 4;
		}
		else {
			getline(QuestionFile, TriviaAnswers, ',');
		}

		questions[QuesIndex].answers[AnsIndex] = TriviaAnswers;
		AnsIndex += 1;
		
		if (AnsIndex > 3) {
			AnsIndex = 0;
			QuesIndex += 1;
			
		}
	}

	for (int j = 0; j < num_questions; j++) {
		int IndexStoI;
		getline(QuestionFile, TriviaCorrectIndex);
		IndexStoI = stoi(TriviaCorrectIndex);
		questions[j].correctIndex = IndexStoI;
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