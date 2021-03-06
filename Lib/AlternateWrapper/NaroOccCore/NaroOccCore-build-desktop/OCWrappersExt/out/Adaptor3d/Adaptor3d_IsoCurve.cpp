// File generated by CPPExt (CPP file)
//

#include "Adaptor3d_IsoCurve.h"
#include "../Converter.h"
#include "Adaptor3d_HSurface.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "Adaptor3d_HCurve.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Lin.h"
#include "../gp/gp_Circ.h"
#include "../gp/gp_Elips.h"
#include "../gp/gp_Hypr.h"
#include "../gp/gp_Parab.h"
#include "../Geom/Geom_BezierCurve.h"
#include "../Geom/Geom_BSplineCurve.h"


using namespace OCNaroWrappers;

OCAdaptor3d_IsoCurve::OCAdaptor3d_IsoCurve(Adaptor3d_IsoCurve* nativeHandle) : OCAdaptor3d_Curve((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCAdaptor3d_IsoCurve::OCAdaptor3d_IsoCurve() : OCAdaptor3d_Curve((OCDummy^)nullptr)

{
  nativeHandle = new Adaptor3d_IsoCurve();
}

OCAdaptor3d_IsoCurve::OCAdaptor3d_IsoCurve(OCNaroWrappers::OCAdaptor3d_HSurface^ S) : OCAdaptor3d_Curve((OCDummy^)nullptr)

{
  nativeHandle = new Adaptor3d_IsoCurve(*((Handle_Adaptor3d_HSurface*)S->Handle));
}

OCAdaptor3d_IsoCurve::OCAdaptor3d_IsoCurve(OCNaroWrappers::OCAdaptor3d_HSurface^ S, OCGeomAbs_IsoType Iso, Standard_Real Param) : OCAdaptor3d_Curve((OCDummy^)nullptr)

{
  nativeHandle = new Adaptor3d_IsoCurve(*((Handle_Adaptor3d_HSurface*)S->Handle), (GeomAbs_IsoType)Iso, Param);
}

OCAdaptor3d_IsoCurve::OCAdaptor3d_IsoCurve(OCNaroWrappers::OCAdaptor3d_HSurface^ S, OCGeomAbs_IsoType Iso, Standard_Real Param, Standard_Real WFirst, Standard_Real WLast) : OCAdaptor3d_Curve((OCDummy^)nullptr)

{
  nativeHandle = new Adaptor3d_IsoCurve(*((Handle_Adaptor3d_HSurface*)S->Handle), (GeomAbs_IsoType)Iso, Param, WFirst, WLast);
}

 void OCAdaptor3d_IsoCurve::Load(OCNaroWrappers::OCAdaptor3d_HSurface^ S)
{
  ((Adaptor3d_IsoCurve*)nativeHandle)->Load(*((Handle_Adaptor3d_HSurface*)S->Handle));
}

 void OCAdaptor3d_IsoCurve::Load(OCGeomAbs_IsoType Iso, Standard_Real Param)
{
  ((Adaptor3d_IsoCurve*)nativeHandle)->Load((GeomAbs_IsoType)Iso, Param);
}

 void OCAdaptor3d_IsoCurve::Load(OCGeomAbs_IsoType Iso, Standard_Real Param, Standard_Real WFirst, Standard_Real WLast)
{
  ((Adaptor3d_IsoCurve*)nativeHandle)->Load((GeomAbs_IsoType)Iso, Param, WFirst, WLast);
}

OCAdaptor3d_HSurface^ OCAdaptor3d_IsoCurve::Surface()
{
  Handle(Adaptor3d_HSurface) tmp = ((Adaptor3d_IsoCurve*)nativeHandle)->Surface();
  return gcnew OCAdaptor3d_HSurface(&tmp);
}

 OCGeomAbs_IsoType OCAdaptor3d_IsoCurve::Iso()
{
  return (OCGeomAbs_IsoType)(((Adaptor3d_IsoCurve*)nativeHandle)->Iso());
}

 Standard_Real OCAdaptor3d_IsoCurve::Parameter()
{
  return ((Adaptor3d_IsoCurve*)nativeHandle)->Parameter();
}

 Standard_Real OCAdaptor3d_IsoCurve::FirstParameter()
{
  return ((Adaptor3d_IsoCurve*)nativeHandle)->FirstParameter();
}

 Standard_Real OCAdaptor3d_IsoCurve::LastParameter()
{
  return ((Adaptor3d_IsoCurve*)nativeHandle)->LastParameter();
}

 OCGeomAbs_Shape OCAdaptor3d_IsoCurve::Continuity()
{
  return (OCGeomAbs_Shape)(((Adaptor3d_IsoCurve*)nativeHandle)->Continuity());
}

 Standard_Integer OCAdaptor3d_IsoCurve::NbIntervals(OCGeomAbs_Shape S)
{
  return ((Adaptor3d_IsoCurve*)nativeHandle)->NbIntervals((GeomAbs_Shape)S);
}

 void OCAdaptor3d_IsoCurve::Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S)
{
  ((Adaptor3d_IsoCurve*)nativeHandle)->Intervals(*((TColStd_Array1OfReal*)T->Handle), (GeomAbs_Shape)S);
}

OCAdaptor3d_HCurve^ OCAdaptor3d_IsoCurve::Trim(Standard_Real First, Standard_Real Last, Standard_Real Tol)
{
  Handle(Adaptor3d_HCurve) tmp = ((Adaptor3d_IsoCurve*)nativeHandle)->Trim(First, Last, Tol);
  return gcnew OCAdaptor3d_HCurve(&tmp);
}

 System::Boolean OCAdaptor3d_IsoCurve::IsClosed()
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_IsoCurve*)nativeHandle)->IsClosed());
}

 System::Boolean OCAdaptor3d_IsoCurve::IsPeriodic()
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_IsoCurve*)nativeHandle)->IsPeriodic());
}

 Standard_Real OCAdaptor3d_IsoCurve::Period()
{
  return ((Adaptor3d_IsoCurve*)nativeHandle)->Period();
}

OCgp_Pnt^ OCAdaptor3d_IsoCurve::Value(Standard_Real U)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((Adaptor3d_IsoCurve*)nativeHandle)->Value(U);
  return gcnew OCgp_Pnt(tmp);
}

 void OCAdaptor3d_IsoCurve::D0(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P)
{
  ((Adaptor3d_IsoCurve*)nativeHandle)->D0(U, *((gp_Pnt*)P->Handle));
}

 void OCAdaptor3d_IsoCurve::D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V)
{
  ((Adaptor3d_IsoCurve*)nativeHandle)->D1(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V->Handle));
}

 void OCAdaptor3d_IsoCurve::D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2)
{
  ((Adaptor3d_IsoCurve*)nativeHandle)->D2(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle));
}

 void OCAdaptor3d_IsoCurve::D3(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2, OCNaroWrappers::OCgp_Vec^ V3)
{
  ((Adaptor3d_IsoCurve*)nativeHandle)->D3(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle), *((gp_Vec*)V3->Handle));
}

OCgp_Vec^ OCAdaptor3d_IsoCurve::DN(Standard_Real U, Standard_Integer N)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((Adaptor3d_IsoCurve*)nativeHandle)->DN(U, N);
  return gcnew OCgp_Vec(tmp);
}

 Standard_Real OCAdaptor3d_IsoCurve::Resolution(Standard_Real R3d)
{
  return ((Adaptor3d_IsoCurve*)nativeHandle)->Resolution(R3d);
}

 OCGeomAbs_CurveType OCAdaptor3d_IsoCurve::GetType()
{
  return (OCGeomAbs_CurveType)(((Adaptor3d_IsoCurve*)nativeHandle)->GetType());
}

OCgp_Lin^ OCAdaptor3d_IsoCurve::Line()
{
  gp_Lin* tmp = new gp_Lin();
  *tmp = ((Adaptor3d_IsoCurve*)nativeHandle)->Line();
  return gcnew OCgp_Lin(tmp);
}

OCgp_Circ^ OCAdaptor3d_IsoCurve::Circle()
{
  gp_Circ* tmp = new gp_Circ();
  *tmp = ((Adaptor3d_IsoCurve*)nativeHandle)->Circle();
  return gcnew OCgp_Circ(tmp);
}

OCgp_Elips^ OCAdaptor3d_IsoCurve::Ellipse()
{
  gp_Elips* tmp = new gp_Elips();
  *tmp = ((Adaptor3d_IsoCurve*)nativeHandle)->Ellipse();
  return gcnew OCgp_Elips(tmp);
}

OCgp_Hypr^ OCAdaptor3d_IsoCurve::Hyperbola()
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = ((Adaptor3d_IsoCurve*)nativeHandle)->Hyperbola();
  return gcnew OCgp_Hypr(tmp);
}

OCgp_Parab^ OCAdaptor3d_IsoCurve::Parabola()
{
  gp_Parab* tmp = new gp_Parab();
  *tmp = ((Adaptor3d_IsoCurve*)nativeHandle)->Parabola();
  return gcnew OCgp_Parab(tmp);
}

 Standard_Integer OCAdaptor3d_IsoCurve::Degree()
{
  return ((Adaptor3d_IsoCurve*)nativeHandle)->Degree();
}

 System::Boolean OCAdaptor3d_IsoCurve::IsRational()
{
  return OCConverter::StandardBooleanToBoolean(((Adaptor3d_IsoCurve*)nativeHandle)->IsRational());
}

 Standard_Integer OCAdaptor3d_IsoCurve::NbPoles()
{
  return ((Adaptor3d_IsoCurve*)nativeHandle)->NbPoles();
}

 Standard_Integer OCAdaptor3d_IsoCurve::NbKnots()
{
  return ((Adaptor3d_IsoCurve*)nativeHandle)->NbKnots();
}

OCGeom_BezierCurve^ OCAdaptor3d_IsoCurve::Bezier()
{
  Handle(Geom_BezierCurve) tmp = ((Adaptor3d_IsoCurve*)nativeHandle)->Bezier();
  return gcnew OCGeom_BezierCurve(&tmp);
}

OCGeom_BSplineCurve^ OCAdaptor3d_IsoCurve::BSpline()
{
  Handle(Geom_BSplineCurve) tmp = ((Adaptor3d_IsoCurve*)nativeHandle)->BSpline();
  return gcnew OCGeom_BSplineCurve(&tmp);
}


