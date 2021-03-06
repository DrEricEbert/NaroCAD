// File generated by CPPExt (CPP file)
//

#include "IntPatch_TheRLineOfIntersection.h"
#include "../Converter.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"
#include "../IntSurf/IntSurf_LineOn2S.h"
#include "../Adaptor3d/Adaptor3d_HVertex.h"
#include "IntPatch_ThePointOfIntersection.h"
#include "IntPatch_SequenceOfPointOfIntersection.h"
#include "../IntSurf/IntSurf_PntOn2S.h"


using namespace OCNaroWrappers;

OCIntPatch_TheRLineOfIntersection::OCIntPatch_TheRLineOfIntersection(Handle(IntPatch_TheRLineOfIntersection)* nativeHandle) : OCIntPatch_Line((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IntPatch_TheRLineOfIntersection(*nativeHandle);
}

OCIntPatch_TheRLineOfIntersection::OCIntPatch_TheRLineOfIntersection(System::Boolean Tang, OCIntSurf_TypeTrans Trans1, OCIntSurf_TypeTrans Trans2) : OCIntPatch_Line((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IntPatch_TheRLineOfIntersection(new IntPatch_TheRLineOfIntersection(OCConverter::BooleanToStandardBoolean(Tang), (IntSurf_TypeTrans)Trans1, (IntSurf_TypeTrans)Trans2));
}

OCIntPatch_TheRLineOfIntersection::OCIntPatch_TheRLineOfIntersection(System::Boolean Tang, OCIntSurf_Situation Situ1, OCIntSurf_Situation Situ2) : OCIntPatch_Line((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IntPatch_TheRLineOfIntersection(new IntPatch_TheRLineOfIntersection(OCConverter::BooleanToStandardBoolean(Tang), (IntSurf_Situation)Situ1, (IntSurf_Situation)Situ2));
}

OCIntPatch_TheRLineOfIntersection::OCIntPatch_TheRLineOfIntersection(System::Boolean Tang) : OCIntPatch_Line((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IntPatch_TheRLineOfIntersection(new IntPatch_TheRLineOfIntersection(OCConverter::BooleanToStandardBoolean(Tang)));
}

 void OCIntPatch_TheRLineOfIntersection::AddVertex(OCNaroWrappers::OCIntPatch_ThePointOfIntersection^ Pnt)
{
  (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->AddVertex(*((IntPatch_ThePointOfIntersection*)Pnt->Handle));
}

 void OCIntPatch_TheRLineOfIntersection::Replace(Standard_Integer Index, OCNaroWrappers::OCIntPatch_ThePointOfIntersection^ Pnt)
{
  (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->Replace(Index, *((IntPatch_ThePointOfIntersection*)Pnt->Handle));
}

 void OCIntPatch_TheRLineOfIntersection::SetFirstPoint(Standard_Integer IndFirst)
{
  (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->SetFirstPoint(IndFirst);
}

 void OCIntPatch_TheRLineOfIntersection::SetLastPoint(Standard_Integer IndLast)
{
  (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->SetLastPoint(IndLast);
}

 void OCIntPatch_TheRLineOfIntersection::Add(OCNaroWrappers::OCIntSurf_LineOn2S^ L)
{
  (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->Add(*((Handle_IntSurf_LineOn2S*)L->Handle));
}

 System::Boolean OCIntPatch_TheRLineOfIntersection::IsArcOnS1()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->IsArcOnS1());
}

 System::Boolean OCIntPatch_TheRLineOfIntersection::IsArcOnS2()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->IsArcOnS2());
}

 void OCIntPatch_TheRLineOfIntersection::SetArcOnS1(OCNaroWrappers::OCAdaptor2d_HCurve2d^ A)
{
  (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->SetArcOnS1(*((Handle_Adaptor2d_HCurve2d*)A->Handle));
}

 void OCIntPatch_TheRLineOfIntersection::SetArcOnS2(OCNaroWrappers::OCAdaptor2d_HCurve2d^ A)
{
  (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->SetArcOnS2(*((Handle_Adaptor2d_HCurve2d*)A->Handle));
}

 void OCIntPatch_TheRLineOfIntersection::SetParamOnS1(Standard_Real p1, Standard_Real p2)
{
  (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->SetParamOnS1(p1, p2);
}

 void OCIntPatch_TheRLineOfIntersection::SetParamOnS2(Standard_Real& p1, Standard_Real& p2)
{
  (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->SetParamOnS2(p1, p2);
}

OCAdaptor2d_HCurve2d^ OCIntPatch_TheRLineOfIntersection::ArcOnS1()
{
  Handle(Adaptor2d_HCurve2d) tmp = (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->ArcOnS1();
  return gcnew OCAdaptor2d_HCurve2d(&tmp);
}

OCAdaptor2d_HCurve2d^ OCIntPatch_TheRLineOfIntersection::ArcOnS2()
{
  Handle(Adaptor2d_HCurve2d) tmp = (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->ArcOnS2();
  return gcnew OCAdaptor2d_HCurve2d(&tmp);
}

 void OCIntPatch_TheRLineOfIntersection::ParamOnS1(Standard_Real& p1, Standard_Real& p2)
{
  (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->ParamOnS1(p1, p2);
}

 void OCIntPatch_TheRLineOfIntersection::ParamOnS2(Standard_Real& p1, Standard_Real& p2)
{
  (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->ParamOnS2(p1, p2);
}

 System::Boolean OCIntPatch_TheRLineOfIntersection::HasFirstPoint()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->HasFirstPoint());
}

 System::Boolean OCIntPatch_TheRLineOfIntersection::HasLastPoint()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->HasLastPoint());
}

OCIntPatch_ThePointOfIntersection^ OCIntPatch_TheRLineOfIntersection::FirstPoint()
{
  IntPatch_ThePointOfIntersection* tmp = new IntPatch_ThePointOfIntersection();
  *tmp = (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->FirstPoint();
  return gcnew OCIntPatch_ThePointOfIntersection(tmp);
}

OCIntPatch_ThePointOfIntersection^ OCIntPatch_TheRLineOfIntersection::LastPoint()
{
  IntPatch_ThePointOfIntersection* tmp = new IntPatch_ThePointOfIntersection();
  *tmp = (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->LastPoint();
  return gcnew OCIntPatch_ThePointOfIntersection(tmp);
}

 Standard_Integer OCIntPatch_TheRLineOfIntersection::NbVertex()
{
  return (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->NbVertex();
}

OCIntPatch_ThePointOfIntersection^ OCIntPatch_TheRLineOfIntersection::Vertex(Standard_Integer Index)
{
  IntPatch_ThePointOfIntersection* tmp = new IntPatch_ThePointOfIntersection();
  *tmp = (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->Vertex(Index);
  return gcnew OCIntPatch_ThePointOfIntersection(tmp);
}

 System::Boolean OCIntPatch_TheRLineOfIntersection::HasPolygon()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->HasPolygon());
}

 Standard_Integer OCIntPatch_TheRLineOfIntersection::NbPnts()
{
  return (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->NbPnts();
}

OCIntSurf_PntOn2S^ OCIntPatch_TheRLineOfIntersection::Point(Standard_Integer Index)
{
  IntSurf_PntOn2S* tmp = new IntSurf_PntOn2S();
  *tmp = (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->Point(Index);
  return gcnew OCIntSurf_PntOn2S(tmp);
}

 void OCIntPatch_TheRLineOfIntersection::SetPoint(Standard_Integer Index, OCNaroWrappers::OCIntPatch_ThePointOfIntersection^ Pnt)
{
  (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->SetPoint(Index, *((IntPatch_ThePointOfIntersection*)Pnt->Handle));
}

 void OCIntPatch_TheRLineOfIntersection::ComputeVertexParameters(Standard_Real Tol)
{
  (*((Handle_IntPatch_TheRLineOfIntersection*)nativeHandle))->ComputeVertexParameters(Tol);
}


