#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

const string filename = "Questions.txt";
const int num_questions = 10;
const int num_answers = 4;
const int SIZE = 30;

struct Question {
	string question;
	string answers[num_answers];
	int correctIndex;
};

void WriteHeader();
bool InitQuestions(Question questions[]);
//void DisplayQuestion(Question questions[], int index);
//bool CheckAnswer(Question questions[], int questionNum, int playerAnswer);
//void PlayARound(Question quest[], int& questionNum, int& playerPoints);
//void ShowFinalScores(int playerOnePoints, int playerTwoPoints);
void Goodbye();
bool DoAgain();




//for (int a = 0; a < 31; a++) {
//	getline(QuestionFile, TriviaAnswers,',');
//	if (a == 31) {
//		getline(QuestionFile, TriviaAnswers, '\n');
//	}
//	cout << TriviaAnswers << endl;
//}