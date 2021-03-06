// File generated by CPPExt (MPV)
//
#ifndef _AdvApp2Var_SequenceOfNode_OCWrappers_HeaderFile
#define _AdvApp2Var_SequenceOfNode_OCWrappers_HeaderFile

// include native header
#include <AdvApp2Var_SequenceOfNode.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCAdvApp2Var_Node;
ref class OCAdvApp2Var_SequenceNodeOfSequenceOfNode;



public ref class OCAdvApp2Var_SequenceOfNode  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCAdvApp2Var_SequenceOfNode(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCAdvApp2Var_SequenceOfNode(AdvApp2Var_SequenceOfNode* nativeHandle);

// Methods PUBLIC


OCAdvApp2Var_SequenceOfNode();


 /*instead*/  OCAdvApp2Var_SequenceOfNode^ Assign(OCNaroWrappers::OCAdvApp2Var_SequenceOfNode^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCAdvApp2Var_Node^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCAdvApp2Var_SequenceOfNode^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCAdvApp2Var_Node^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCAdvApp2Var_SequenceOfNode^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_Node^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_SequenceOfNode^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_Node^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_SequenceOfNode^ S) ;


 /*instead*/  OCAdvApp2Var_Node^ First() ;


 /*instead*/  OCAdvApp2Var_Node^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_SequenceOfNode^ Sub) ;


 /*instead*/  OCAdvApp2Var_Node^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_Node^ I) ;


 /*instead*/  OCAdvApp2Var_Node^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCAdvApp2Var_SequenceOfNode()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
