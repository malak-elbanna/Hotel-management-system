#pragma once
using namespace std;
class staff_attendance
{
private:
	int absDays,DaysOverTime,Att_days;
public:
	void set_absDays(int a);
	void set_OTdays(int ot);
	void set_AttDays(int att);
	int get_AttDays();
	int get_OTdays();
	int get_absDays();


};

