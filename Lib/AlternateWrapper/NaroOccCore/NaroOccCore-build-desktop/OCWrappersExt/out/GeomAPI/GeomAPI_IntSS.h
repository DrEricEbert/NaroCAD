// File generated by CPPExt (MPV)
//
#ifndef _GeomAPI_IntSS_OCWrappers_HeaderFile
#define _GeomAPI_IntSS_OCWrappers_HeaderFile

// include native header
#include <GeomAPI_IntSS.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCGeom_Surface;
ref class OCGeom_Curve;


//! This class implements methods for <br>
//!   computing the intersection curves   between two surfaces. <br>
//!       The result is curves from Geom.  The "domain" used for <br>
//!       a surface   is the natural  parametric domain <br>
//!       unless the surface is a  RectangularTrimmedSurface <br>
//!       from Geom. <br>
public ref class OCGeomAPI_IntSS  {

protected:
  GeomAPI_IntSS* nativeHandle;
  OCGeomAPI_IntSS(OCDummy^) {};

public:
  property GeomAPI_IntSS* Handle
  {
    GeomAPI_IntSS* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeomAPI_IntSS(GeomAPI_IntSS* nativeHandle);

// Methods PUBLIC

//! Constructs an empty object. Use the <br>
//! function Perform for further initialization algorithm by two surfaces. <br>
OCGeomAPI_IntSS();

//! Computes the intersection curves <br>
//! between the two surfaces S1 and S2. Parameter Tol defines the precision <br>
//! of curves computation. For most cases the value 1.0e-7 is recommended to use. <br>
//! Warning <br>
//! Use the function IsDone to verify that the intersections are successfully computed.I <br>
OCGeomAPI_IntSS(OCNaroWrappers::OCGeom_Surface^ S1, OCNaroWrappers::OCGeom_Surface^ S2, Standard_Real Tol);

//! Initializes an algorithm with the <br>
//! given arguments and computes the intersection curves between the two surfaces S1 and S2. <br>
//! Parameter Tol defines the precision of curves computation. For most <br>
//! cases the value 1.0e-7 is recommended to use. <br>
//! Warning <br>
//! Use function IsDone to verify that the intersections are successfully computed. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCGeom_Surface^ S1, OCNaroWrappers::OCGeom_Surface^ S2, Standard_Real Tol) ;

//! Returns True if the intersection was successful. <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns the number of computed intersection curves. <br>
//! Exceptions <br>
//! StdFail_NotDone if the computation fails. <br>
 /*instead*/  Standard_Integer NbLines() ;

//! Returns the computed intersection curve of index Index. <br>
//! Exceptions <br>
//! StdFail_NotDone if the computation fails. <br>
//! Standard_OutOfRange if Index is out of range [1, NbLines] where NbLines <br>
//! is the number of computed intersection curves. <br>
 /*instead*/  OCGeom_Curve^ Line(Standard_Integer Index) ;

~OCGeomAPI_IntSS()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif