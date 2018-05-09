// File generated by CPPExt (Transient)
//
#ifndef _Interface_SequenceNodeOfSequenceOfCheck_OCWrappers_HeaderFile
#define _Interface_SequenceNodeOfSequenceOfCheck_OCWrappers_HeaderFile

// include the wrapped class
#include <Interface_SequenceNodeOfSequenceOfCheck.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCInterface_Check;
ref class OCInterface_SequenceOfCheck;



public ref class OCInterface_SequenceNodeOfSequenceOfCheck : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCInterface_SequenceNodeOfSequenceOfCheck(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCInterface_SequenceNodeOfSequenceOfCheck(Handle(Interface_SequenceNodeOfSequenceOfCheck)* nativeHandle);

// Methods PUBLIC


OCInterface_SequenceNodeOfSequenceOfCheck(OCNaroWrappers::OCInterface_Check^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCInterface_Check^ Value() ;

~OCInterface_SequenceNodeOfSequenceOfCheck()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif