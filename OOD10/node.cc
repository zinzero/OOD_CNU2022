//  Copyright [2022] <Copyright JangJinYoung>
#include "node.h"

Node::Node(const Node* left, const Node* right): left_(left), right_(right) {}

const Node* Node::left() const {
    return left_;
}

const Node* Node::right() const {
    return right_;
}