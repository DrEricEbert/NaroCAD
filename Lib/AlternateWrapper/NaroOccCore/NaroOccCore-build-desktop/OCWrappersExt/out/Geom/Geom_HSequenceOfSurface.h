// File generated by CPPExt (Transient)
//
#ifndef _Geom_HSequenceOfSurface_OCWrappers_HeaderFile
#define _Geom_HSequenceOfSurface_OCWrappers_HeaderFile

// include the wrapped class
#include <Geom_HSequenceOfSurface.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Geom_SequenceOfSurface.h"


namespace OCNaroWrappers
{

ref class OCGeom_Surface;
ref class OCGeom_SequenceOfSurface;



public ref class OCGeom_HSequenceOfSurface : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCGeom_HSequenceOfSurface(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom_HSequenceOfSurface(Handle(Geom_HSequenceOfSurface)* nativeHandle);

// Methods PUBLIC


OCGeom_HSequenceOfSurface();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  void Clear() ;


 /*instead*/  void Append(OCNaroWrappers::OCGeom_Surface^ anItem) ;


 /*instead*/  void Append(OCNaroWrappers::OCGeom_HSequenceOfSurface^ aSequence) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCGeom_Surface^ anItem) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCGeom_HSequenceOfSurface^ aSequence) ;


 /*instead*/  void Reverse() ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCGeom_Surface^ anItem) ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCGeom_HSequenceOfSurface^ aSequence) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCGeom_Surface^ anItem) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCGeom_HSequenceOfSurface^ aSequence) ;


 /*instead*/  void Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex) ;


 /*instead*/  OCGeom_HSequenceOfSurface^ Split(Standard_Integer anIndex) ;


 /*instead*/  void SetValue(Standard_Integer anIndex, OCNaroWrappers::OCGeom_Surface^ anItem) ;


 /*instead*/  OCGeom_Surface^ Value(Standard_Integer anIndex) ;


 /*instead*/  OCGeom_Surface^ ChangeValue(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer fromIndex, Standard_Integer toIndex) ;


 /*instead*/  OCGeom_SequenceOfSurface^ Sequence() ;


 /*instead*/  OCGeom_SequenceOfSurface^ ChangeSequence() ;


 /*instead*/  OCGeom_HSequenceOfSurface^ ShallowCopy() ;

~OCGeom_HSequenceOfSurface()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
