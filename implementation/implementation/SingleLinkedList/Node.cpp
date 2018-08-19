//
//  Node.cpp
//  implementation
//
//  Created by Daniel Marchena Parreira on 2018-08-19.
//  Copyright © 2018 Daniel Marchena Parreira. All rights reserved.
//

#include <iostream>
#include "Node.hpp"

namespace List {
    Node::~Node() {
        std::cout << "Calling node destructor for: " << this->text << std::endl;
    }

    Node::Node(const std::string& _text) : text(_text) {
        std::cout << "Calling node constructor" << std::endl;
    }

    void Node::addNext(Node* nextNode) {
        this->next = nextNode;
    };

    bool Node::hasNext() {
        return this->next != NULL ? true : false;
    }

    Node* Node::getNext() {
        return this->next;
    }

    std::ostream& Node::print(std::ostream& os) const {
        os << this->text;
        return os;
    }

    std::ostream& operator<<(std::ostream& os, Node& node) {
        return node.print(os);
    }
}

