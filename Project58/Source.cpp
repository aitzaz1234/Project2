#include "list.h"

int main() {
    LinkedList list;
    list.insert(6);  // 6
    list.insert(3);  // 3 6
    list.insert(8);  // 3 6 8
    list.insert(4);  // 3 4 6 8

    list.printList();  // Output: 2 3 5 7

    return 0;
}
