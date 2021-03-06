// File generated by CPPExt (CPP file)
//

#include "BRepMesh_Edge.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCBRepMesh_Edge::OCBRepMesh_Edge(BRepMesh_Edge* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepMesh_Edge::OCBRepMesh_Edge() 
{
  nativeHandle = new BRepMesh_Edge();
}

OCBRepMesh_Edge::OCBRepMesh_Edge(Standard_Integer vDebut, Standard_Integer vFin, OCBRepMesh_DegreeOfFreedom canMove) 
{
  nativeHandle = new BRepMesh_Edge(vDebut, vFin, (BRepMesh_DegreeOfFreedom)canMove);
}

 Standard_Integer OCBRepMesh_Edge::FirstNode()
{
  return ((BRepMesh_Edge*)nativeHandle)->FirstNode();
}

 Standard_Integer OCBRepMesh_Edge::LastNode()
{
  return ((BRepMesh_Edge*)nativeHandle)->LastNode();
}

 OCBRepMesh_DegreeOfFreedom OCBRepMesh_Edge::Movability()
{
  return (OCBRepMesh_DegreeOfFreedom)(((BRepMesh_Edge*)nativeHandle)->Movability());
}

 void OCBRepMesh_Edge::SetMovability(OCBRepMesh_DegreeOfFreedom Move)
{
  ((BRepMesh_Edge*)nativeHandle)->SetMovability((BRepMesh_DegreeOfFreedom)Move);
}

 Standard_Integer OCBRepMesh_Edge::HashCode(Standard_Integer Upper)
{
  return ((BRepMesh_Edge*)nativeHandle)->HashCode(Upper);
}

 System::Boolean OCBRepMesh_Edge::SameOrientation(OCNaroWrappers::OCBRepMesh_Edge^ Other)
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_Edge*)nativeHandle)->SameOrientation(*((BRepMesh_Edge*)Other->Handle)));
}

 System::Boolean OCBRepMesh_Edge::IsEqual(OCNaroWrappers::OCBRepMesh_Edge^ Other)
{
  return OCConverter::StandardBooleanToBoolean(((BRepMesh_Edge*)nativeHandle)->IsEqual(*((BRepMesh_Edge*)Other->Handle)));
}


