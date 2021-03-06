// File generated by CPPExt (MPV)
//
#ifndef _GCPnts_QuasiUniformAbscissa_OCWrappers_HeaderFile
#define _GCPnts_QuasiUniformAbscissa_OCWrappers_HeaderFile

// include native header
#include <GCPnts_QuasiUniformAbscissa.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfReal;
ref class OCAdaptor3d_Curve;
ref class OCAdaptor2d_Curve2d;


//! This class provides an algorithm to compute a uniform abscissa <br>
//! distribution of points on a curve, i.e. a sequence of <br>
//! equidistant points. The distance between two <br>
//! consecutive points is measured along the curve. <br>
//! The distribution is defined: <br>
//! -   either by the curvilinear distance between two consecutive points <br>
//! -   or by a number of points. <br>
public ref class OCGCPnts_QuasiUniformAbscissa  {

protected:
  GCPnts_QuasiUniformAbscissa* nativeHandle;
  OCGCPnts_QuasiUniformAbscissa(OCDummy^) {};

public:
  property GCPnts_QuasiUniformAbscissa* Handle
  {
    GCPnts_QuasiUniformAbscissa* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGCPnts_QuasiUniformAbscissa(GCPnts_QuasiUniformAbscissa* nativeHandle);

// Methods PUBLIC

//! Constructs an empty algorithm. To define the problem <br>
//! to be solved, use the function Initialize. <br>
OCGCPnts_QuasiUniformAbscissa();

//! Computes a uniform abscissa distribution of points <br>
//! -   on the curve C where Abscissa is the curvilinear distance between <br>
//! two consecutive points of the distribution. <br>
OCGCPnts_QuasiUniformAbscissa(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Integer NbPoints);

//! Computes a uniform abscissa distribution of points <br>
//!   on the part of curve C limited by the two parameter values U1 and U2, <br>
//!     where Abscissa is the curvilinear distance between <br>
//! two consecutive points of the distribution. <br>
//! The first point of the distribution is either the origin of <br>
//! curve C or the point of parameter U1. The following <br>
//! points are computed such that the curvilinear <br>
//! distance between two consecutive points is equal to Abscissa. <br>
//! The last point of the distribution is either the end <br>
//! point of curve C or the point of parameter U2. <br>
//! However the curvilinear distance between this last <br>
//! point and the point just preceding it in the distribution <br>
//! is, of course, generally not equal to Abscissa. <br>
//! Use the function IsDone to verify that the <br>
//! computation was successful, the function NbPoints <br>
//! to obtain the number of points of the computed <br>
//! distribution, and the function Parameter to read the <br>
//! parameter of each point. <br>
//! Warning <br>
//! The roles of U1 and U2 are inverted if U1 > U2 . <br>
//! Warning <br>
//! C is an adapted curve, that is, an object which is an <br>
//! interface between: <br>
//! -   the services provided by either a 2D curve from <br>
//!   the package Geom2d (in the case of an <br>
//!   Adaptor2d_Curve2d curve) or a 3D curve from <br>
//!   the package Geom (in the case of an Adaptor3d_Curve curve), <br>
//! -   and those required on the curve by the computation algorithm. <br>
OCGCPnts_QuasiUniformAbscissa(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Integer NbPoints, Standard_Real U1, Standard_Real U2);

//! Initialize the algoritms with <C>, <NbPoints> and <br>
 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Integer NbPoints) ;

//! Initialize the algoritms with <C>, <Abscissa>, <U1>, <br>
//!          <U2>. <br>
 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Integer NbPoints, Standard_Real U1, Standard_Real U2) ;

//! Computes a uniform abscissa distribution of points on <br>
//!  the Curve2d <C>. <br>
//!  <NbPoints> defines the nomber of desired points. <br>
OCGCPnts_QuasiUniformAbscissa(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Integer NbPoints);

//! Computes a Uniform abscissa distribution of points <br>
//!  on a part of the Curve2d <C>. <br>
OCGCPnts_QuasiUniformAbscissa(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Integer NbPoints, Standard_Real U1, Standard_Real U2);

//! Initialize the algoritms with <C>, <NbPoints> and <br>
 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Integer NbPoints) ;

//! Initialize the algoritms with <C>, <Abscissa>, <U1>, <br>
//!          <U2>. <br>
 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Integer NbPoints, Standard_Real U1, Standard_Real U2) ;

//! Returns true if the computation was successful. <br>
//! IsDone is a protection against: <br>
//! -   non-convergence of the algorithm <br>
//! -   querying the results before computation. <br>
 /*instead*/  System::Boolean IsDone() ;


//! Returns the number of points of the distribution <br>
//! computed by this algorithm. <br>
//! This value is either: <br>
//! -   the one imposed on the algorithm at the time of <br>
//!   construction (or initialization), or <br>
//! -   the one computed by the algorithm when the <br>
//!   curvilinear distance between two consecutive <br>
//!   points of the distribution is imposed on the <br>
//!   algorithm at the time of construction (or initialization). <br>
//!   Exceptions <br>
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

~OCGCPnts_QuasiUniformAbscissa()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
