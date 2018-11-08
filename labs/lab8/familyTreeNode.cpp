#include <iostream>
#include<string>
#include <vector>
using namespace std;

#include "familyTreeNode.h"

FamilyTreeNode::FamilyTreeNode(string f, string l, FamilyTreeNode *pm, FamilyTreeNode *pf, int y, int m, int d, char g) 
    : fName(f), lName(l), mother(pm), father(pf), year(y),month(m),day(d),gender(g){};


ostream &operator << (ostream &output, const FamilyTreeNode &p){
    output << p.fName << " "<< p.lName << " DOB: "<< p.month<<"/"<< p.day<<"/"<< p.year;
    return output;
}

string FamilyTreeNode::getFullName(){
    return fName +" "+ lName;
}

vector<FamilyTreeNode *> FamilyTreeNode::getChildrens(){
    return childrens;
}

void FamilyTreeNode::setChildrens(vector<FamilyTreeNode *> v){
    childrens=v;
}

FamilyTreeNode* FamilyTreeNode::getFather(){
    return father;
}

FamilyTreeNode* FamilyTreeNode::getMother(){
    return mother;
}

void FamilyTreeNode::print(){
    
    for(int i = 0; i < (int) childrens.size(); i++)
    {
        cout<<childrens.at(i)->getFullName()<<endl;
    }
    
}
