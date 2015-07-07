//
//  Node.cpp
//  RandomForest
//
//  Created by 刘建安 on 6/11/15.
//  Copyright (c) 2015 刘建安. All rights reserved.
//

#include "Node.h"
#include "vector"
using namespace std;

extern const int numOfFeatures;

Node::Node(){
    left = NULL;
    right = NULL;
    sum = 0;
    memset(num, 0, sizeof(num));
    attribute = 0;
    value = 0;
    depth = 0;
}

//拷贝构造函数
Node::Node(const Node &other){
    this->attribute = other.attribute;
    this->value = other.value;
    this->left = other.left;
    this->right = other.right;
    this->sum = other.sum;
    this->samples = other.samples;
    this->depth = other.depth;
    for (int i = 0; i < numOfTypes; i++)
        this->num[i] = other.num[i];
}