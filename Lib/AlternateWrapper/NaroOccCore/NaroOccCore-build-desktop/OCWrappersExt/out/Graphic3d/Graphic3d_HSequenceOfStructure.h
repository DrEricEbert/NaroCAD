// File generated by CPPExt (Transient)
//
#ifndef _Graphic3d_HSequenceOfStructure_OCWrappers_HeaderFile
#define _Graphic3d_HSequenceOfStructure_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic3d_HSequenceOfStructure.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Graphic3d_SequenceOfStructure.h"


namespace OCNaroWrappers
{

ref class OCGraphic3d_Structure;
ref class OCGraphic3d_SequenceOfStructure;



public ref class OCGraphic3d_HSequenceOfStructure : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCGraphic3d_HSequenceOfStructure(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_HSequenceOfStructure(Handle(Graphic3d_HSequenceOfStructure)* nativeHandle);

// Methods PUBLIC


OCGraphic3d_HSequenceOfStructure();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  void Clear() ;


 /*instead*/  void Append(OCNaroWrappers::OCGraphic3d_Structure^ anItem) ;


 /*instead*/  void Append(OCNaroWrappers::OCGraphic3d_HSequenceOfStructure^ aSequence) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCGraphic3d_Structure^ anItem) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCGraphic3d_HSequenceOfStructure^ aSequence) ;


 /*instead*/  void Reverse() ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCGraphic3d_Structure^ anItem) ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCGraphic3d_HSequenceOfStructure^ aSequence) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCGraphic3d_Structure^ anItem) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCGraphic3d_HSequenceOfStructure^ aSequence) ;


 /*instead*/  void Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex) ;


 /*instead*/  OCGraphic3d_HSequenceOfStructure^ Split(Standard_Integer anIndex) ;


 /*instead*/  void SetValue(Standard_Integer anIndex, OCNaroWrappers::OCGraphic3d_Structure^ anItem) ;


 /*instead*/  OCGraphic3d_Structure^ Value(Standard_Integer anIndex) ;


 /*instead*/  OCGraphic3d_Structure^ ChangeValue(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer fromIndex, Standard_Integer toIndex) ;


 /*instead*/  OCGraphic3d_SequenceOfStructure^ Sequence() ;


 /*instead*/  OCGraphic3d_SequenceOfStructure^ ChangeSequence() ;


 /*instead*/  OCGraphic3d_HSequenceOfStructure^ ShallowCopy() ;

~OCGraphic3d_HSequenceOfStructure()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
