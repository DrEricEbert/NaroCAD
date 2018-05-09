// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRep_FaceEdgeIntersector_OCWrappers_HeaderFile
#define _TopOpeBRep_FaceEdgeIntersector_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include "../Converter.h"


#include "../TopoDS/TopoDS_Face.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../GeomAdaptor/GeomAdaptor_Curve.h"
#include "../IntCurveSurface/IntCurveSurface_SequenceOfPnt.h"
#include "../TColStd/TColStd_SequenceOfInteger.h"
#include "../TopExp/TopExp_Explorer.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../TopAbs/TopAbs_State.h"
#include "../TopAbs/TopAbs_Orientation.h"
#include "../TopAbs/TopAbs_ShapeEnum.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCgp_Pnt;
ref class OCgp_Pnt2d;
ref class OCTopOpeBRepDS_Transition;
ref class OCTopoDS_Vertex;



public ref class OCTopOpeBRep_FaceEdgeIntersector  {

protected:
  TopOpeBRep_FaceEdgeIntersector* nativeHandle;
  OCTopOpeBRep_FaceEdgeIntersector(OCDummy^) {};

public:
  property TopOpeBRep_FaceEdgeIntersector* Handle
  {
    TopOpeBRep_FaceEdgeIntersector* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRep_FaceEdgeIntersector(TopOpeBRep_FaceEdgeIntersector* nativeHandle);

// Methods PUBLIC


OCTopOpeBRep_FaceEdgeIntersector();


 /*instead*/  void Perform(OCNaroWrappers::OCTopoDS_Shape^ F, OCNaroWrappers::OCTopoDS_Shape^ E) ;


 /*instead*/  System::Boolean IsEmpty() ;

//! returns intersected face or edge according to <br>
//!          value of <Index> = 1 or 2 <br>
 /*instead*/  OCTopoDS_Shape^ Shape(Standard_Integer Index) ;


//! Force the tolerance values used by the next Perform(S1,S2) call. <br>
 /*instead*/  void ForceTolerance(Standard_Real tol) ;


//! Return the tolerance value used in the last Perform() call <br>
//! If ForceTolerance() has been called, return the given value. <br>
//! If not, return value extracted from shapes. <br>
 /*instead*/  Standard_Real Tolerance() ;


 /*instead*/  Standard_Integer NbPoints() ;


 /*instead*/  void InitPoint() ;


 /*instead*/  System::Boolean MorePoint() ;


 /*instead*/  void NextPoint() ;

//! return the 3D point of the current intersection point. <br>
 /*instead*/  OCgp_Pnt^ Value() ;

//! parametre de Value() sur l'arete <br>
 /*instead*/  Standard_Real Parameter() ;

//! parametre de Value() sur la face <br>
 /*instead*/  void UVPoint(OCNaroWrappers::OCgp_Pnt2d^ P) ;

//! IN ou ON / a la face. Les points OUT ne sont pas retournes. <br>
 /*instead*/  OCTopAbs_State State() ;


//! Index = 1 transition par rapport a la face, en cheminant sur l'arete <br>
 /*instead*/  OCTopOpeBRepDS_Transition^ Transition(Standard_Integer Index, OCTopAbs_Orientation FaceOrientation) ;


 /*instead*/  System::Boolean IsVertex(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol, OCNaroWrappers::OCTopoDS_Vertex^ V) ;


 /*instead*/  System::Boolean IsVertex(Standard_Integer I, OCNaroWrappers::OCTopoDS_Vertex^ V) ;

//! trace only <br>
 /*instead*/  Standard_Integer Index() ;

~OCTopOpeBRep_FaceEdgeIntersector()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif