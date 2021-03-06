// File generated by CPPExt (CPP file)
//

#include "ProjLib_CompProjectedCurve.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "../Adaptor3d/Adaptor3d_HCurve.h"
#include "ProjLib_HSequenceOfHSequenceOfPnt.h"
#include "../TColStd/TColStd_HArray1OfBoolean.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Vec2d.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"
#include "../TColStd/TColStd_Array1OfReal.h"


using namespace OCNaroWrappers;

OCProjLib_CompProjectedCurve::OCProjLib_CompProjectedCurve(ProjLib_CompProjectedCurve* nativeHandle) : OCAdaptor2d_Curve2d((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCProjLib_CompProjectedCurve::OCProjLib_CompProjectedCurve() : OCAdaptor2d_Curve2d((OCDummy^)nullptr)

{
  nativeHandle = new ProjLib_CompProjectedCurve();
}

OCProjLib_CompProjectedCurve::OCProjLib_CompProjectedCurve(OCNaroWrappers::OCAdaptor3d_HSurface^ S, OCNaroWrappers::OCAdaptor3d_HCurve^ C, Standard_Real TolU, Standard_Real TolV) : OCAdaptor2d_Curve2d((OCDummy^)nullptr)

{
  nativeHandle = new ProjLib_CompProjectedCurve(*((Handle_Adaptor3d_HSurface*)S->Handle), *((Handle_Adaptor3d_HCurve*)C->Handle), TolU, TolV);
}

OCProjLib_CompProjectedCurve::OCProjLib_CompProjectedCurve(OCNaroWrappers::OCAdaptor3d_HSurface^ S, OCNaroWrappers::OCAdaptor3d_HCurve^ C, Standard_Real TolU, Standard_Real TolV, Standard_Real MaxDist) : OCAdaptor2d_Curve2d((OCDummy^)nullptr)

{
  nativeHandle = new ProjLib_CompProjectedCurve(*((Handle_Adaptor3d_HSurface*)S->Handle), *((Handle_Adaptor3d_HCurve*)C->Handle), TolU, TolV, MaxDist);
}

 void OCProjLib_CompProjectedCurve::Init()
{
  ((ProjLib_CompProjectedCurve*)nativeHandle)->Init();
}

 void OCProjLib_CompProjectedCurve::Load(OCNaroWrappers::OCAdaptor3d_HSurface^ S)
{
  ((ProjLib_CompProjectedCurve*)nativeHandle)->Load(*((Handle_Adaptor3d_HSurface*)S->Handle));
}

 void OCProjLib_CompProjectedCurve::Load(OCNaroWrappers::OCAdaptor3d_HCurve^ C)
{
  ((ProjLib_CompProjectedCurve*)nativeHandle)->Load(*((Handle_Adaptor3d_HCurve*)C->Handle));
}

OCAdaptor3d_HSurface^ OCProjLib_CompProjectedCurve::GetSurface()
{
  Handle(Adaptor3d_HSurface) tmp = ((ProjLib_CompProjectedCurve*)nativeHandle)->GetSurface();
  return gcnew OCAdaptor3d_HSurface(&tmp);
}

OCAdaptor3d_HCurve^ OCProjLib_CompProjectedCurve::GetCurve()
{
  Handle(Adaptor3d_HCurve) tmp = ((ProjLib_CompProjectedCurve*)nativeHandle)->GetCurve();
  return gcnew OCAdaptor3d_HCurve(&tmp);
}

 void OCProjLib_CompProjectedCurve::GetTolerance(Standard_Real& TolU, Standard_Real& TolV)
{
  ((ProjLib_CompProjectedCurve*)nativeHandle)->GetTolerance(TolU, TolV);
}

 Standard_Integer OCProjLib_CompProjectedCurve::NbCurves()
{
  return ((ProjLib_CompProjectedCurve*)nativeHandle)->NbCurves();
}

 void OCProjLib_CompProjectedCurve::Bounds(Standard_Integer Index, Standard_Real& Udeb, Standard_Real& Ufin)
{
  ((ProjLib_CompProjectedCurve*)nativeHandle)->Bounds(Index, Udeb, Ufin);
}

 System::Boolean OCProjLib_CompProjectedCurve::IsSinglePnt(Standard_Integer Index, OCNaroWrappers::OCgp_Pnt2d^ P)
{
  return OCConverter::StandardBooleanToBoolean(((ProjLib_CompProjectedCurve*)nativeHandle)->IsSinglePnt(Index, *((gp_Pnt2d*)P->Handle)));
}

 System::Boolean OCProjLib_CompProjectedCurve::IsUIso(Standard_Integer Index, Standard_Real& U)
{
  return OCConverter::StandardBooleanToBoolean(((ProjLib_CompProjectedCurve*)nativeHandle)->IsUIso(Index, U));
}

 System::Boolean OCProjLib_CompProjectedCurve::IsVIso(Standard_Integer Index, Standard_Real& V)
{
  return OCConverter::StandardBooleanToBoolean(((ProjLib_CompProjectedCurve*)nativeHandle)->IsVIso(Index, V));
}

OCgp_Pnt2d^ OCProjLib_CompProjectedCurve::Value(Standard_Real U)
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = ((ProjLib_CompProjectedCurve*)nativeHandle)->Value(U);
  return gcnew OCgp_Pnt2d(tmp);
}

 void OCProjLib_CompProjectedCurve::D0(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P)
{
  ((ProjLib_CompProjectedCurve*)nativeHandle)->D0(U, *((gp_Pnt2d*)P->Handle));
}

 void OCProjLib_CompProjectedCurve::D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V)
{
  ((ProjLib_CompProjectedCurve*)nativeHandle)->D1(U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V->Handle));
}

 void OCProjLib_CompProjectedCurve::D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2)
{
  ((ProjLib_CompProjectedCurve*)nativeHandle)->D2(U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle), *((gp_Vec2d*)V2->Handle));
}

OCgp_Vec2d^ OCProjLib_CompProjectedCurve::DN(Standard_Real U, Standard_Integer N)
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((ProjLib_CompProjectedCurve*)nativeHandle)->DN(U, N);
  return gcnew OCgp_Vec2d(tmp);
}

 Standard_Real OCProjLib_CompProjectedCurve::FirstParameter()
{
  return ((ProjLib_CompProjectedCurve*)nativeHandle)->FirstParameter();
}

 Standard_Real OCProjLib_CompProjectedCurve::LastParameter()
{
  return ((ProjLib_CompProjectedCurve*)nativeHandle)->LastParameter();
}

 Standard_Integer OCProjLib_CompProjectedCurve::NbIntervals(OCGeomAbs_Shape S)
{
  return ((ProjLib_CompProjectedCurve*)nativeHandle)->NbIntervals((GeomAbs_Shape)S);
}

OCAdaptor2d_HCurve2d^ OCProjLib_CompProjectedCurve::Trim(Standard_Real FirstParam, Standard_Real LastParam, Standard_Real Tol)
{
  Handle(Adaptor2d_HCurve2d) tmp = ((ProjLib_CompProjectedCurve*)nativeHandle)->Trim(FirstParam, LastParam, Tol);
  return gcnew OCAdaptor2d_HCurve2d(&tmp);
}

 void OCProjLib_CompProjectedCurve::Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S)
{
  ((ProjLib_CompProjectedCurve*)nativeHandle)->Intervals(*((TColStd_Array1OfReal*)T->Handle), (GeomAbs_Shape)S);
}

 Standard_Real OCProjLib_CompProjectedCurve::MaxDistance(Standard_Integer Index)
{
  return ((ProjLib_CompProjectedCurve*)nativeHandle)->MaxDistance(Index);
}

OCProjLib_HSequenceOfHSequenceOfPnt^ OCProjLib_CompProjectedCurve::GetSequence()
{
  Handle(ProjLib_HSequenceOfHSequenceOfPnt) tmp = ((ProjLib_CompProjectedCurve*)nativeHandle)->GetSequence();
  return gcnew OCProjLib_HSequenceOfHSequenceOfPnt(&tmp);
}

 OCGeomAbs_CurveType OCProjLib_CompProjectedCurve::GetType()
{
  return (OCGeomAbs_CurveType)(((ProjLib_CompProjectedCurve*)nativeHandle)->GetType());
}


