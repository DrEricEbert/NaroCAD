// File generated by CPPExt (MPV)
//
#ifndef _GC_MakeArcOfParabola_OCWrappers_HeaderFile
#define _GC_MakeArcOfParabola_OCWrappers_HeaderFile

// include native header
#include <GC_MakeArcOfParabola.hxx>
#include "../Converter.h"

#include "GC_Root.h"

#include "GC_Root.h"


namespace OCNaroWrappers
{

ref class OCGeom_TrimmedCurve;
ref class OCgp_Parab;
ref class OCgp_Pnt;


//! Implements construction algorithms for an arc <br>
//! of parabola in 3D space. The result is a Geom_TrimmedCurve curve. <br>
//! A MakeArcOfParabola object provides a framework for: <br>
//! -   defining the construction of the arc of parabola, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the results. In particular, the <br>
//!   Value function returns the constructed arc of parabola. <br>
public ref class OCGC_MakeArcOfParabola  : public OCGC_Root {

protected:
  // dummy constructor;
  OCGC_MakeArcOfParabola(OCDummy^) : OCGC_Root((OCDummy^)nullptr) {};

public:

// constructor from native
OCGC_MakeArcOfParabola(GC_MakeArcOfParabola* nativeHandle);

// Methods PUBLIC

//! Creates an arc of Parabola (TrimmedCurve from Geom) from <br>
//!          a Parabola between two parameters Alpha1 and Alpha2 <br>
//!          (given in radians). <br>
OCGC_MakeArcOfParabola(OCNaroWrappers::OCgp_Parab^ Parab, Standard_Real Alpha1, Standard_Real Alpha2, System::Boolean Sense);

//! Creates an arc of Parabola (TrimmedCurve from Geom) from <br>
//!          a Parabola between point <P> and the parameter <br>
//!          Alpha (given in radians). <br>
OCGC_MakeArcOfParabola(OCNaroWrappers::OCgp_Parab^ Parab, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Alpha, System::Boolean Sense);

//! Creates an arc of Parabola (TrimmedCurve from Geom) from <br>
//!          a Parabola between two points P1 and P2. <br>
OCGC_MakeArcOfParabola(OCNaroWrappers::OCgp_Parab^ Parab, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, System::Boolean Sense);

//! Returns the constructed arc of parabola. <br>
 /*instead*/  OCGeom_TrimmedCurve^ Value() ;


 /*instead*/  OCGeom_TrimmedCurve^ Operator() ;

~OCGC_MakeArcOfParabola()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif