// File generated by CPPExt (CPP file)
//

#include "GeomLProp_CurveTool.h"
#include "../Converter.h"
#include "../Geom/Geom_Curve.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"


using namespace OCNaroWrappers;

OCGeomLProp_CurveTool::OCGeomLProp_CurveTool(GeomLProp_CurveTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 void OCGeomLProp_CurveTool::Value(OCNaroWrappers::OCGeom_Curve^ C, Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P)
{
  GeomLProp_CurveTool::Value(*((Handle_Geom_Curve*)C->Handle), U, *((gp_Pnt*)P->Handle));
}

 void OCGeomLProp_CurveTool::D1(OCNaroWrappers::OCGeom_Curve^ C, Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1)
{
  GeomLProp_CurveTool::D1(*((Handle_Geom_Curve*)C->Handle), U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle));
}

 void OCGeomLProp_CurveTool::D2(OCNaroWrappers::OCGeom_Curve^ C, Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2)
{
  GeomLProp_CurveTool::D2(*((Handle_Geom_Curve*)C->Handle), U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle));
}

 void OCGeomLProp_CurveTool::D3(OCNaroWrappers::OCGeom_Curve^ C, Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2, OCNaroWrappers::OCgp_Vec^ V3)
{
  GeomLProp_CurveTool::D3(*((Handle_Geom_Curve*)C->Handle), U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle), *((gp_Vec*)V3->Handle));
}

 Standard_Integer OCGeomLProp_CurveTool::Continuity(OCNaroWrappers::OCGeom_Curve^ C)
{
  return GeomLProp_CurveTool::Continuity(*((Handle_Geom_Curve*)C->Handle));
}

 Standard_Real OCGeomLProp_CurveTool::FirstParameter(OCNaroWrappers::OCGeom_Curve^ C)
{
  return GeomLProp_CurveTool::FirstParameter(*((Handle_Geom_Curve*)C->Handle));
}

 Standard_Real OCGeomLProp_CurveTool::LastParameter(OCNaroWrappers::OCGeom_Curve^ C)
{
  return GeomLProp_CurveTool::LastParameter(*((Handle_Geom_Curve*)C->Handle));
}

