#include <string>
using namespace std;

class maximum{
	public:
		int maximum_value(int,int,int);
		int minimum_value(int,int,int);
		double average_value(int,int,int);
		void inputgrade();
		void displayGradeReport();

	private:
		int maximumGrade;
		int minimumGrade;
		double averageGrade;
};
