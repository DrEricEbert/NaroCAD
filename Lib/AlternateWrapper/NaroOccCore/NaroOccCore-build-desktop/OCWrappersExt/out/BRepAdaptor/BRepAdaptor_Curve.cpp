// File generated by CPPExt (CPP file)
//

#include "BRepAdaptor_Curve.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HCurveOnSurface.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../gp/gp_Trsf.h"
#include "../GeomAdaptor/GeomAdaptor_Curve.h"
#include "../Adaptor3d/Adaptor3d_CurveOnSurface.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../Adaptor3d/Adaptor3d_HCurve.h"
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

OCBRepAdaptor_Curve::OCBRepAdaptor_Curve(BRepAdaptor_Curve* nativeHandle) : OCAdaptor3d_Curve((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepAdaptor_Curve::OCBRepAdaptor_Curve() : OCAdaptor3d_Curve((OCDummy^)nullptr)

{
  nativeHandle = new BRepAdaptor_Curve();
}

OCBRepAdaptor_Curve::OCBRepAdaptor_Curve(OCNaroWrappers::OCTopoDS_Edge^ E) : OCAdaptor3d_Curve((OCDummy^)nullptr)

{
  nativeHandle = new BRepAdaptor_Curve(*((TopoDS_Edge*)E->Handle));
}

OCBRepAdaptor_Curve::OCBRepAdaptor_Curve(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F) : OCAdaptor3d_Curve((OCDummy^)nullptr)

{
  nativeHandle = new BRepAdaptor_Curve(*((TopoDS_Edge*)E->Handle), *((TopoDS_Face*)F->Handle));
}

 void OCBRepAdaptor_Curve::Initialize(OCNaroWrappers::OCTopoDS_Edge^ E)
{
  ((BRepAdaptor_Curve*)nativeHandle)->Initialize(*((TopoDS_Edge*)E->Handle));
}

 void OCBRepAdaptor_Curve::Initialize(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F)
{
  ((BRepAdaptor_Curve*)nativeHandle)->Initialize(*((TopoDS_Edge*)E->Handle), *((TopoDS_Face*)F->Handle));
}

OCgp_Trsf^ OCBRepAdaptor_Curve::Trsf()
{
  gp_Trsf* tmp = new gp_Trsf();
  *tmp = ((BRepAdaptor_Curve*)nativeHandle)->Trsf();
  return gcnew OCgp_Trsf(tmp);
}

 System::Boolean OCBRepAdaptor_Curve::Is3DCurve()
{
  return OCConverter::StandardBooleanToBoolean(((BRepAdaptor_Curve*)nativeHandle)->Is3DCurve());
}

 System::Boolean OCBRepAdaptor_Curve::IsCurveOnSurface()
{
  return OCConverter::StandardBooleanToBoolean(((BRepAdaptor_Curve*)nativeHandle)->IsCurveOnSurface());
}

OCGeomAdaptor_Curve^ OCBRepAdaptor_Curve::Curve()
{
  GeomAdaptor_Curve* tmp = new GeomAdaptor_Curve();
  *tmp = ((BRepAdaptor_Curve*)nativeHandle)->Curve();
  return gcnew OCGeomAdaptor_Curve(tmp);
}

OCAdaptor3d_CurveOnSurface^ OCBRepAdaptor_Curve::CurveOnSurface()
{
  Adaptor3d_CurveOnSurface* tmp = new Adaptor3d_CurveOnSurface();
  *tmp = ((BRepAdaptor_Curve*)nativeHandle)->CurveOnSurface();
  return gcnew OCAdaptor3d_CurveOnSurface(tmp);
}

OCTopoDS_Edge^ OCBRepAdaptor_Curve::Edge()
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = ((BRepAdaptor_Curve*)nativeHandle)->Edge();
  return gcnew OCTopoDS_Edge(tmp);
}

 Standard_Real OCBRepAdaptor_Curve::Tolerance()
{
  return ((BRepAdaptor_Curve*)nativeHandle)->Tolerance();
}

 Standard_Real OCBRepAdaptor_Curve::FirstParameter()
{
  return ((BRepAdaptor_Curve*)nativeHandle)->FirstParameter();
}

 Standard_Real OCBRepAdaptor_Curve::LastParameter()
{
  return ((BRepAdaptor_Curve*)nativeHandle)->LastParameter();
}

 OCGeomAbs_Shape OCBRepAdaptor_Curve::Continuity()
{
  return (OCGeomAbs_Shape)(((BRepAdaptor_Curve*)nativeHandle)->Continuity());
}

 Standard_Integer OCBRepAdaptor_Curve::NbIntervals(OCGeomAbs_Shape S)
{
  return ((BRepAdaptor_Curve*)nativeHandle)->NbIntervals((GeomAbs_Shape)S);
}

 void OCBRepAdaptor_Curve::Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S)
{
  ((BRepAdaptor_Curve*)nativeHandle)->Intervals(*((TColStd_Array1OfReal*)T->Handle), (GeomAbs_Shape)S);
}

OCAdaptor3d_HCurve^ OCBRepAdaptor_Curve::Trim(Standard_Real First, Standard_Real Last, Standard_Real Tol)
{
  Handle(Adaptor3d_HCurve) tmp = ((BRepAdaptor_Curve*)nativeHandle)->Trim(First, Last, Tol);
  return gcnew OCAdaptor3d_HCurve(&tmp);
}

 System::Boolean OCBRepAdaptor_Curve::IsClosed()
{
  return OCConverter::StandardBooleanToBoolean(((BRepAdaptor_Curve*)nativeHandle)->IsClosed());
}

 System::Boolean OCBRepAdaptor_Curve::IsPeriodic()
{
  return OCConverter::StandardBooleanToBoolean(((BRepAdaptor_Curve*)nativeHandle)->IsPeriodic());
}

 Standard_Real OCBRepAdaptor_Curve::Period()
{
  return ((BRepAdaptor_Curve*)nativeHandle)->Period();
}

OCgp_Pnt^ OCBRepAdaptor_Curve::Value(Standard_Real U)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((BRepAdaptor_Curve*)nativeHandle)->Value(U);
  return gcnew OCgp_Pnt(tmp);
}

 void OCBRepAdaptor_Curve::D0(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P)
{
  ((BRepAdaptor_Curve*)nativeHandle)->D0(U, *((gp_Pnt*)P->Handle));
}

 void OCBRepAdaptor_Curve::D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V)
{
  ((BRepAdaptor_Curve*)nativeHandle)->D1(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V->Handle));
}

 void OCBRepAdaptor_Curve::D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2)
{
  ((BRepAdaptor_Curve*)nativeHandle)->D2(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle));
}

 void OCBRepAdaptor_Curve::D3(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2, OCNaroWrappers::OCgp_Vec^ V3)
{
  ((BRepAdaptor_Curve*)nativeHandle)->D3(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle), *((gp_Vec*)V3->Handle));
}

OCgp_Vec^ OCBRepAdaptor_Curve::DN(Standard_Real U, Standard_Integer N)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((BRepAdaptor_Curve*)nativeHandle)->DN(U, N);
  return gcnew OCgp_Vec(tmp);
}

 Standard_Real OCBRepAdaptor_Curve::Resolution(Standard_Real R3d)
{
  return ((BRepAdaptor_Curve*)nativeHandle)->Resolution(R3d);
}

 OCGeomAbs_CurveType OCBRepAdaptor_Curve::GetType()
{
  return (OCGeomAbs_CurveType)(((BRepAdaptor_Curve*)nativeHandle)->GetType());
}

OCgp_Lin^ OCBRepAdaptor_Curve::Line()
{
  gp_Lin* tmp = new gp_Lin();
  *tmp = ((BRepAdaptor_Curve*)nativeHandle)->Line();
  return gcnew OCgp_Lin(tmp);
}

OCgp_Circ^ OCBRepAdaptor_Curve::Circle()
{
  gp_Circ* tmp = new gp_Circ();
  *tmp = ((BRepAdaptor_Curve*)nativeHandle)->Circle();
  return gcnew OCgp_Circ(tmp);
}

OCgp_Elips^ OCBRepAdaptor_Curve::Ellipse()
{
  gp_Elips* tmp = new gp_Elips();
  *tmp = ((BRepAdaptor_Curve*)nativeHandle)->Ellipse();
  return gcnew OCgp_Elips(tmp);
}

OCgp_Hypr^ OCBRepAdaptor_Curve::Hyperbola()
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = ((BRepAdaptor_Curve*)nativeHandle)->Hyperbola();
  return gcnew OCgp_Hypr(tmp);
}

OCgp_Parab^ OCBRepAdaptor_Curve::Parabola()
{
  gp_Parab* tmp = new gp_Parab();
  *tmp = ((BRepAdaptor_Curve*)nativeHandle)->Parabola();
  return gcnew OCgp_Parab(tmp);
}

 Standard_Integer OCBRepAdaptor_Curve::Degree()
{
  return ((BRepAdaptor_Curve*)nativeHandle)->Degree();
}

 System::Boolean OCBRepAdaptor_Curve::IsRational()
{
  return OCConverter::StandardBooleanToBoolean(((BRepAdaptor_Curve*)nativeHandle)->IsRational());
}

 Standard_Integer OCBRepAdaptor_Curve::NbPoles()
{
  return ((BRepAdaptor_Curve*)nativeHandle)->NbPoles();
}

 Standard_Integer OCBRepAdaptor_Curve::NbKnots()
{
  return ((BRepAdaptor_Curve*)nativeHandle)->NbKnots();
}

OCGeom_BezierCurve^ OCBRepAdaptor_Curve::Bezier()
{
  Handle(Geom_BezierCurve) tmp = ((BRepAdaptor_Curve*)nativeHandle)->Bezier();
  return gcnew OCGeom_BezierCurve(&tmp);
}

OCGeom_BSplineCurve^ OCBRepAdaptor_Curve::BSpline()
{
  Handle(Geom_BSplineCurve) tmp = ((BRepAdaptor_Curve*)nativeHandle)->BSpline();
  return gcnew OCGeom_BSplineCurve(&tmp);
}


