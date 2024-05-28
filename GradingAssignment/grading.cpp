#include <iostream>

using namespace std;

int main () {
    int ExamScore;
    cout << "Input your Examination Score:" << endl;
    cin >> ExamScore;

    if (ExamScore >= 70){
        cout << "You had Grade A" << endl;

    }else if(ExamScore >= 60){
        cout << "You had Grade B" << endl;
    }else if(ExamScore >= 50){
        cout << "You had Grade C" << endl;
    }else if(ExamScore >= 40){
        cout << "You had Grade D" << endl;
    }else{
      cout << "You had Grade F" << endl;
    }
    return 0;
}
