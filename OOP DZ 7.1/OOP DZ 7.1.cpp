 #include<iostream>
using namespace std;

class Date
{
private:
	int day, month, year;
public:
	Date(int date_day, int date_month, int date_year)
	{
		void setDate(int date_day, int date_month, int date_year);
	{ 
		day = date_day;
		month = date_month;
		year = date_year;
	}
	void getDate();
	{
		cout << " Date : " << day << "." << month << "." << year << "." << endl;
	}
	
	
	}

	~Date();

};


int main(int argc,char*argv[])
{
	int day = 20;
	int month = 07;
	int year = 2021;
	Date todayDate();
	Date getDate();

	return 0;
}