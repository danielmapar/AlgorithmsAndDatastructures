//
//  main.cpp
//  implementation
//
//  Created by Daniel Marchena Parreira on 2018-08-19.
//  Copyright © 2018 Daniel Marchena Parreira. All rights reserved.
//

#include <iostream>
#include "DoubleLinkedList/List.hpp"

int main(int argc, const char * argv[]) {
    // Select the alg you want to run
    DoubleList::List list;
    list.add("Test");
    list.add("Test2");
    list.add("Test3");
    list.add("Daniel");
    
    std::cout << list << std::endl;
    return 0;
}
