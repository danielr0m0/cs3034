class Employee:
    def __init__(self, id, fName, Lname, wage, h):
        self._hours = h
        self._id=id
        self._fName=fName
        self._lName=Lname
        self._wage=wage
    
    def addHours(self, h):
        self._hours+=h

    def calcPay(self):
        return self._wage * self._hours

class Paycheck:
    def __init__(self, id, names, amount):
        self._id =id
        self._names=names
        self._amout=amount
    def __str__(self):
        return "Paycheck for " + str(self._amout)+" issued to "+ self._names + ", employee #" + self._id

class PayrollSystem:
    def __init__(self, name):
        self._Employees = []
        self._name=name

    def addEmployee(self, id, fName, Lname, wage, h):
        self._Employees.append(Employee(id, fName, Lname, wage, h))
    
    def findEmployee(self,id):
        for e in self._Employees:
            if(e._id == id):
                return e

    def recordHours(self, id,h):
        self.findEmployee(id).addHours(h)

    def issuePayCheck(self):
        print("Payroll for "+ self._name + ":")
        for e in self._Employees:
            print(Paycheck(e._id, e._fName+ " "+ e._lName, e.calcPay()))
            e._hours=0

monstersInc = PayrollSystem("Monster Inc.")
monstersInc.addEmployee("E001","Mike","Wazowski",13,0);
monstersInc.addEmployee("E002","James", "Sullivan",17,0);
monstersInc.addEmployee("E003","Randall", "Boggs", 17,0);
monstersInc.addEmployee("E004", "Baby", "Boo",7,0);
monstersInc.recordHours("E001",10.75);
monstersInc.recordHours("E002",10.75);
monstersInc.recordHours("E003",10.75);
monstersInc.recordHours("E004",5.75);
monstersInc.issuePayCheck();
monstersInc.recordHours("E001",9.75);
monstersInc.recordHours("E002",20.75);
monstersInc.recordHours("E003",16.75);
monstersInc.issuePayCheck();




