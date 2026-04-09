#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const string filename = "Questions.txt";
const int num_questions = 10;
const int num_awnsers = 4;

struct Question {
	string question;
	string answers[num_awnsers];
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
