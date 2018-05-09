// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopOpeBRepBuild_VertexInfo.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo.h"


using namespace OCNaroWrappers;

OCTopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo::OCTopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo(Handle(TopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo(*nativeHandle);
}

OCTopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo::OCTopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo(OCNaroWrappers::OCTopoDS_Shape^ K1, Standard_Integer K2, OCNaroWrappers::OCTopOpeBRepBuild_VertexInfo^ I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo(new TopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo(*((TopoDS_Shape*)K1->Handle), K2, *((TopOpeBRepBuild_VertexInfo*)I->Handle), n1, n2));
}

OCTopoDS_Shape^ OCTopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo::Key1()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo*)nativeHandle))->Key1();
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCTopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo::Key2()
{
  return (*((Handle_TopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo*)nativeHandle))->Key2();
}

 TCollection_MapNodePtr& OCTopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo::Next2()
{
  return (*((Handle_TopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo*)nativeHandle))->Next2();
}

OCTopOpeBRepBuild_VertexInfo^ OCTopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo::Value()
{
  TopOpeBRepBuild_VertexInfo* tmp = new TopOpeBRepBuild_VertexInfo();
  *tmp = (*((Handle_TopOpeBRepBuild_IndexedDataMapNodeOfIndexedDataMapOfShapeVertexInfo*)nativeHandle))->Value();
  return gcnew OCTopOpeBRepBuild_VertexInfo(tmp);
}

