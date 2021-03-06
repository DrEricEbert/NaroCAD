// File generated by CPPExt (MPV)
//
#ifndef _WNT_SequenceOfImage_OCWrappers_HeaderFile
#define _WNT_SequenceOfImage_OCWrappers_HeaderFile

// include native header
#include <WNT_SequenceOfImage.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCWNT_Image;
ref class OCWNT_SequenceNodeOfSequenceOfImage;



public ref class OCWNT_SequenceOfImage  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCWNT_SequenceOfImage(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCWNT_SequenceOfImage(WNT_SequenceOfImage* nativeHandle);

// Methods PUBLIC


OCWNT_SequenceOfImage();


 /*instead*/  OCWNT_SequenceOfImage^ Assign(OCNaroWrappers::OCWNT_SequenceOfImage^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCWNT_Image^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCWNT_SequenceOfImage^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCWNT_Image^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCWNT_SequenceOfImage^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCWNT_Image^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCWNT_SequenceOfImage^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCWNT_Image^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCWNT_SequenceOfImage^ S) ;


 /*instead*/  OCWNT_Image^ First() ;


 /*instead*/  OCWNT_Image^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCWNT_SequenceOfImage^ Sub) ;


 /*instead*/  OCWNT_Image^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCWNT_Image^ I) ;


 /*instead*/  OCWNT_Image^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCWNT_SequenceOfImage()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
