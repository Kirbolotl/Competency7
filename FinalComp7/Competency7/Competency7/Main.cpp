//Jacob Diaz, jdiaz116@student.cnm.edu, DiazCompetency7.cpp

#include "Header.h"

int main()
{
    Question triviaQuestion[num_questions]; 
    WriteHeader();

    bool FileOpen = InitQuestions(triviaQuestion);
    if (FileOpen == false) {
        return 0;
    }

    string playerOne;
    string playerTwo;
    cout << "Enter Name for Player 1: ";
    getline(cin, playerOne);
    cout << "Enter Name for Player 2: ";
    getline(cin, playerTwo);

    do {

        int QuestionIndex = 0;
        int PlayerOne_Points = 0;
        int PlayerTwo_Points = 0;


        while (QuestionIndex < 10) {
            
            if ((QuestionIndex % 2) == 0) {
                cout << "\n|Question for " << playerOne << "|";
                PlayARound(triviaQuestion, QuestionIndex, PlayerOne_Points);
            }
            else {
                cout << "\n|Question for " << playerTwo << "|";
                PlayARound(triviaQuestion, QuestionIndex, PlayerTwo_Points);
            }
        }

        ShowFinalScores(PlayerOne_Points, PlayerTwo_Points);
       
    } while (DoAgain());

    Goodbye();

    return 0;
}
