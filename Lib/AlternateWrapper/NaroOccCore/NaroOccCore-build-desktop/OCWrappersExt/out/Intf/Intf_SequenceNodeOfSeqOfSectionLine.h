// File generated by CPPExt (Transient)
//
#ifndef _Intf_SequenceNodeOfSeqOfSectionLine_OCWrappers_HeaderFile
#define _Intf_SequenceNodeOfSeqOfSectionLine_OCWrappers_HeaderFile

// include the wrapped class
#include <Intf_SequenceNodeOfSeqOfSectionLine.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "Intf_SectionLine.h"


namespace OCNaroWrappers
{

ref class OCIntf_SectionLine;
ref class OCIntf_SeqOfSectionLine;



public ref class OCIntf_SequenceNodeOfSeqOfSectionLine : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCIntf_SequenceNodeOfSeqOfSectionLine(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntf_SequenceNodeOfSeqOfSectionLine(Handle(Intf_SequenceNodeOfSeqOfSectionLine)* nativeHandle);

// Methods PUBLIC


OCIntf_SequenceNodeOfSeqOfSectionLine(OCNaroWrappers::OCIntf_SectionLine^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCIntf_SectionLine^ Value() ;

~OCIntf_SequenceNodeOfSeqOfSectionLine()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
