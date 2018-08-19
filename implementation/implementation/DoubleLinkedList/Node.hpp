//
//  Node.hpp
//  implementation
//
//  Created by Daniel Marchena Parreira on 2018-08-19.
//  Copyright © 2018 Daniel Marchena Parreira. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <iostream>

namespace DoubleList {
    class Node {
    private:
        std::unique_ptr<Node> next = nullptr;
        Node* prev = nullptr;
        std::string text;
    public:
        ~Node();
        Node(const std::string& _text);
        void addNext(Node* nextNode);
        void addPrev(Node* prevNode);
        bool hasNext();
        Node* getNext();
        bool hasPrev();
        Node* getPrev();
        std::ostream& print(std::ostream& os) const;
    };

    std::ostream& operator<<(std::ostream& os, Node& node);
}

#endif /* Node_hpp */
