// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_ThePathPointOfTheSOnBoundsOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_ThePathPointOfTheSOnBoundsOfIntersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_ThePathPointOfTheSOnBoundsOfIntersection.hxx>
#include "../Converter.h"


#include "../gp/gp_Pnt.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HVertex;
ref class OCAdaptor2d_HCurve2d;
ref class OCgp_Pnt;



public ref class OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection  {

protected:
  IntPatch_ThePathPointOfTheSOnBoundsOfIntersection* nativeHandle;
  OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection(OCDummy^) {};

public:
  property IntPatch_ThePathPointOfTheSOnBoundsOfIntersection* Handle
  {
    IntPatch_ThePathPointOfTheSOnBoundsOfIntersection* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection(IntPatch_ThePathPointOfTheSOnBoundsOfIntersection* nativeHandle);

// Methods PUBLIC


OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection();


OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol, OCNaroWrappers::OCAdaptor3d_HVertex^ V, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A, Standard_Real Parameter);


OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A, Standard_Real Parameter);


 /*instead*/  void SetValue(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol, OCNaroWrappers::OCAdaptor3d_HVertex^ V, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A, Standard_Real Parameter) ;


 /*instead*/  void SetValue(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A, Standard_Real Parameter) ;


 /*instead*/  OCgp_Pnt^ Value() ;


 /*instead*/  Standard_Real Tolerance() ;


 /*instead*/  System::Boolean IsNew() ;


 /*instead*/  OCAdaptor3d_HVertex^ Vertex() ;


 /*instead*/  OCAdaptor2d_HCurve2d^ Arc() ;


 /*instead*/  Standard_Real Parameter() ;

~OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif