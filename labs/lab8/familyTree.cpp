#include <iostream>
#include<string>
#include <vector>
#include <set>
using namespace std;
 
#include "familyTree.h"

FamilyTree::FamilyTree(string n): name(n){};

string FamilyTree::getFamilyName(){
    return name;
}

void FamilyTree::setRoot(FamilyTreeNode *n){
    if(!root){
        root=n;
        nodes.push_back(n);
    }else if(!root2){
        root2=n;
        nodes.push_back(n);
    }else{
        cout<<"error: roots are full"<<endl;
    }
}
void FamilyTree::addNode(FamilyTreeNode *c){
    nodes.push_back(c);
    //update parents list
    //go through the list of nodes and add to the children list to the parrents
    //need to add the grandchildren
    for(int i = 0; i < (int) nodes.size()-1; i++)
    {
        FamilyTreeNode *p = nodes.at(i);
        vector<FamilyTreeNode *> v = p->getChildrens();
        for(int j = 1; j < (int) nodes.size(); j++)
        {
            //if parents are null
            if(nodes.at(j)->getFather()){
                //make sure they arent the same person and that if the parent is either the father or mother
                if((i!=j) & ( (p->getFullName()==nodes.at(j)->getFather()->getFullName()) || (p->getFullName()==nodes.at(j)->getMother()->getFullName()) )){
                    //check if it is already in the list
                    if(v.empty()){
                        if(p->getFather()){
                            vector <FamilyTreeNode *> f=p->getFather()->getChildrens();
                            f.push_back(nodes.at(j));
                            p->getMother()->setChildrens(f);
                            p->getFather()->setChildrens(f);
                        }
                        v.push_back(nodes.at(j));
                    }
                    bool found = false;
                    for(int x = 0; x < (int) v.size(); x++)
                    {
                        if(v.at(x)== nodes.at(j)){
                            found = true;
                        }
                    }
                    if(!found){
                        if(p->getFather()){
                            vector <FamilyTreeNode *> f=p->getFather()->getChildrens();
                            f.push_back(nodes.at(j));
                            p->getMother()->setChildrens(f);
                            p->getFather()->setChildrens(f);
                        }
                        v.push_back(nodes.at(j));
                    }
                }
            }
        }
        p->setChildrens(v);
    }
}

set<FamilyTreeNode *> FamilyTree::getAllNodes(){
    set<FamilyTreeNode *> node(nodes.begin(),nodes.end());
    return node;
};

vector<FamilyTreeNode *>FamilyTree::getDescendants(FamilyTreeNode *p){

    return p->getChildrens(); 
};

bool FamilyTree::isDescendant(FamilyTreeNode *c, FamilyTreeNode *p){
    vector<FamilyTreeNode *> childs = getDescendants(p);
    bool found = false;
    for(int i = 0; i < (int) childs.size(); i++)
    { 
        if(childs.at(i) == c){
            found= true;
        }
    }
    
    return found;
};

//go through the vector and check if node is in children list
vector<FamilyTreeNode *> FamilyTree::getAncestors(FamilyTreeNode *child){
    vector<FamilyTreeNode *> parents;
    set<FamilyTreeNode *> nodes = getAllNodes();
    
    while(!nodes.empty()){
        vector<FamilyTreeNode *> childs= (*nodes.begin())->getChildrens();
        
        for(int i = 0; i < (int) childs.size(); i++)
        {
            if( childs.at(i) == child){
                parents.push_back((*nodes.begin()));
            }
        }
        
       
        nodes.erase(nodes.begin());
    }
    
        
    return parents;
};

bool FamilyTree::isAncestor(FamilyTreeNode *p, FamilyTreeNode *c){
    vector<FamilyTreeNode *> parents= getAncestors(c);
    bool found = false;
    for(int i = 0; i < (int) parents.size(); i++)
    {
        if(parents.at(i)==p){
            found = true;
        }
    }
    
    return found;
};

