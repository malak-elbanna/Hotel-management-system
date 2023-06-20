#include "staff_salaries.h"

double staff_salaries::get_bonus()
{
    return bonus;
}

double staff_salaries::get_tax()
{
    return tax;
}

double staff_salaries::get_gross()
{
    return gross;
}

double staff_salaries::get_net()
{
    return net;
}


void staff_salaries::set_bonus(double b)
{
    bonus = b;
}

void staff_salaries::set_tax(double t)
{
    tax = t;
}

void staff_salaries::set_gross(double g)
{
    gross = g;
}

void staff_salaries::set_net(double n)
{
    net = n;
}

staff_salaries::staff_salaries()
{
    bonus = 0, 0;
    tax = 0, 0;
    gross = 0, 0;
    net = 0, 0;
}