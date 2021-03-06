// File generated by CPPExt (MPV)
//
#ifndef _IntTools_SequenceOfCommonPrts_OCWrappers_HeaderFile
#define _IntTools_SequenceOfCommonPrts_OCWrappers_HeaderFile

// include native header
#include <IntTools_SequenceOfCommonPrts.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCIntTools_CommonPrt;
ref class OCIntTools_SequenceNodeOfSequenceOfCommonPrts;



public ref class OCIntTools_SequenceOfCommonPrts  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCIntTools_SequenceOfCommonPrts(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntTools_SequenceOfCommonPrts(IntTools_SequenceOfCommonPrts* nativeHandle);

// Methods PUBLIC


OCIntTools_SequenceOfCommonPrts();


 /*instead*/  OCIntTools_SequenceOfCommonPrts^ Assign(OCNaroWrappers::OCIntTools_SequenceOfCommonPrts^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntTools_CommonPrt^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntTools_SequenceOfCommonPrts^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntTools_CommonPrt^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntTools_SequenceOfCommonPrts^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntTools_CommonPrt^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntTools_SequenceOfCommonPrts^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntTools_CommonPrt^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntTools_SequenceOfCommonPrts^ S) ;


 /*instead*/  OCIntTools_CommonPrt^ First() ;


 /*instead*/  OCIntTools_CommonPrt^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCIntTools_SequenceOfCommonPrts^ Sub) ;


 /*instead*/  OCIntTools_CommonPrt^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCIntTools_CommonPrt^ I) ;


 /*instead*/  OCIntTools_CommonPrt^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCIntTools_SequenceOfCommonPrts()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
