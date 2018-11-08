#ifndef FAMILY_TREE_NODE
#define FAMILY_TREE_NODE


class FamilyTreeNode
{
     friend ostream &operator<<( ostream &, const FamilyTreeNode &f);
    
protected:
    string fName;
    string lName;
    FamilyTreeNode *mother;
    FamilyTreeNode *father;
    int year;
    int month;
    int day;
    char gender;
    vector<FamilyTreeNode *> childrens;
public:
    FamilyTreeNode(string fName, string lName, FamilyTreeNode *mother, FamilyTreeNode *father, int year, int month, int day, char gender);
    string getFullName();
    vector<FamilyTreeNode *> getChildrens();
    void setChildrens(vector<FamilyTreeNode *> v);
    FamilyTreeNode* getMother();
    FamilyTreeNode* getFather();
    void print();
    ~FamilyTreeNode() { }
};
#endif
