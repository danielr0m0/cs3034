#include <iostream>
#include <vector>

#include "payrollSystem.h"

using namespace std;

int main()
{

    PayrollSystem monstersInc ("Monsters Inc.");
    monstersInc.addEmployee("E001","Mike","Wazowski",13);
    monstersInc.addEmployee("E002","James", "Sullivan",17);
    monstersInc.addEmployee("E003","Randall", "Boggs", 17);
    monstersInc.addEmployee("E004", "Baby", "Boo",7);
    monstersInc.recordHours("E001",10.75);
    monstersInc.recordHours("E002",10.75);
    monstersInc.recordHours("E003",10.75);
    monstersInc.recordHours("E004",5.75);
    monstersInc.issuePayCheck();
    monstersInc.removeEmployee("E004");
    monstersInc.recordHours("E001",20.75);
    monstersInc.recordHours("E002",20.75);
    monstersInc.recordHours("E003",16.75);
    monstersInc.issuePayCheck();
    return 0;
}
