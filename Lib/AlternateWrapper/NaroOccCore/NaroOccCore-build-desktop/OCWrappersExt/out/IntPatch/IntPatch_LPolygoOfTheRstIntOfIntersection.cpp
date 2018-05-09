// File generated by CPPExt (CPP file)
//

#include "IntPatch_LPolygoOfTheRstIntOfIntersection.h"
#include "../Converter.h"
#include "IntPatch_TheWLineOfIntersection.h"
#include "IntPatch_TheRLineOfIntersection.h"
#include "../Bnd/Bnd_Box2d.h"
#include "../gp/gp_Pnt2d.h"


using namespace OCNaroWrappers;

OCIntPatch_LPolygoOfTheRstIntOfIntersection::OCIntPatch_LPolygoOfTheRstIntOfIntersection(IntPatch_LPolygoOfTheRstIntOfIntersection* nativeHandle) : OCIntPatch_Polygo((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_LPolygoOfTheRstIntOfIntersection::OCIntPatch_LPolygoOfTheRstIntOfIntersection() : OCIntPatch_Polygo((OCDummy^)nullptr)

{
  nativeHandle = new IntPatch_LPolygoOfTheRstIntOfIntersection();
}

OCIntPatch_LPolygoOfTheRstIntOfIntersection::OCIntPatch_LPolygoOfTheRstIntOfIntersection(Standard_Real InitDefle) : OCIntPatch_Polygo((OCDummy^)nullptr)

{
  nativeHandle = new IntPatch_LPolygoOfTheRstIntOfIntersection(InitDefle);
}

 void OCIntPatch_LPolygoOfTheRstIntOfIntersection::SetWLine(System::Boolean OnFirst, OCNaroWrappers::OCIntPatch_TheWLineOfIntersection^ Line)
{
  ((IntPatch_LPolygoOfTheRstIntOfIntersection*)nativeHandle)->SetWLine(OCConverter::BooleanToStandardBoolean(OnFirst), *((Handle_IntPatch_TheWLineOfIntersection*)Line->Handle));
}

 void OCIntPatch_LPolygoOfTheRstIntOfIntersection::SetRLine(System::Boolean OnFirst, OCNaroWrappers::OCIntPatch_TheRLineOfIntersection^ Line)
{
  ((IntPatch_LPolygoOfTheRstIntOfIntersection*)nativeHandle)->SetRLine(OCConverter::BooleanToStandardBoolean(OnFirst), *((Handle_IntPatch_TheRLineOfIntersection*)Line->Handle));
}

 void OCIntPatch_LPolygoOfTheRstIntOfIntersection::ResetError()
{
  ((IntPatch_LPolygoOfTheRstIntOfIntersection*)nativeHandle)->ResetError();
}

OCBnd_Box2d^ OCIntPatch_LPolygoOfTheRstIntOfIntersection::Bounding()
{
  Bnd_Box2d* tmp = new Bnd_Box2d();
  *tmp = ((IntPatch_LPolygoOfTheRstIntOfIntersection*)nativeHandle)->Bounding();
  return gcnew OCBnd_Box2d(tmp);
}

 Standard_Real OCIntPatch_LPolygoOfTheRstIntOfIntersection::Error()
{
  return ((IntPatch_LPolygoOfTheRstIntOfIntersection*)nativeHandle)->Error();
}

 System::Boolean OCIntPatch_LPolygoOfTheRstIntOfIntersection::Closed()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_LPolygoOfTheRstIntOfIntersection*)nativeHandle)->Closed());
}

 Standard_Integer OCIntPatch_LPolygoOfTheRstIntOfIntersection::NbPoints()
{
  return ((IntPatch_LPolygoOfTheRstIntOfIntersection*)nativeHandle)->NbPoints();
}

OCgp_Pnt2d^ OCIntPatch_LPolygoOfTheRstIntOfIntersection::Point(Standard_Integer Index)
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = ((IntPatch_LPolygoOfTheRstIntOfIntersection*)nativeHandle)->Point(Index);
  return gcnew OCgp_Pnt2d(tmp);
}

