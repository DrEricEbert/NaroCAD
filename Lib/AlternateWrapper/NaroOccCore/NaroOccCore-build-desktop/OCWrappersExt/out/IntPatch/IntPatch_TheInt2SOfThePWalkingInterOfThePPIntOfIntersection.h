// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection.hxx>
#include "../Converter.h"


#include "../IntSurf/IntSurf_PntOn2S.h"
#include "../gp/gp_Dir.h"
#include "../gp/gp_Dir2d.h"
#include "IntPatch_TheFunctionOfTheInt2SOfThePWalkingInterOfThePPIntOfIntersection.h"
#include "../IntImp/IntImp_ConstIsoparametric.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HSurface;
ref class OCIntPatch_HSurfaceTool;
ref class OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInterOfThePPIntOfIntersection;
ref class OCTColStd_Array1OfReal;
ref class OCmath_FunctionSetRoot;
ref class OCIntSurf_PntOn2S;
ref class OCgp_Dir;
ref class OCgp_Dir2d;



public ref class OCIntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection  {

protected:
  IntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection* nativeHandle;
  OCIntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection(OCDummy^) {};

public:
  property IntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection* Handle
  {
    IntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection(IntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection* nativeHandle);

// Methods PUBLIC


OCIntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection();


OCIntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection(OCNaroWrappers::OCTColStd_Array1OfReal^ Param, OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, Standard_Real TolTangency);


OCIntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, Standard_Real TolTangency);


 /*instead*/  OCIntImp_ConstIsoparametric Perform(OCNaroWrappers::OCTColStd_Array1OfReal^ Param, OCNaroWrappers::OCmath_FunctionSetRoot^ Rsnld) ;


 /*instead*/  OCIntImp_ConstIsoparametric Perform(OCNaroWrappers::OCTColStd_Array1OfReal^ Param, OCNaroWrappers::OCmath_FunctionSetRoot^ Rsnld, OCIntImp_ConstIsoparametric ChoixIso) ;


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  OCIntSurf_PntOn2S^ Point() ;


 /*instead*/  System::Boolean IsTangent() ;


 /*instead*/  OCgp_Dir^ Direction() ;


 /*instead*/  OCgp_Dir2d^ DirectionOnS1() ;


 /*instead*/  OCgp_Dir2d^ DirectionOnS2() ;


 /*instead*/  OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInterOfThePPIntOfIntersection^ Function() ;

~OCIntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
