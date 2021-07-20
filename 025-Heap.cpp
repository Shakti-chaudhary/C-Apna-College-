#include <iostream>
using namespace std;

// Heap is Allocating memory Dynamically ...

int main()
{

    int a = 10;         /*  Stacked memory   */
    int *p = new int(); /*  Making ponter of dynamic memory  */
    *p = 10;            /*  allocating value to pointer   */

    cout << (*p) << endl;

    delete (p);     /*  This will delete heap memory.  */
    p = new int[4]; /*  assinig array to pointer in heap memory  */
    delete[] p;     /*  Deleting array block from Heap  */

    p = NULL; /*  This will make Pointer NULL. it will destroy auto  */

    return 0;
}