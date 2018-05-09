// File generated by CPPExt (MPV)
//
#ifndef _GCPnts_UniformDeflection_OCWrappers_HeaderFile
#define _GCPnts_UniformDeflection_OCWrappers_HeaderFile

// include native header
#include <GCPnts_UniformDeflection.hxx>
#include "../Converter.h"


#include "../TColStd/TColStd_SequenceOfReal.h"
#include "../TColgp/TColgp_SequenceOfPnt.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_Curve;
ref class OCAdaptor2d_Curve2d;
ref class OCgp_Pnt;


//! Provides an algorithm to compute a distribution of <br>
//! points on a 'C2' continuous curve. The algorithm <br>
//! respects a criterion of maximum deflection between <br>
//! the curve and the polygon that results from the computed points. <br>
//! Note: This algorithm is relatively time consuming. A <br>
//! GCPnts_QuasiUniformDeflection algorithm is <br>
//! quicker; it can also work with non-'C2' continuous <br>
//! curves, but it generates more points in the distribution. <br>
public ref class OCGCPnts_UniformDeflection  {

protected:
  GCPnts_UniformDeflection* nativeHandle;
  OCGCPnts_UniformDeflection(OCDummy^) {};

public:
  property GCPnts_UniformDeflection* Handle
  {
    GCPnts_UniformDeflection* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGCPnts_UniformDeflection(GCPnts_UniformDeflection* nativeHandle);

// Methods PUBLIC

//! Constructs an empty algorithm. To define the problem <br>
//! to be solved, use the function Initialize. <br>
OCGCPnts_UniformDeflection();

//! Computes a uniform Deflection distribution of points on <br>
//!  the Curve <C>. <br>
//!  if <WithControl> is True,the algorithm controls the estimate <br>
//!  deflection <br>
OCGCPnts_UniformDeflection(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real Deflection, System::Boolean WithControl);

//! Computes a uniform Deflection distribution of points on <br>
//!  the Curve <C>. <br>
//!  if <WithControl> is True,the algorithm controls the estimate <br>
//!  deflection <br>
OCGCPnts_UniformDeflection(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real Deflection, System::Boolean WithControl);

//! Computes a Uniform Deflection distribution of points <br>
//!  on a part of the Curve <C>. <br>
//!  if <WithControl> is True,the algorithm controls the estimate <br>
//!  deflection <br>
OCGCPnts_UniformDeflection(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real Deflection, Standard_Real U1, Standard_Real U2, System::Boolean WithControl);

//! Computes a Uniform Deflection distribution of points <br>
//!  on a part of the Curve <C>. <br>
//!  if <WithControl> is True,the algorithm controls the estimate <br>
//!  deflection <br>
OCGCPnts_UniformDeflection(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real Deflection, Standard_Real U1, Standard_Real U2, System::Boolean WithControl);

//! Initialize the algoritms with <C>, <Deflection> <br>
 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real Deflection, System::Boolean WithControl) ;

//! Initialize the algoritms with <C>, <Deflection> <br>
 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real Deflection, System::Boolean WithControl) ;

//! Initialize the algoritms with <C>, <Deflection>, <br>
//!          <U1>,<U2> <br>
 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real Deflection, Standard_Real U1, Standard_Real U2, System::Boolean WithControl) ;

//! Initialize the algoritms with <C>, <Deflection>, <br>
//!          <U1>,<U2> <br>
//! This and the above methods initialize (or reinitialize) this algorithm and <br>
//! compute a distribution of points: <br>
//! -   on the curve C, or <br>
//! -   on the part of curve C limited by the two <br>
//!   parameter values U1 and U2, <br>
//! where the maximum distance between C and the <br>
//! polygon that results from the points of the <br>
//! distribution is not greater than Deflection. <br>
//! The first point of the distribution is either the origin <br>
//! of curve C or the point of parameter U1. The last <br>
//! point of the distribution is either the end point of <br>
//! curve C or the point of parameter U2. Intermediate <br>
//! points of the distribution are built using <br>
//! interpolations of segments of the curve limited at <br>
//! the 2nd degree. The construction ensures, in a first <br>
//! step, that the chordal deviation for this <br>
//! interpolation of the curve is less than or equal to <br>
//! Deflection. However, it does not ensure that the <br>
//! chordal deviation for the curve itself is less than or <br>
//! equal to Deflection. To do this a check is <br>
//! necessary, which may generate (second step) <br>
//! additional intermediate points. This check is time <br>
//! consuming, and can be avoided by setting <br>
//! WithControl to false. Note that by default <br>
//! WithControl is true and check is performed. <br>
//! Use the function IsDone to verify that the <br>
//! computation was successful, the function NbPoints <br>
//! to obtain the number of points of the computed <br>
//! distribution, and the function Parameter to read <br>
//! the parameter of each point. <br>
//! Warning <br>
//! -   C is necessary, 'C2' continuous. This property is <br>
//!   not checked at construction time. <br>
//! -   The roles of U1 and U2 are inverted if U1 > U2. <br>
//!   Warning <br>
//! C is an adapted curve, i.e. an object which is an interface between: <br>
//! -   the services provided by either a 2D curve from <br>
//!   the package Geom2d (in the case of an <br>
//!   Adaptor2d_Curve2d curve) or a 3D curve from <br>
//!   the package Geom (in the case of an Adaptor3d_Curve curve), <br>
//! -   and those required on the curve by the computation algorithm. <br>
 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real Deflection, Standard_Real U1, Standard_Real U2, System::Boolean WithControl) ;

//! Returns true if the computation was successful. <br>
//! IsDone is a protection against: <br>
//! -   non-convergence of the algorithm <br>
//! -   querying the results before computation. <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns the number of points of the distribution <br>
//! computed by this algorithm. <br>
//! Exceptions <br>
//! StdFail_NotDone if this algorithm has not been <br>
//! initialized, or if the computation was not successful. <br>
 /*instead*/  Standard_Integer NbPoints() ;

//! Returns the parameter of the point of index Index in <br>
//! the distribution computed by this algorithm. <br>
//! Warning <br>
//! Index must be greater than or equal to 1, and less <br>
//! than or equal to the number of points of the <br>
//! distribution. However, pay particular attention as this <br>
//! condition is not checked by this function. <br>
//! Exceptions <br>
//! StdFail_NotDone if this algorithm has not been <br>
//! initialized, or if the computation was not successful. <br>
 /*instead*/  Standard_Real Parameter(Standard_Integer Index) ;

//! Returns the point of index Index in the distribution <br>
//! computed by this algorithm. <br>
//! Warning <br>
//! Index must be greater than or equal to 1, and less <br>
//! than or equal to the number of points of the <br>
//! distribution. However, pay particular attention as this <br>
//! condition is not checked by this function. <br>
//! Exceptions <br>
//! StdFAil_NotDone if this algorithm has not been <br>
//! initialized, or if the computation was not successful. <br>
 /*instead*/  OCgp_Pnt^ Value(Standard_Integer Index) ;

//! Returns the deflection between the curve and the <br>
//! polygon resulting from the points of the distribution <br>
//! computed by this algorithm. <br>
//! This value is the one given to the algorithm at the <br>
//! time of construction (or initialization). <br>
//! Exceptions <br>
//! StdFail_NotDone if this algorithm has not been <br>
//! initialized, or if the computation was not successful. <br>
 /*instead*/  Standard_Real Deflection() ;

~OCGCPnts_UniformDeflection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif