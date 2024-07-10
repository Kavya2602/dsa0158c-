#include <iostream>
using namespace std;
void checkVotingEligibility(int age);
int main()
 {
    int age;
    
    cout << "Enter your age: ";
    cin >> age;
    
    checkVotingEligibility(age);
    
    return 0;
}

void checkVotingEligibility(int age)
 {
    const int votingAge = 18;
    
    if (age >= votingAge) 
	{
        cout << "You are eligible to vote." << endl;
    } else
	 {
        int yearsLeft = votingAge - age;
        cout << "You are not eligible to vote. You need to wait " << yearsLeft << " more year(s)." << endl;
    }
}


