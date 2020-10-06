//Name-Tasfique Enam
//Student ID- 5886429
//Date- 30/08/2019
//LabTask2 Q1
#include <iostream>

using namespace std;
double lowestMark(double examMarks[]);
double highestMark(double examMarks[]);
double percentage(double examMarks[]);

int main()
{
    double examMarks [20];
    for(int i = 0; i < 20; i++) {
        cout << "Enter the exam Marks for Student " << i+1 << endl;
        cin >> examMarks[i];
    }
    cout << "The lowest mark " << lowestMark(examMarks) << endl;
    cout << "The highest mark " << highestMark(examMarks) << endl;
    cout << "The percentage of Pass " << percentage(examMarks) << endl;

    return 0;
}

double lowestMark(double examMarks[]) {
   double min = examMarks [0];
    for(int i=0; i< 20; i++) {
        if (min > examMarks[i] ) {
             min = examMarks[i];
        }

    }
    return min;
}

double highestMark(double examMarks[] ) {
   double max = examMarks [0];
    for(int i=0; i< 20; i++) {
        if (max < examMarks[i] )
            max = examMarks[i];
    }
    return max;
}

double percentage(double examMarks[]) {
    double count=0;
    for(int i=0; i < 20; i++) {
        if(examMarks[i] >= 50) {
            ++count;

        }
    }
    count = (count/20)*100;
    return count;
}




