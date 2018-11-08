#ifndef FAMILY_TREE
#define FAMILY_TREE


#include <vector>
#include <set>
using namespace std;
#include "familyTreeNode.h"


//c is child and p is parent
class FamilyTree
{
    friend ostream &operator<<( ostream &, const FamilyTree &t);
protected:
    string name;
    FamilyTreeNode *root=NULL;
    FamilyTreeNode *root2=NULL;
    vector<FamilyTreeNode *> nodes;
public:
    FamilyTree(string name);
    string getFamilyName();
    void setRoot(FamilyTreeNode *p);
    void addNode(FamilyTreeNode *c);
    set<FamilyTreeNode *> getAllNodes();
    vector<FamilyTreeNode *> getDescendants(FamilyTreeNode *p);
    bool isDescendant(FamilyTreeNode *c, FamilyTreeNode *p);
    vector<FamilyTreeNode *> getAncestors(FamilyTreeNode *c);
    bool isAncestor(FamilyTreeNode *p, FamilyTreeNode *c);
    ~FamilyTree() { }
};

#endif
