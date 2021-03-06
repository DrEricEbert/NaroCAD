// File generated by CPPExt (Transient)
//
#ifndef _TColStd_SequenceNodeOfSequenceOfReal_OCWrappers_HeaderFile
#define _TColStd_SequenceNodeOfSequenceOfReal_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_SequenceNodeOfSequenceOfReal.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCTColStd_SequenceOfReal;



public ref class OCTColStd_SequenceNodeOfSequenceOfReal : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCTColStd_SequenceNodeOfSequenceOfReal(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_SequenceNodeOfSequenceOfReal(Handle(TColStd_SequenceNodeOfSequenceOfReal)* nativeHandle);

// Methods PUBLIC


OCTColStd_SequenceNodeOfSequenceOfReal(Standard_Real I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  Standard_Real Value() ;

~OCTColStd_SequenceNodeOfSequenceOfReal()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
