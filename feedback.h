#pragma once 
#include <string> 
#include <iostream>
using namespace std;

class Feedback {
private:
    int feedbackNo;
    string feedbackMsg;
public:
    Feedback()
    {
        cout << "Constructor runs" << endl;
        feedbackNo = 0;
    }
    int getFeedbackNo()
    {
        return feedbackNo;
    }
    string getFeedback()
    {
        return feedbackMsg;
    }
    void displayFeedbackMsg()
    {
        cout << "Feedback No " << feedbackNo << " message " << feedbackMsg << " has been accepted,Thank you for contacting us." << endl;
    }
    ~Feedback()
    {
        cout << "Deconstructor is runnig" << endl;
    }
};

