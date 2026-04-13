//Jacob Diaz, jdiaz116@student.cnm.edu, DiazCompetency7.cpp

#include "Header.h"

int main()
{
    Question triviaQuestion[num_questions]; 
    //triviaQuestion[0] = { "In Star Wars, who built C-3P0?",{"Yoda","Obi-Wan Kenobi","Anakin Skywalker","Luke Skywalker"},2 };

    string abcd[4] = { "A. ","B. ","C. ","D. " };

    WriteHeader();

    do {
       InitQuestions(triviaQuestion);
       /*for (int i = 0; i < num_questions; i++) {
            cout << "Question: " << triviaQuestion[i].question << endl;
            for (int a = 0; a < num_answers; a++) {
                cout << abcd[a] << triviaQuestion[i].answers[a] << endl;
            }
        }*/
        //cout << triviaQuestion[0].answers[3];



    } while (DoAgain());

    Goodbye();

    return 0;
}
