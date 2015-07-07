//
//  Tree.h
//  RandomForest
//
//  Created by 刘建安 on 6/11/15.
//  Copyright (c) 2015 刘建安. All rights reserved.
//

#ifndef RandomForest_Tree_h
#define RandomForest_Tree_h
#include "Node.h"
#include "string"
using namespace std;


class Tree{
private:
    Node *root;
    
public:
    Tree();
    bool readSample(vector<pair<int, vector<double> > > all_samples);
    bool buildTree();
    pair<Node*, Node*> selectBestPart(Node *current);
    vector<int> randomSelect();
    int predict(vector<double> features);
    ~Tree();
};

#endif
