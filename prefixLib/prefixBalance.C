#include "prefixBalance.h"
    
    Prefix::Prefix(int nElements){
      numElements = nElements;
      CkPrintf("\n\n\nPrefixArray greated with ID %d\n\n\n",thisArrayID);
    }
    Prefix::Prefix(CkMigrateMessage* msg){}

#include "prefixBalance.def.h"

