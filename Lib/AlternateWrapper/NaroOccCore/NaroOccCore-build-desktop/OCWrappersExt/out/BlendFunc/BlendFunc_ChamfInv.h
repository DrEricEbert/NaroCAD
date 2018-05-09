// File generated by CPPExt (MPV)
//
#ifndef _BlendFunc_ChamfInv_OCWrappers_HeaderFile
#define _BlendFunc_ChamfInv_OCWrappers_HeaderFile

// include native header
#include <BlendFunc_ChamfInv.hxx>
#include "../Converter.h"

#include "../Blend/Blend_FuncInv.h"

#include "BlendFunc_Corde.h"
#include "../Blend/Blend_FuncInv.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HSurface;
ref class OCAdaptor3d_HCurve;
ref class OCAdaptor2d_HCurve2d;
ref class OCmath_Vector;
ref class OCmath_Matrix;



public ref class OCBlendFunc_ChamfInv  : public OCBlend_FuncInv {

protected:
  // dummy constructor;
  OCBlendFunc_ChamfInv(OCDummy^) : OCBlend_FuncInv((OCDummy^)nullptr) {};

public:

// constructor from native
OCBlendFunc_ChamfInv(BlendFunc_ChamfInv* nativeHandle);

// Methods PUBLIC


OCBlendFunc_ChamfInv(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_HCurve^ C);


 /*instead*/  void Set(System::Boolean OnFirst, OCNaroWrappers::OCAdaptor2d_HCurve2d^ COnSurf) ;


 /*instead*/  void GetTolerance(OCNaroWrappers::OCmath_Vector^ Tolerance, Standard_Real Tol) ;


 /*instead*/  void GetBounds(OCNaroWrappers::OCmath_Vector^ InfBound, OCNaroWrappers::OCmath_Vector^ SupBound) ;


 /*instead*/  System::Boolean IsSolution(OCNaroWrappers::OCmath_Vector^ Sol, Standard_Real Tol) ;

//! returns the number of equations of the function. <br>
virtual /*instead*/  Standard_Integer NbEquations() ;

//! computes the values <F> of the Functions for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
virtual /*instead*/  System::Boolean Value(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F) ;

//! returns the values <D> of the derivatives for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
virtual /*instead*/  System::Boolean Derivatives(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Matrix^ D) ;

//! returns the values <F> of the functions and the derivatives <br>
//!          <D> for the variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
virtual /*instead*/  System::Boolean Values(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ D) ;


 /*instead*/  void Set(Standard_Real Dist1, Standard_Real Dist2, Standard_Integer Choix) ;

~OCBlendFunc_ChamfInv()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif