// File generated by CPPExt (MPV)
//
#ifndef _IntTools_CommonPrt_OCWrappers_HeaderFile
#define _IntTools_CommonPrt_OCWrappers_HeaderFile

// include native header
#include <IntTools_CommonPrt.hxx>
#include "../Converter.h"


#include "../TopoDS/TopoDS_Edge.h"
#include "../TopAbs/TopAbs_ShapeEnum.h"
#include "IntTools_Range.h"
#include "IntTools_SequenceOfRanges.h"
#include "../gp/gp_Pnt.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Edge;
ref class OCIntTools_Range;
ref class OCIntTools_SequenceOfRanges;
ref class OCgp_Pnt;


//! The class  is  to  describe a  common  part <br>
//!          between two edges in  3-d space. <br>
public ref class OCIntTools_CommonPrt  {

protected:
  IntTools_CommonPrt* nativeHandle;
  OCIntTools_CommonPrt(OCDummy^) {};

public:
  property IntTools_CommonPrt* Handle
  {
    IntTools_CommonPrt* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntTools_CommonPrt(IntTools_CommonPrt* nativeHandle);

// Methods PUBLIC


//! Empty constructor <br>
OCIntTools_CommonPrt();


//! Copy  constructor <br>
OCIntTools_CommonPrt(OCNaroWrappers::OCIntTools_CommonPrt^ aCPrt);


 /*instead*/  OCIntTools_CommonPrt^ Assign(OCNaroWrappers::OCIntTools_CommonPrt^ Other) ;


//! Sets the first edge. <br>
 /*instead*/  void SetEdge1(OCNaroWrappers::OCTopoDS_Edge^ anE) ;


//! Sets the second edge. <br>
 /*instead*/  void SetEdge2(OCNaroWrappers::OCTopoDS_Edge^ anE) ;


//! Sets the type of  the common  part <br>
//! Vertex  or  Edge <br>
 /*instead*/  void SetType(OCTopAbs_ShapeEnum aType) ;


//! Sets the range of first edge. <br>
 /*instead*/  void SetRange1(OCNaroWrappers::OCIntTools_Range^ aR) ;


//! Sets the range of first edge. <br>
 /*instead*/  void SetRange1(Standard_Real tf, Standard_Real tl) ;


//! Appends the range of second edge. <br>
 /*instead*/  void AppendRange2(OCNaroWrappers::OCIntTools_Range^ aR) ;


//! Appends the range of second edge. <br>
 /*instead*/  void AppendRange2(Standard_Real tf, Standard_Real tl) ;


//! Sets a parameter of first vertex <br>
 /*instead*/  void SetVertexParameter1(Standard_Real tV) ;


//! Sets a parameter of second vertex <br>
 /*instead*/  void SetVertexParameter2(Standard_Real tV) ;


//! Returns the first edge. <br>
 /*instead*/  OCTopoDS_Edge^ Edge1() ;


//! Returns the second edge <br>
 /*instead*/  OCTopoDS_Edge^ Edge2() ;


//! Returns the type of  the common  part <br>
 /*instead*/  OCTopAbs_ShapeEnum Type() ;


//! Returns the range of first edge <br>
 /*instead*/  OCIntTools_Range^ Range1() ;


//! Returns the range of first edge. <br>
 /*instead*/  void Range1(Standard_Real& tf, Standard_Real& tl) ;


//! Returns the  ranges of second edge. <br>
 /*instead*/  OCIntTools_SequenceOfRanges^ Ranges2() ;


//! Returns the  ranges of second edge. <br>
 /*instead*/  OCIntTools_SequenceOfRanges^ ChangeRanges2() ;


//! Returns parameter of first vertex <br>
 /*instead*/  Standard_Real VertexParameter1() ;


//! Returns parameter of second vertex <br>
 /*instead*/  Standard_Real VertexParameter2() ;


//! Copies me to anOther <br>
 /*instead*/  void Copy(OCNaroWrappers::OCIntTools_CommonPrt^ anOther) ;


//! Modifier <br>
 /*instead*/  System::Boolean AllNullFlag() ;


//! Selector <br>
 /*instead*/  void SetAllNullFlag(System::Boolean aFlag) ;


//! Modifier <br>
 /*instead*/  void SetBoundingPoints(OCNaroWrappers::OCgp_Pnt^ aP1, OCNaroWrappers::OCgp_Pnt^ aP2) ;


//! Selector <br>
 /*instead*/  void BoundingPoints(OCNaroWrappers::OCgp_Pnt^ aP1, OCNaroWrappers::OCgp_Pnt^ aP2) ;

~OCIntTools_CommonPrt()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
