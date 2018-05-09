// File generated by CPPExt (MPV)
//
#ifndef _BRepExtrema_ExtFF_OCWrappers_HeaderFile
#define _BRepExtrema_ExtFF_OCWrappers_HeaderFile

// include native header
#include <BRepExtrema_ExtFF.hxx>
#include "../Converter.h"


#include "../Extrema/Extrema_ExtSS.h"
#include "../TColStd/TColStd_SequenceOfReal.h"
#include "../Extrema/Extrema_SequenceOfPOnSurf.h"


namespace OCNaroWrappers
{

ref class OCBRepAdaptor_HSurface;
ref class OCTopoDS_Face;
ref class OCgp_Pnt;



public ref class OCBRepExtrema_ExtFF  {

protected:
  BRepExtrema_ExtFF* nativeHandle;
  OCBRepExtrema_ExtFF(OCDummy^) {};

public:
  property BRepExtrema_ExtFF* Handle
  {
    BRepExtrema_ExtFF* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepExtrema_ExtFF(BRepExtrema_ExtFF* nativeHandle);

// Methods PUBLIC


OCBRepExtrema_ExtFF();

//! It calculates all the distances. <br>
OCBRepExtrema_ExtFF(OCNaroWrappers::OCTopoDS_Face^ F1, OCNaroWrappers::OCTopoDS_Face^ F2);


 /*instead*/  void Initialize(OCNaroWrappers::OCTopoDS_Face^ F2) ;

//! An exception is raised if the fields have not been <br>
//!          initialized. <br>
//!          Be careful: this method uses the Face F2 only for <br>
//!          classify, not for the fields. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCTopoDS_Face^ F1, OCNaroWrappers::OCTopoDS_Face^ F2) ;

//! True if the distances are found. <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns True if the surfaces are parallel. <br>
 /*instead*/  System::Boolean IsParallel() ;

//! Returns the number of extremum distances. <br>
 /*instead*/  Standard_Integer NbExt() ;

//! Returns the value of the <N>th extremum distance. <br>
 /*instead*/  Standard_Real Value(Standard_Integer N) ;

//! Returns the parameters on the  Face F1 of the  <N>th <br>
//!          extremum distance. <br>
 /*instead*/  void ParameterOnFace1(Standard_Integer N, Standard_Real& U, Standard_Real& V) ;

//! Returns the parameters on the  Face F2 of the  <N>th <br>
//!          extremum distance. <br>
 /*instead*/  void ParameterOnFace2(Standard_Integer N, Standard_Real& U, Standard_Real& V) ;

//! Returns the Point of the <N>th extremum distance. <br>
 /*instead*/  OCgp_Pnt^ PointOnFace1(Standard_Integer N) ;

//! Returns the Point of the <N>th extremum distance. <br>
 /*instead*/  OCgp_Pnt^ PointOnFace2(Standard_Integer N) ;

~OCBRepExtrema_ExtFF()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif