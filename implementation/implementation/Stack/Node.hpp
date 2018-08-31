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

namespace Stack {
    class Node {
    private:
        std::shared_ptr<Node> prev = nullptr;
        std::string text;
    public:
        ~Node();
        Node(const std::string& _text);
        Node(const Node &obj);
        bool hasPrev();
        void addPrev(std::shared_ptr<Node> prevNode);
        std::shared_ptr<Node> getPrev();
        std::string getText();
        std::ostream& print(std::ostream& os) const;
    };

    std::ostream& operator<<(std::ostream& os, Node& node);
}

#endif /* Node_hpp */
