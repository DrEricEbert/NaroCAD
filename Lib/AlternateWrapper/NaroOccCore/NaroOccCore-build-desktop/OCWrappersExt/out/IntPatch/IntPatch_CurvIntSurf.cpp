// File generated by CPPExt (CPP file)
//

#include "IntPatch_CurvIntSurf.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "../Adaptor3d/Adaptor3d_HSurfaceTool.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"
#include "IntPatch_HCurve2dTool.h"
#include "IntPatch_CSFunction.h"
#include "../math/math_FunctionSetRoot.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCIntPatch_CurvIntSurf::OCIntPatch_CurvIntSurf(IntPatch_CurvIntSurf* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_CurvIntSurf::OCIntPatch_CurvIntSurf(Standard_Real U, Standard_Real V, Standard_Real W, OCNaroWrappers::OCIntPatch_CSFunction^ F, Standard_Real TolTangency, Standard_Real MarginCoef) 
{
  nativeHandle = new IntPatch_CurvIntSurf(U, V, W, *((IntPatch_CSFunction*)F->Handle), TolTangency, MarginCoef);
}

OCIntPatch_CurvIntSurf::OCIntPatch_CurvIntSurf(OCNaroWrappers::OCIntPatch_CSFunction^ F, Standard_Real TolTangency) 
{
  nativeHandle = new IntPatch_CurvIntSurf(*((IntPatch_CSFunction*)F->Handle), TolTangency);
}

 void OCIntPatch_CurvIntSurf::Perform(Standard_Real U, Standard_Real V, Standard_Real W, OCNaroWrappers::OCmath_FunctionSetRoot^ Rsnld, Standard_Real u0, Standard_Real v0, Standard_Real u1, Standard_Real v1, Standard_Real w0, Standard_Real w1)
{
  ((IntPatch_CurvIntSurf*)nativeHandle)->Perform(U, V, W, *((math_FunctionSetRoot*)Rsnld->Handle), u0, v0, u1, v1, w0, w1);
}

 System::Boolean OCIntPatch_CurvIntSurf::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_CurvIntSurf*)nativeHandle)->IsDone());
}

 System::Boolean OCIntPatch_CurvIntSurf::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_CurvIntSurf*)nativeHandle)->IsEmpty());
}

OCgp_Pnt^ OCIntPatch_CurvIntSurf::Point()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((IntPatch_CurvIntSurf*)nativeHandle)->Point();
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCIntPatch_CurvIntSurf::ParameterOnCurve()
{
  return ((IntPatch_CurvIntSurf*)nativeHandle)->ParameterOnCurve();
}

 void OCIntPatch_CurvIntSurf::ParameterOnSurface(Standard_Real& U, Standard_Real& V)
{
  ((IntPatch_CurvIntSurf*)nativeHandle)->ParameterOnSurface(U, V);
}

OCIntPatch_CSFunction^ OCIntPatch_CurvIntSurf::Function()
{
  IntPatch_CSFunction* tmp = new IntPatch_CSFunction(123abc, 123abc, 123abc);
  *tmp = ((IntPatch_CurvIntSurf*)nativeHandle)->Function();
  return gcnew OCIntPatch_CSFunction(tmp);
}


