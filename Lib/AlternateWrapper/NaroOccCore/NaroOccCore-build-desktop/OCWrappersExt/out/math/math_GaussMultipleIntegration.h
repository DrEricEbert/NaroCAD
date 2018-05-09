// File generated by CPPExt (MPV)
//
#ifndef _math_GaussMultipleIntegration_OCWrappers_HeaderFile
#define _math_GaussMultipleIntegration_OCWrappers_HeaderFile

// include native header
#include <math_GaussMultipleIntegration.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCmath_MultipleVarFunction;
ref class OCmath_Vector;
ref class OCmath_IntegerVector;



//! This class implements the integration of a function of multiple <br>
//! variables between the parameter bounds Lower[a..b] and Upper[a..b]. <br>
//!  Warning: Each element of Order must be inferior or equal to 61. <br>
public ref class OCmath_GaussMultipleIntegration  {

protected:
  math_GaussMultipleIntegration* nativeHandle;
  OCmath_GaussMultipleIntegration(OCDummy^) {};

public:
  property math_GaussMultipleIntegration* Handle
  {
    math_GaussMultipleIntegration* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCmath_GaussMultipleIntegration(math_GaussMultipleIntegration* nativeHandle);

// Methods PUBLIC


//! The Gauss-Legendre integration with Order = points of <br>
//! integration for each unknow, is done on the function F <br>
//! between the bounds Lower and Upper. <br>
OCmath_GaussMultipleIntegration(OCNaroWrappers::OCmath_MultipleVarFunction^ F, OCNaroWrappers::OCmath_Vector^ Lower, OCNaroWrappers::OCmath_Vector^ Upper, OCNaroWrappers::OCmath_IntegerVector^ Order);

//! returns True if all has been correctly done. <br>
 /*instead*/  System::Boolean IsDone() ;

//! returns the value of the integral. <br>
 /*instead*/  Standard_Real Value() ;

//! Prints information on the current state of the object. <br>
 /*instead*/  void Dump(Standard_OStream& o) ;

~OCmath_GaussMultipleIntegration()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif