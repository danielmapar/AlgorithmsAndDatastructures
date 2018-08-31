//
//  main.cpp
//  implementation
//
//  Created by Daniel Marchena Parreira on 2018-08-19.
//  Copyright © 2018 Daniel Marchena Parreira. All rights reserved.
//

#include <iostream>
#include "Stack/Stack.hpp"

int main(int argc, const char * argv[]) {
    // Select the alg you want to run
    Stack::Stack stack;
    for (int i = 0; i < 1000; i++) {
        stack.push("Test " + std::to_string(i));
    }
    return 0;
}
