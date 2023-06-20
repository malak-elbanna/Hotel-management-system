#include "staff_attendance.h"

void staff_attendance::set_absDays(int a)
{
	absDays = a;
}

void staff_attendance::set_OTdays(int ot)
{
	DaysOverTime = ot;

}

void staff_attendance::set_AttDays(int att)
{
	Att_days = att;
}

int staff_attendance::get_AttDays()
{
	return Att_days;
}

int staff_attendance::get_OTdays()
{
	return DaysOverTime;
}

int staff_attendance::get_absDays()
{
	return absDays;
}
