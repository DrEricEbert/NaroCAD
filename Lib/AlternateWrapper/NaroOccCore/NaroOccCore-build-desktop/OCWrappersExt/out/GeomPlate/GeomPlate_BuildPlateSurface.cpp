// File generated by CPPExt (CPP file)
//

#include "GeomPlate_BuildPlateSurface.h"
#include "../Converter.h"
#include "GeomPlate_HSequenceOfCurveConstraint.h"
#include "GeomPlate_HArray1OfSequenceOfReal.h"
#include "GeomPlate_HSequenceOfPointConstraint.h"
#include "../Geom/Geom_Surface.h"
#include "GeomPlate_Surface.h"
#include "../TColStd/TColStd_HArray1OfInteger.h"
#include "GeomPlate_HArray1OfHCurveOnSurface.h"
#include "GeomPlate_CurveConstraint.h"
#include "GeomPlate_PointConstraint.h"
#include "../TColgp/TColgp_SequenceOfXY.h"
#include "../TColgp/TColgp_SequenceOfXYZ.h"
#include "../TColGeom2d/TColGeom2d_HArray1OfCurve.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Pnt.h"
#include "../Geom2d/Geom2d_Curve.h"
#include "../Adaptor3d/Adaptor3d_HCurve.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"


using namespace OCNaroWrappers;

OCGeomPlate_BuildPlateSurface::OCGeomPlate_BuildPlateSurface(GeomPlate_BuildPlateSurface* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGeomPlate_BuildPlateSurface::OCGeomPlate_BuildPlateSurface(OCNaroWrappers::OCTColStd_HArray1OfInteger^ NPoints, OCNaroWrappers::OCGeomPlate_HArray1OfHCurveOnSurface^ TabCurve, OCNaroWrappers::OCTColStd_HArray1OfInteger^ Tang, Standard_Integer Degree, Standard_Integer NbIter, Standard_Real Tol2d, Standard_Real Tol3d, Standard_Real TolAng, Standard_Real TolCurv, System::Boolean Anisotropie) 
{
  nativeHandle = new GeomPlate_BuildPlateSurface(*((Handle_TColStd_HArray1OfInteger*)NPoints->Handle), *((Handle_GeomPlate_HArray1OfHCurveOnSurface*)TabCurve->Handle), *((Handle_TColStd_HArray1OfInteger*)Tang->Handle), Degree, NbIter, Tol2d, Tol3d, TolAng, TolCurv, OCConverter::BooleanToStandardBoolean(Anisotropie));
}

OCGeomPlate_BuildPlateSurface::OCGeomPlate_BuildPlateSurface(OCNaroWrappers::OCGeom_Surface^ Surf, Standard_Integer Degree, Standard_Integer NbPtsOnCur, Standard_Integer NbIter, Standard_Real Tol2d, Standard_Real Tol3d, Standard_Real TolAng, Standard_Real TolCurv, System::Boolean Anisotropie) 
{
  nativeHandle = new GeomPlate_BuildPlateSurface(*((Handle_Geom_Surface*)Surf->Handle), Degree, NbPtsOnCur, NbIter, Tol2d, Tol3d, TolAng, TolCurv, OCConverter::BooleanToStandardBoolean(Anisotropie));
}

OCGeomPlate_BuildPlateSurface::OCGeomPlate_BuildPlateSurface(Standard_Integer Degree, Standard_Integer NbPtsOnCur, Standard_Integer NbIter, Standard_Real Tol2d, Standard_Real Tol3d, Standard_Real TolAng, Standard_Real TolCurv, System::Boolean Anisotropie) 
{
  nativeHandle = new GeomPlate_BuildPlateSurface(Degree, NbPtsOnCur, NbIter, Tol2d, Tol3d, TolAng, TolCurv, OCConverter::BooleanToStandardBoolean(Anisotropie));
}

 void OCGeomPlate_BuildPlateSurface::Init()
{
  ((GeomPlate_BuildPlateSurface*)nativeHandle)->Init();
}

 void OCGeomPlate_BuildPlateSurface::LoadInitSurface(OCNaroWrappers::OCGeom_Surface^ Surf)
{
  ((GeomPlate_BuildPlateSurface*)nativeHandle)->LoadInitSurface(*((Handle_Geom_Surface*)Surf->Handle));
}

 void OCGeomPlate_BuildPlateSurface::Add(OCNaroWrappers::OCGeomPlate_CurveConstraint^ Cont)
{
  ((GeomPlate_BuildPlateSurface*)nativeHandle)->Add(*((Handle_GeomPlate_CurveConstraint*)Cont->Handle));
}

 void OCGeomPlate_BuildPlateSurface::SetNbBounds(Standard_Integer NbBounds)
{
  ((GeomPlate_BuildPlateSurface*)nativeHandle)->SetNbBounds(NbBounds);
}

 void OCGeomPlate_BuildPlateSurface::Add(OCNaroWrappers::OCGeomPlate_PointConstraint^ Cont)
{
  ((GeomPlate_BuildPlateSurface*)nativeHandle)->Add(*((Handle_GeomPlate_PointConstraint*)Cont->Handle));
}

 void OCGeomPlate_BuildPlateSurface::Perform()
{
  ((GeomPlate_BuildPlateSurface*)nativeHandle)->Perform();
}

OCGeomPlate_CurveConstraint^ OCGeomPlate_BuildPlateSurface::CurveConstraint(Standard_Integer order)
{
  Handle(GeomPlate_CurveConstraint) tmp = ((GeomPlate_BuildPlateSurface*)nativeHandle)->CurveConstraint(order);
  return gcnew OCGeomPlate_CurveConstraint(&tmp);
}

OCGeomPlate_PointConstraint^ OCGeomPlate_BuildPlateSurface::PointConstraint(Standard_Integer order)
{
  Handle(GeomPlate_PointConstraint) tmp = ((GeomPlate_BuildPlateSurface*)nativeHandle)->PointConstraint(order);
  return gcnew OCGeomPlate_PointConstraint(&tmp);
}

 void OCGeomPlate_BuildPlateSurface::Disc2dContour(Standard_Integer nbp, OCNaroWrappers::OCTColgp_SequenceOfXY^ Seq2d)
{
  ((GeomPlate_BuildPlateSurface*)nativeHandle)->Disc2dContour(nbp, *((TColgp_SequenceOfXY*)Seq2d->Handle));
}

 void OCGeomPlate_BuildPlateSurface::Disc3dContour(Standard_Integer nbp, Standard_Integer iordre, OCNaroWrappers::OCTColgp_SequenceOfXYZ^ Seq3d)
{
  ((GeomPlate_BuildPlateSurface*)nativeHandle)->Disc3dContour(nbp, iordre, *((TColgp_SequenceOfXYZ*)Seq3d->Handle));
}

 System::Boolean OCGeomPlate_BuildPlateSurface::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((GeomPlate_BuildPlateSurface*)nativeHandle)->IsDone());
}

OCGeomPlate_Surface^ OCGeomPlate_BuildPlateSurface::Surface()
{
  Handle(GeomPlate_Surface) tmp = ((GeomPlate_BuildPlateSurface*)nativeHandle)->Surface();
  return gcnew OCGeomPlate_Surface(&tmp);
}

OCGeom_Surface^ OCGeomPlate_BuildPlateSurface::SurfInit()
{
  Handle(Geom_Surface) tmp = ((GeomPlate_BuildPlateSurface*)nativeHandle)->SurfInit();
  return gcnew OCGeom_Surface(&tmp);
}

OCTColStd_HArray1OfInteger^ OCGeomPlate_BuildPlateSurface::Sense()
{
  Handle(TColStd_HArray1OfInteger) tmp = ((GeomPlate_BuildPlateSurface*)nativeHandle)->Sense();
  return gcnew OCTColStd_HArray1OfInteger(&tmp);
}

OCTColGeom2d_HArray1OfCurve^ OCGeomPlate_BuildPlateSurface::Curves2d()
{
  Handle(TColGeom2d_HArray1OfCurve) tmp = ((GeomPlate_BuildPlateSurface*)nativeHandle)->Curves2d();
  return gcnew OCTColGeom2d_HArray1OfCurve(&tmp);
}

OCTColStd_HArray1OfInteger^ OCGeomPlate_BuildPlateSurface::Order()
{
  Handle(TColStd_HArray1OfInteger) tmp = ((GeomPlate_BuildPlateSurface*)nativeHandle)->Order();
  return gcnew OCTColStd_HArray1OfInteger(&tmp);
}

 Standard_Real OCGeomPlate_BuildPlateSurface::G0Error()
{
  return ((GeomPlate_BuildPlateSurface*)nativeHandle)->G0Error();
}

 Standard_Real OCGeomPlate_BuildPlateSurface::G1Error()
{
  return ((GeomPlate_BuildPlateSurface*)nativeHandle)->G1Error();
}

 Standard_Real OCGeomPlate_BuildPlateSurface::G2Error()
{
  return ((GeomPlate_BuildPlateSurface*)nativeHandle)->G2Error();
}

 Standard_Real OCGeomPlate_BuildPlateSurface::G0Error(Standard_Integer Index)
{
  return ((GeomPlate_BuildPlateSurface*)nativeHandle)->G0Error(Index);
}

 Standard_Real OCGeomPlate_BuildPlateSurface::G1Error(Standard_Integer Index)
{
  return ((GeomPlate_BuildPlateSurface*)nativeHandle)->G1Error(Index);
}

 Standard_Real OCGeomPlate_BuildPlateSurface::G2Error(Standard_Integer Index)
{
  return ((GeomPlate_BuildPlateSurface*)nativeHandle)->G2Error(Index);
}


