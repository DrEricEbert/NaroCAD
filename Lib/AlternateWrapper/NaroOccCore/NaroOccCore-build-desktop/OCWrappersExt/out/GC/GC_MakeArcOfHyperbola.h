// File generated by CPPExt (MPV)
//
#ifndef _GC_MakeArcOfHyperbola_OCWrappers_HeaderFile
#define _GC_MakeArcOfHyperbola_OCWrappers_HeaderFile

// include native header
#include <GC_MakeArcOfHyperbola.hxx>
#include "../Converter.h"

#include "GC_Root.h"

#include "GC_Root.h"


namespace OCNaroWrappers
{

ref class OCGeom_TrimmedCurve;
ref class OCgp_Hypr;
ref class OCgp_Pnt;


//! Implements construction algorithms for an arc <br>
//! of hyperbola in 3D space. The result is a Geom_TrimmedCurve curve. <br>
//! A MakeArcOfHyperbola object provides a framework for: <br>
//! -   defining the construction of the arc of hyperbola, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the results. In particular, the <br>
//!   Value function returns the constructed arc of hyperbola. <br>
public ref class OCGC_MakeArcOfHyperbola  : public OCGC_Root {

protected:
  // dummy constructor;
  OCGC_MakeArcOfHyperbola(OCDummy^) : OCGC_Root((OCDummy^)nullptr) {};

public:

// constructor from native
OCGC_MakeArcOfHyperbola(GC_MakeArcOfHyperbola* nativeHandle);

// Methods PUBLIC

//! Creates an arc of Hyperbola (TrimmedCurve from Geom) from <br>
//!          a Hyperbola between two parameters Alpha1 and Alpha2 <br>
//!          (given in radians). <br>
OCGC_MakeArcOfHyperbola(OCNaroWrappers::OCgp_Hypr^ Hypr, Standard_Real Alpha1, Standard_Real Alpha2, System::Boolean Sense);

//! Creates an arc of Hyperbola (TrimmedCurve from Geom) from <br>
//!          a Hyperbola between point <P> and the parameter <br>
//!          Alpha (given in radians). <br>
OCGC_MakeArcOfHyperbola(OCNaroWrappers::OCgp_Hypr^ Hypr, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Alpha, System::Boolean Sense);

//! Creates an arc of Hyperbola (TrimmedCurve from Geom) from <br>
//!          a Hyperbola between two points P1 and P2. <br>
//! The orientation of the arc of hyperbola is: <br>
//! -   the sense of Hypr if Sense is true, or <br>
//! -   the opposite sense if Sense is false. <br>
OCGC_MakeArcOfHyperbola(OCNaroWrappers::OCgp_Hypr^ Hypr, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, System::Boolean Sense);

//! Returns the constructed arc of hyperbola. <br>
 /*instead*/  OCGeom_TrimmedCurve^ Value() ;


 /*instead*/  OCGeom_TrimmedCurve^ Operator() ;

~OCGC_MakeArcOfHyperbola()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif