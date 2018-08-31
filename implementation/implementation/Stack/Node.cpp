//
//  Node.cpp
//  implementation
//
//  Created by Daniel Marchena Parreira on 2018-08-19.
//  Copyright © 2018 Daniel Marchena Parreira. All rights reserved.
//

#include <iostream>
#include "Node.hpp"

namespace Stack {
    
    Node::~Node() {
        std::cout << "Calling node destructor for: " << this->text << std::endl;
    }

    Node::Node(const std::string& _text) : text(_text) {
        std::cout << "Calling node constructor: " << _text << std::endl;
    }
    
    Node::Node(const Node &obj) {
        std::cout << "Calling node copy constructor: " << obj.text << std::endl;
        this->text = obj.text;
    }

    void Node::addPrev(std::shared_ptr<Node> prevNode) {
        this->prev = prevNode;
    };
    
    bool Node::hasPrev() {
        return this->prev != NULL ? true : false;
    }
    
    std::shared_ptr<Node> Node::getPrev() {
        return this->prev;
    }
    
    std::string Node::getText() {
        return this->text;
    }

    std::ostream& Node::print(std::ostream& os) const {
        os << this->text;
        return os;
    }

    std::ostream& operator<<(std::ostream& os, Node& node) {
        return node.print(os);
    }
}
