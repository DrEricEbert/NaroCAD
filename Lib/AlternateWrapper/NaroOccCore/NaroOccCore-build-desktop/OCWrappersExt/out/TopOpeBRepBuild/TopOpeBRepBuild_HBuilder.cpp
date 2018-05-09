// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepBuild_HBuilder.h"
#include "../Converter.h"
#include "../TopOpeBRepDS/TopOpeBRepDS_BuildTool.h"
#include "../TopOpeBRepDS/TopOpeBRepDS_HDataStructure.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_ListOfShape.h"
#include "../TColStd/TColStd_ListOfInteger.h"
#include "TopOpeBRepBuild_Builder.h"


using namespace OCNaroWrappers;

OCTopOpeBRepBuild_HBuilder::OCTopOpeBRepBuild_HBuilder(Handle(TopOpeBRepBuild_HBuilder)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepBuild_HBuilder(*nativeHandle);
}

OCTopOpeBRepBuild_HBuilder::OCTopOpeBRepBuild_HBuilder(OCNaroWrappers::OCTopOpeBRepDS_BuildTool^ BT) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepBuild_HBuilder(new TopOpeBRepBuild_HBuilder(*((TopOpeBRepDS_BuildTool*)BT->Handle)));
}

OCTopOpeBRepDS_BuildTool^ OCTopOpeBRepBuild_HBuilder::BuildTool()
{
  TopOpeBRepDS_BuildTool* tmp = new TopOpeBRepDS_BuildTool();
  *tmp = (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->BuildTool();
  return gcnew OCTopOpeBRepDS_BuildTool(tmp);
}

 void OCTopOpeBRepBuild_HBuilder::Perform(OCNaroWrappers::OCTopOpeBRepDS_HDataStructure^ HDS)
{
  (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->Perform(*((Handle_TopOpeBRepDS_HDataStructure*)HDS->Handle));
}

 void OCTopOpeBRepBuild_HBuilder::Perform(OCNaroWrappers::OCTopOpeBRepDS_HDataStructure^ HDS, OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2)
{
  (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->Perform(*((Handle_TopOpeBRepDS_HDataStructure*)HDS->Handle), *((TopoDS_Shape*)S1->Handle), *((TopoDS_Shape*)S2->Handle));
}

 void OCTopOpeBRepBuild_HBuilder::Clear()
{
  (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->Clear();
}

OCTopOpeBRepDS_HDataStructure^ OCTopOpeBRepBuild_HBuilder::DataStructure()
{
  Handle(TopOpeBRepDS_HDataStructure) tmp = (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->DataStructure();
  return gcnew OCTopOpeBRepDS_HDataStructure(&tmp);
}

OCTopOpeBRepDS_BuildTool^ OCTopOpeBRepBuild_HBuilder::ChangeBuildTool()
{
  TopOpeBRepDS_BuildTool* tmp = new TopOpeBRepDS_BuildTool();
  *tmp = (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->ChangeBuildTool();
  return gcnew OCTopOpeBRepDS_BuildTool(tmp);
}

 void OCTopOpeBRepBuild_HBuilder::MergeShapes(OCNaroWrappers::OCTopoDS_Shape^ S1, OCTopAbs_State TB1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCTopAbs_State TB2)
{
  (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->MergeShapes(*((TopoDS_Shape*)S1->Handle), (TopAbs_State)TB1, *((TopoDS_Shape*)S2->Handle), (TopAbs_State)TB2);
}

 void OCTopOpeBRepBuild_HBuilder::MergeSolids(OCNaroWrappers::OCTopoDS_Shape^ S1, OCTopAbs_State TB1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCTopAbs_State TB2)
{
  (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->MergeSolids(*((TopoDS_Shape*)S1->Handle), (TopAbs_State)TB1, *((TopoDS_Shape*)S2->Handle), (TopAbs_State)TB2);
}

 void OCTopOpeBRepBuild_HBuilder::MergeSolid(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_State TB)
{
  (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->MergeSolid(*((TopoDS_Shape*)S->Handle), (TopAbs_State)TB);
}

 System::Boolean OCTopOpeBRepBuild_HBuilder::IsSplit(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_State ToBuild)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->IsSplit(*((TopoDS_Shape*)S->Handle), (TopAbs_State)ToBuild));
}

OCTopTools_ListOfShape^ OCTopOpeBRepBuild_HBuilder::Splits(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_State ToBuild)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->Splits(*((TopoDS_Shape*)S->Handle), (TopAbs_State)ToBuild);
  return gcnew OCTopTools_ListOfShape(tmp);
}

 System::Boolean OCTopOpeBRepBuild_HBuilder::IsMerged(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_State ToBuild)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->IsMerged(*((TopoDS_Shape*)S->Handle), (TopAbs_State)ToBuild));
}

OCTopTools_ListOfShape^ OCTopOpeBRepBuild_HBuilder::Merged(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_State ToBuild)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->Merged(*((TopoDS_Shape*)S->Handle), (TopAbs_State)ToBuild);
  return gcnew OCTopTools_ListOfShape(tmp);
}

OCTopoDS_Shape^ OCTopOpeBRepBuild_HBuilder::NewVertex(Standard_Integer I)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->NewVertex(I);
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopTools_ListOfShape^ OCTopOpeBRepBuild_HBuilder::NewEdges(Standard_Integer I)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->NewEdges(I);
  return gcnew OCTopTools_ListOfShape(tmp);
}

OCTopTools_ListOfShape^ OCTopOpeBRepBuild_HBuilder::ChangeNewEdges(Standard_Integer I)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->ChangeNewEdges(I);
  return gcnew OCTopTools_ListOfShape(tmp);
}

OCTopTools_ListOfShape^ OCTopOpeBRepBuild_HBuilder::NewFaces(Standard_Integer I)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->NewFaces(I);
  return gcnew OCTopTools_ListOfShape(tmp);
}

OCTopTools_ListOfShape^ OCTopOpeBRepBuild_HBuilder::Section()
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->Section();
  return gcnew OCTopTools_ListOfShape(tmp);
}

 void OCTopOpeBRepBuild_HBuilder::InitExtendedSectionDS(Standard_Integer k)
{
  (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->InitExtendedSectionDS(k);
}

 void OCTopOpeBRepBuild_HBuilder::InitSection(Standard_Integer k)
{
  (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->InitSection(k);
}

 System::Boolean OCTopOpeBRepBuild_HBuilder::MoreSection()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->MoreSection());
}

 void OCTopOpeBRepBuild_HBuilder::NextSection()
{
  (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->NextSection();
}

OCTopoDS_Shape^ OCTopOpeBRepBuild_HBuilder::CurrentSection()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->CurrentSection();
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCTopOpeBRepBuild_HBuilder::GetDSEdgeFromSectEdge(OCNaroWrappers::OCTopoDS_Shape^ E, Standard_Integer rank)
{
  return (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->GetDSEdgeFromSectEdge(*((TopoDS_Shape*)E->Handle), rank);
}

OCTColStd_ListOfInteger^ OCTopOpeBRepBuild_HBuilder::GetDSFaceFromDSEdge(Standard_Integer indexEdg, Standard_Integer rank)
{
  TColStd_ListOfInteger* tmp = new TColStd_ListOfInteger();
  *tmp = (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->GetDSFaceFromDSEdge(indexEdg, rank);
  return gcnew OCTColStd_ListOfInteger(tmp);
}

 Standard_Integer OCTopOpeBRepBuild_HBuilder::GetDSCurveFromSectEdge(OCNaroWrappers::OCTopoDS_Shape^ SectEdge)
{
  return (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->GetDSCurveFromSectEdge(*((TopoDS_Shape*)SectEdge->Handle));
}

 Standard_Integer OCTopOpeBRepBuild_HBuilder::GetDSFaceFromDSCurve(Standard_Integer indexCur, Standard_Integer rank)
{
  return (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->GetDSFaceFromDSCurve(indexCur, rank);
}

 Standard_Integer OCTopOpeBRepBuild_HBuilder::GetDSPointFromNewVertex(OCNaroWrappers::OCTopoDS_Shape^ NewVert)
{
  return (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->GetDSPointFromNewVertex(*((TopoDS_Shape*)NewVert->Handle));
}

 System::Boolean OCTopOpeBRepBuild_HBuilder::EdgeCurveAncestors(OCNaroWrappers::OCTopoDS_Shape^ E, OCNaroWrappers::OCTopoDS_Shape^ F1, OCNaroWrappers::OCTopoDS_Shape^ F2, Standard_Integer& IC)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->EdgeCurveAncestors(*((TopoDS_Shape*)E->Handle), *((TopoDS_Shape*)F1->Handle), *((TopoDS_Shape*)F2->Handle), IC));
}

 System::Boolean OCTopOpeBRepBuild_HBuilder::EdgeSectionAncestors(OCNaroWrappers::OCTopoDS_Shape^ E, OCNaroWrappers::OCTopTools_ListOfShape^ LF1, OCNaroWrappers::OCTopTools_ListOfShape^ LF2, OCNaroWrappers::OCTopTools_ListOfShape^ LE1, OCNaroWrappers::OCTopTools_ListOfShape^ LE2)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->EdgeSectionAncestors(*((TopoDS_Shape*)E->Handle), *((TopTools_ListOfShape*)LF1->Handle), *((TopTools_ListOfShape*)LF2->Handle), *((TopTools_ListOfShape*)LE1->Handle), *((TopTools_ListOfShape*)LE2->Handle)));
}

 Standard_Integer OCTopOpeBRepBuild_HBuilder::IsKPart()
{
  return (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->IsKPart();
}

 void OCTopOpeBRepBuild_HBuilder::MergeKPart(OCTopAbs_State TB1, OCTopAbs_State TB2)
{
  (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->MergeKPart((TopAbs_State)TB1, (TopAbs_State)TB2);
}

OCTopOpeBRepBuild_Builder^ OCTopOpeBRepBuild_HBuilder::ChangeBuilder()
{
  TopOpeBRepBuild_Builder* tmp = new TopOpeBRepBuild_Builder(123abc);
  *tmp = (*((Handle_TopOpeBRepBuild_HBuilder*)nativeHandle))->ChangeBuilder();
  return gcnew OCTopOpeBRepBuild_Builder(tmp);
}

