// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopOpeBRepDS_ShapeData.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "TopOpeBRepDS_MapOfShapeData.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData::OCTopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData(Handle(TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData(*nativeHandle);
}

OCTopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData::OCTopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData(OCNaroWrappers::OCTopoDS_Shape^ K1, Standard_Integer K2, OCNaroWrappers::OCTopOpeBRepDS_ShapeData^ I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData(new TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData(*((TopoDS_Shape*)K1->Handle), K2, *((TopOpeBRepDS_ShapeData*)I->Handle), n1, n2));
}

OCTopoDS_Shape^ OCTopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData::Key1()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData*)nativeHandle))->Key1();
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCTopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData::Key2()
{
  return (*((Handle_TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData*)nativeHandle))->Key2();
}

 TCollection_MapNodePtr& OCTopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData::Next2()
{
  return (*((Handle_TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData*)nativeHandle))->Next2();
}

OCTopOpeBRepDS_ShapeData^ OCTopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData::Value()
{
  TopOpeBRepDS_ShapeData* tmp = new TopOpeBRepDS_ShapeData();
  *tmp = (*((Handle_TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData*)nativeHandle))->Value();
  return gcnew OCTopOpeBRepDS_ShapeData(tmp);
}


