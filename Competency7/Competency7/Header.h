#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
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


//display
/*
       for (int i = 0; i < num_questions; i++) {
            cout << "\nQuestion: " << triviaQuestion[i].question << endl;
            for (int a = 0; a < num_answers; a++) {
                cout << abcd[a] << triviaQuestion[i].answers[a] << endl;
            }
            int idk = triviaQuestion[i].correctIndex;
            cout << "Correct Answer: " << triviaQuestion[i].correctIndex << " Letter: " << abcd[idk] << endl;
       }

*/
