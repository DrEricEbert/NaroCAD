// File generated by CPPExt (Transient)
//
#ifndef _IntSurf_LineOn2S_OCWrappers_HeaderFile
#define _IntSurf_LineOn2S_OCWrappers_HeaderFile

// include the wrapped class
#include <IntSurf_LineOn2S.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "IntSurf_SequenceOfPntOn2S.h"


namespace OCNaroWrappers
{

ref class OCIntSurf_PntOn2S;



public ref class OCIntSurf_LineOn2S : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCIntSurf_LineOn2S(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntSurf_LineOn2S(Handle(IntSurf_LineOn2S)* nativeHandle);

// Methods PUBLIC


OCIntSurf_LineOn2S();

//! Adds a point in the line. <br>
 /*instead*/  void Add(OCNaroWrappers::OCIntSurf_PntOn2S^ P) ;

//! Returns the number of points in the line. <br>
 /*instead*/  Standard_Integer NbPoints() ;

//! Returns the point of range Index in the line. <br>
 /*instead*/  OCIntSurf_PntOn2S^ Value(Standard_Integer Index) ;

//! Reverses the order of points of the line. <br>
 /*instead*/  void Reverse() ;

//! Keeps in <me> the points 1 to Index-1, and returns <br>
//!          the items Index to the end. <br>
 /*instead*/  OCIntSurf_LineOn2S^ Split(Standard_Integer Index) ;

//! Replaces the point of range Index in the line. <br>
 /*instead*/  void Value(Standard_Integer Index, OCNaroWrappers::OCIntSurf_PntOn2S^ P) ;

//! Sets the parametric coordinates on one of the surfaces <br>
//!          of the point of range Index in the line. <br>
 /*instead*/  void SetUV(Standard_Integer Index, System::Boolean OnFirst, Standard_Real U, Standard_Real V) ;


 /*instead*/  void Clear() ;


 /*instead*/  void InsertBefore(Standard_Integer I, OCNaroWrappers::OCIntSurf_PntOn2S^ P) ;


 /*instead*/  void RemovePoint(Standard_Integer I) ;

~OCIntSurf_LineOn2S()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
