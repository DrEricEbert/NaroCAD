// File generated by CPPExt (CPP file)
//

#include "TopoDS_TVertex.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCTopoDS_TVertex::OCTopoDS_TVertex(Handle(TopoDS_TVertex)* nativeHandle) : OCTopoDS_TShape((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopoDS_TVertex(*nativeHandle);
}

OCTopoDS_TVertex::OCTopoDS_TVertex() : OCTopoDS_TShape((OCDummy^)nullptr)

{}

 OCTopAbs_ShapeEnum OCTopoDS_TVertex::ShapeType()
{
  return (OCTopAbs_ShapeEnum)((*((Handle_TopoDS_TVertex*)nativeHandle))->ShapeType());
}


