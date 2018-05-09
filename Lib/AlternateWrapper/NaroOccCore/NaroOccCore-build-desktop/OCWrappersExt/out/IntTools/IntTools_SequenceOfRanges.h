// File generated by CPPExt (MPV)
//
#ifndef _IntTools_SequenceOfRanges_OCWrappers_HeaderFile
#define _IntTools_SequenceOfRanges_OCWrappers_HeaderFile

// include native header
#include <IntTools_SequenceOfRanges.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCIntTools_Range;
ref class OCIntTools_SequenceNodeOfSequenceOfRanges;



public ref class OCIntTools_SequenceOfRanges  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCIntTools_SequenceOfRanges(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntTools_SequenceOfRanges(IntTools_SequenceOfRanges* nativeHandle);

// Methods PUBLIC


OCIntTools_SequenceOfRanges();


 /*instead*/  OCIntTools_SequenceOfRanges^ Assign(OCNaroWrappers::OCIntTools_SequenceOfRanges^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntTools_Range^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntTools_SequenceOfRanges^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntTools_Range^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntTools_SequenceOfRanges^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntTools_Range^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntTools_SequenceOfRanges^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntTools_Range^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntTools_SequenceOfRanges^ S) ;


 /*instead*/  OCIntTools_Range^ First() ;


 /*instead*/  OCIntTools_Range^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCIntTools_SequenceOfRanges^ Sub) ;


 /*instead*/  OCIntTools_Range^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCIntTools_Range^ I) ;


 /*instead*/  OCIntTools_Range^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCIntTools_SequenceOfRanges()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif