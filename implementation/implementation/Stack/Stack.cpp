//
//  List.cpp
//  implementation
//
//  Created by Daniel Marchena Parreira on 2018-08-19.
//  Copyright © 2018 Daniel Marchena Parreira. All rights reserved.
//

#include "Stack.hpp"
#include "Node.hpp"

namespace Stack {

    Stack::Stack() {
        std::cout << "Calling stack constructor" << std::endl;
    }

    Stack::~Stack() {
        std::cout << "Calling destructor for stack (with smart pointers)" << std::endl;
    }

    void Stack::push(const std::string& name) {
        Node* newLastNode = new Node(name);
        
        if (!this->head) {
            this->head = std::shared_ptr<Node>(newLastNode);
            return;
        }
        newLastNode->addPrev(this->head);
        this->head = std::shared_ptr<Node>(newLastNode);
    }
    
    Node Stack::pop() {
        Node copyHeadNode = *(this->head.get());
        
        if (this->head->hasPrev()) {
            this->head = this->head->getPrev();
        } else {
            this->head = nullptr;
        }
        return copyHeadNode;
    }


    std::ostream& Stack::print(std::ostream& os) const {
        
        if (this->head == nullptr) return os;
        
        std::shared_ptr<Node> node = this->head;
        
        do {
            os << *node << std::endl;
            if (node->hasPrev()) node = node->getPrev();
            else break;
        } while(true);
        
        return os;
    }

    std::ostream& operator<<(std::ostream& os, Stack& stack) {
        stack.print(os);
        return os;
    }
}
