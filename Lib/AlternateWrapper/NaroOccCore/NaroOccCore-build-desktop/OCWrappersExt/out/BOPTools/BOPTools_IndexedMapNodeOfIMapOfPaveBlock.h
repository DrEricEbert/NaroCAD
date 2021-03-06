// File generated by CPPExt (Transient)
//
#ifndef _BOPTools_IndexedMapNodeOfIMapOfPaveBlock_OCWrappers_HeaderFile
#define _BOPTools_IndexedMapNodeOfIMapOfPaveBlock_OCWrappers_HeaderFile

// include the wrapped class
#include <BOPTools_IndexedMapNodeOfIMapOfPaveBlock.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "BOPTools_PaveBlock.h"


namespace OCNaroWrappers
{

ref class OCBOPTools_PaveBlock;
ref class OCBOPTools_PaveBlockMapHasher;
ref class OCBOPTools_IMapOfPaveBlock;



public ref class OCBOPTools_IndexedMapNodeOfIMapOfPaveBlock : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCBOPTools_IndexedMapNodeOfIMapOfPaveBlock(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBOPTools_IndexedMapNodeOfIMapOfPaveBlock(Handle(BOPTools_IndexedMapNodeOfIMapOfPaveBlock)* nativeHandle);

// Methods PUBLIC


OCBOPTools_IndexedMapNodeOfIMapOfPaveBlock(OCNaroWrappers::OCBOPTools_PaveBlock^ K1, Standard_Integer K2, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2);


 /*instead*/  OCBOPTools_PaveBlock^ Key1() ;


 /*instead*/  Standard_Integer Key2() ;


 /*instead*/  TCollection_MapNodePtr& Next2() ;

~OCBOPTools_IndexedMapNodeOfIMapOfPaveBlock()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
