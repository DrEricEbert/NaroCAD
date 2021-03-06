// File generated by CPPExt (CPP file)
//

#include "IntTools_Context.h"
#include "../Converter.h"
#include "IntTools_FClass2d.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../GeomAPI/GeomAPI_ProjectPointOnSurf.h"
#include "../GeomAPI/GeomAPI_ProjectPointOnCurve.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../Geom/Geom_Curve.h"
#include "IntTools_SurfaceRangeLocalizeData.h"
#include "../BRepClass3d/BRepClass3d_SolidClassifier.h"
#include "../TopoDS/TopoDS_Solid.h"
#include "../Geom2dHatch/Geom2dHatch_Hatcher.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Pnt.h"
#include "IntTools_Curve.h"


using namespace OCNaroWrappers;

OCIntTools_Context::OCIntTools_Context(Handle(IntTools_Context)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IntTools_Context(*nativeHandle);
}

OCIntTools_Context::OCIntTools_Context() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IntTools_Context(new IntTools_Context());
}

OCIntTools_FClass2d^ OCIntTools_Context::FClass2d(OCNaroWrappers::OCTopoDS_Face^ aF)
{
  IntTools_FClass2d* tmp = new IntTools_FClass2d();
  *tmp = (*((Handle_IntTools_Context*)nativeHandle))->FClass2d(*((TopoDS_Face*)aF->Handle));
  return gcnew OCIntTools_FClass2d(tmp);
}

OCGeomAPI_ProjectPointOnSurf^ OCIntTools_Context::ProjPS(OCNaroWrappers::OCTopoDS_Face^ aF)
{
  GeomAPI_ProjectPointOnSurf* tmp = new GeomAPI_ProjectPointOnSurf();
  *tmp = (*((Handle_IntTools_Context*)nativeHandle))->ProjPS(*((TopoDS_Face*)aF->Handle));
  return gcnew OCGeomAPI_ProjectPointOnSurf(tmp);
}

OCGeomAPI_ProjectPointOnCurve^ OCIntTools_Context::ProjPC(OCNaroWrappers::OCTopoDS_Edge^ aE)
{
  GeomAPI_ProjectPointOnCurve* tmp = new GeomAPI_ProjectPointOnCurve();
  *tmp = (*((Handle_IntTools_Context*)nativeHandle))->ProjPC(*((TopoDS_Edge*)aE->Handle));
  return gcnew OCGeomAPI_ProjectPointOnCurve(tmp);
}

OCGeomAPI_ProjectPointOnCurve^ OCIntTools_Context::ProjPT(OCNaroWrappers::OCGeom_Curve^ aC)
{
  GeomAPI_ProjectPointOnCurve* tmp = new GeomAPI_ProjectPointOnCurve();
  *tmp = (*((Handle_IntTools_Context*)nativeHandle))->ProjPT(*((Handle_Geom_Curve*)aC->Handle));
  return gcnew OCGeomAPI_ProjectPointOnCurve(tmp);
}

OCIntTools_SurfaceRangeLocalizeData^ OCIntTools_Context::SurfaceData(OCNaroWrappers::OCTopoDS_Face^ aF)
{
  IntTools_SurfaceRangeLocalizeData* tmp = new IntTools_SurfaceRangeLocalizeData();
  *tmp = (*((Handle_IntTools_Context*)nativeHandle))->SurfaceData(*((TopoDS_Face*)aF->Handle));
  return gcnew OCIntTools_SurfaceRangeLocalizeData(tmp);
}

OCBRepClass3d_SolidClassifier^ OCIntTools_Context::SolidClassifier(OCNaroWrappers::OCTopoDS_Solid^ aSolid)
{
  BRepClass3d_SolidClassifier* tmp = new BRepClass3d_SolidClassifier();
  *tmp = (*((Handle_IntTools_Context*)nativeHandle))->SolidClassifier(*((TopoDS_Solid*)aSolid->Handle));
  return gcnew OCBRepClass3d_SolidClassifier(tmp);
}

OCGeom2dHatch_Hatcher^ OCIntTools_Context::Hatcher(OCNaroWrappers::OCTopoDS_Face^ aF)
{
  Geom2dHatch_Hatcher* tmp = new Geom2dHatch_Hatcher(123abc, 0, 0, 0, 0);
  *tmp = (*((Handle_IntTools_Context*)nativeHandle))->Hatcher(*((TopoDS_Face*)aF->Handle));
  return gcnew OCGeom2dHatch_Hatcher(tmp);
}

 Standard_Integer OCIntTools_Context::ComputeVE(OCNaroWrappers::OCTopoDS_Vertex^ aV, OCNaroWrappers::OCTopoDS_Edge^ aE, Standard_Real& aT)
{
  return (*((Handle_IntTools_Context*)nativeHandle))->ComputeVE(*((TopoDS_Vertex*)aV->Handle), *((TopoDS_Edge*)aE->Handle), aT);
}

 Standard_Integer OCIntTools_Context::ComputeVE(OCNaroWrappers::OCTopoDS_Vertex^ aV, OCNaroWrappers::OCTopoDS_Edge^ aE, Standard_Real& aT, System::Boolean& bToUpdateVertex, Standard_Real& aDist)
{
  return (*((Handle_IntTools_Context*)nativeHandle))->ComputeVE(*((TopoDS_Vertex*)aV->Handle), *((TopoDS_Edge*)aE->Handle), aT, (Standard_Boolean&)(bToUpdateVertex), aDist);
}

 Standard_Integer OCIntTools_Context::ComputeVS(OCNaroWrappers::OCTopoDS_Vertex^ aV, OCNaroWrappers::OCTopoDS_Face^ aF, Standard_Real& U, Standard_Real& V)
{
  return (*((Handle_IntTools_Context*)nativeHandle))->ComputeVS(*((TopoDS_Vertex*)aV->Handle), *((TopoDS_Face*)aF->Handle), U, V);
}

 OCTopAbs_State OCIntTools_Context::StatePointFace(OCNaroWrappers::OCTopoDS_Face^ aF, OCNaroWrappers::OCgp_Pnt2d^ aP2D)
{
  return (OCTopAbs_State)((*((Handle_IntTools_Context*)nativeHandle))->StatePointFace(*((TopoDS_Face*)aF->Handle), *((gp_Pnt2d*)aP2D->Handle)));
}

 System::Boolean OCIntTools_Context::IsPointInFace(OCNaroWrappers::OCTopoDS_Face^ aF, OCNaroWrappers::OCgp_Pnt2d^ aP2D)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntTools_Context*)nativeHandle))->IsPointInFace(*((TopoDS_Face*)aF->Handle), *((gp_Pnt2d*)aP2D->Handle)));
}

 System::Boolean OCIntTools_Context::IsPointInOnFace(OCNaroWrappers::OCTopoDS_Face^ aF, OCNaroWrappers::OCgp_Pnt2d^ aP2D)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntTools_Context*)nativeHandle))->IsPointInOnFace(*((TopoDS_Face*)aF->Handle), *((gp_Pnt2d*)aP2D->Handle)));
}

 System::Boolean OCIntTools_Context::IsValidPointForFace(OCNaroWrappers::OCgp_Pnt^ aP3D, OCNaroWrappers::OCTopoDS_Face^ aF, Standard_Real aTol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntTools_Context*)nativeHandle))->IsValidPointForFace(*((gp_Pnt*)aP3D->Handle), *((TopoDS_Face*)aF->Handle), aTol));
}

 System::Boolean OCIntTools_Context::IsValidPointForFaces(OCNaroWrappers::OCgp_Pnt^ aP3D, OCNaroWrappers::OCTopoDS_Face^ aF1, OCNaroWrappers::OCTopoDS_Face^ aF2, Standard_Real aTol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntTools_Context*)nativeHandle))->IsValidPointForFaces(*((gp_Pnt*)aP3D->Handle), *((TopoDS_Face*)aF1->Handle), *((TopoDS_Face*)aF2->Handle), aTol));
}

 System::Boolean OCIntTools_Context::IsValidBlockForFace(Standard_Real aT1, Standard_Real aT2, OCNaroWrappers::OCIntTools_Curve^ aIC, OCNaroWrappers::OCTopoDS_Face^ aF, Standard_Real aTol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntTools_Context*)nativeHandle))->IsValidBlockForFace(aT1, aT2, *((IntTools_Curve*)aIC->Handle), *((TopoDS_Face*)aF->Handle), aTol));
}

 System::Boolean OCIntTools_Context::IsValidBlockForFaces(Standard_Real aT1, Standard_Real aT2, OCNaroWrappers::OCIntTools_Curve^ aIC, OCNaroWrappers::OCTopoDS_Face^ aF1, OCNaroWrappers::OCTopoDS_Face^ aF2, Standard_Real aTol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntTools_Context*)nativeHandle))->IsValidBlockForFaces(aT1, aT2, *((IntTools_Curve*)aIC->Handle), *((TopoDS_Face*)aF1->Handle), *((TopoDS_Face*)aF2->Handle), aTol));
}

 System::Boolean OCIntTools_Context::IsVertexOnLine(OCNaroWrappers::OCTopoDS_Vertex^ aV, OCNaroWrappers::OCIntTools_Curve^ aIC, Standard_Real aTolC, Standard_Real& aT)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntTools_Context*)nativeHandle))->IsVertexOnLine(*((TopoDS_Vertex*)aV->Handle), *((IntTools_Curve*)aIC->Handle), aTolC, aT));
}

 System::Boolean OCIntTools_Context::IsVertexOnLine(OCNaroWrappers::OCTopoDS_Vertex^ aV, Standard_Real aTolV, OCNaroWrappers::OCIntTools_Curve^ aIC, Standard_Real aTolC, Standard_Real& aT)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntTools_Context*)nativeHandle))->IsVertexOnLine(*((TopoDS_Vertex*)aV->Handle), aTolV, *((IntTools_Curve*)aIC->Handle), aTolC, aT));
}

 System::Boolean OCIntTools_Context::ProjectPointOnEdge(OCNaroWrappers::OCgp_Pnt^ aP, OCNaroWrappers::OCTopoDS_Edge^ aE, Standard_Real& aT)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IntTools_Context*)nativeHandle))->ProjectPointOnEdge(*((gp_Pnt*)aP->Handle), *((TopoDS_Edge*)aE->Handle), aT));
}


