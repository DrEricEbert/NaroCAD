// File generated by CPPExt (Transient)
//
#ifndef _Select3D_SensitiveCircle_OCWrappers_HeaderFile
#define _Select3D_SensitiveCircle_OCWrappers_HeaderFile

// include the wrapped class
#include <Select3D_SensitiveCircle.hxx>
#include "../Converter.h"

#include "Select3D_SensitivePoly.h"



namespace OCNaroWrappers
{

ref class OCGeom_Circle;
ref class OCSelectBasics_EntityOwner;
ref class OCTColgp_HArray1OfPnt;
ref class OCTColgp_Array1OfPnt;
ref class OCTColgp_Array1OfPnt2d;
ref class OCBnd_Box2d;
ref class OCgp_Lin;
ref class OCgp_Pnt;
ref class OCSelect3D_SensitiveEntity;
ref class OCTopLoc_Location;
ref class OCSelect3D_Projector;


//! A framework to define sensitive 3D arcs and circles. <br>
//! In some cases this class can raise Standard_ConstructionError and <br>
//! Standard_OutOfRange exceptions. For more details see Select3D_SensitivePoly. <br>
public ref class OCSelect3D_SensitiveCircle : OCSelect3D_SensitivePoly {

protected:
  // dummy constructor;
  OCSelect3D_SensitiveCircle(OCDummy^) : OCSelect3D_SensitivePoly((OCDummy^)nullptr) {};

public:

// constructor from native
OCSelect3D_SensitiveCircle(Handle(Select3D_SensitiveCircle)* nativeHandle);

// Methods PUBLIC

//! Constructs the sensitive circle object defined by the <br>
//! owner OwnerId, the circle Circle, the Boolean <br>
//! FilledCircle and the number of points NbOfPoints. <br>
OCSelect3D_SensitiveCircle(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCGeom_Circle^ TheCircle, System::Boolean FilledCircle, Standard_Integer NbOfPoints);

//! Constructs the sensitive arc object defined by the <br>
//! owner OwnerId, the circle Circle, the parameters u1 <br>
//! and u2, the Boolean FilledCircle and the number of points NbOfPoints. <br>
//! u1 and u2 define the first and last points of the arc on Circle. <br>
OCSelect3D_SensitiveCircle(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCGeom_Circle^ TheCircle, Standard_Real u1, Standard_Real u2, System::Boolean FilledCircle, Standard_Integer NbOfPoints);

//! Constructs the sensitive circle object defined by the <br>
//! owner OwnerId, the array of triangles apolyg3d, and the Boolean FilledCircle. <br>
//! apolyg3d is an array of consecutive triangles on the <br>
//! circle. The triangle i+1 lies on the intersection of the <br>
//! tangents to the circle of i and i+2. Note, that the first point of apolyg3d <br>
//! must be equal to the last point of apolyg3d. <br>
OCSelect3D_SensitiveCircle(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCTColgp_HArray1OfPnt^ apolyg3d, System::Boolean FilledCircle);

//! Constructs the sensitive circle object defined by the <br>
//! owner OwnerId, the array of points apolyg3d, and the Boolean FilledCircle. <br>
//! If the length of apolyg3d is more then 1, the first point of apolyg3d <br>
//! must be equal to the last point of apolyg3d. <br>
OCSelect3D_SensitiveCircle(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCTColgp_Array1OfPnt^ apolyg3d, System::Boolean FilledCircle);


virtual /*instead*/  System::Boolean Matches(Standard_Real X, Standard_Real Y, Standard_Real aTol, Standard_Real& DMin) override;


virtual /*instead*/  System::Boolean Matches(Standard_Real XMin, Standard_Real YMin, Standard_Real XMax, Standard_Real YMax, Standard_Real aTol) override;


virtual /*instead*/  System::Boolean Matches(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Polyline, OCNaroWrappers::OCBnd_Box2d^ aBox, Standard_Real aTol) override;


virtual /*instead*/  Standard_Real ComputeDepth(OCNaroWrappers::OCgp_Lin^ EyeLine) ;


 /*instead*/  void ArrayBounds(Standard_Integer& Low, Standard_Integer& Up) ;


 /*instead*/  OCgp_Pnt^ GetPoint3d(Standard_Integer rank) ;


virtual /*instead*/  void Dump(Standard_OStream& S, System::Boolean FullDump) override;

//! Returns the copy of this. <br>
virtual /*instead*/  OCSelect3D_SensitiveEntity^ GetConnected(OCNaroWrappers::OCTopLoc_Location^ theLocation) override;


virtual /*instead*/  void Project(OCNaroWrappers::OCSelect3D_Projector^ aProjector) override;

~OCSelect3D_SensitiveCircle()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
