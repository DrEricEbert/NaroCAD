// File generated by CPPExt (Transient)
//
#ifndef _AlienImage_SunRFAlienData_OCWrappers_HeaderFile
#define _AlienImage_SunRFAlienData_OCWrappers_HeaderFile

// include the wrapped class
#include <AlienImage_SunRFAlienData.hxx>
#include "../Converter.h"

#include "AlienImage_AlienImageData.h"

#include "AlienImage_SUNRFFormat.h"


namespace OCNaroWrappers
{

ref class OCOSD_File;
ref class OCImage_Image;
ref class OCImage_PseudoColorImage;
ref class OCImage_ColorImage;


//! This class defines a SUN Raster File .rs Alien image. <br>
public ref class OCAlienImage_SunRFAlienData : OCAlienImage_AlienImageData {

protected:
  // dummy constructor;
  OCAlienImage_SunRFAlienData(OCDummy^) : OCAlienImage_AlienImageData((OCDummy^)nullptr) {};

public:

// constructor from native
OCAlienImage_SunRFAlienData(Handle(AlienImage_SunRFAlienData)* nativeHandle);

// Methods PUBLIC


OCAlienImage_SunRFAlienData();

//! Frees memory allocated by SunRFAlienData <br>
 /*instead*/  void FreeData() ;

//! Read content of a  SunRFAlienData object from a file . <br>
//!          Returns True if file is a Sun Raster file . <br>
 /*instead*/  System::Boolean Read(OCNaroWrappers::OCOSD_File^ afile) ;

//! Write content of a  SunRFAlienData object to a file . <br>
 /*instead*/  System::Boolean Write(OCNaroWrappers::OCOSD_File^ afile) ;

//! Set SUN Raster File Format for Write method. <br>
 /*instead*/  void SetFormat(OCAlienImage_SUNRFFormat aFormat) ;

//! Get SUN Raster File Format . <br>
 /*instead*/  OCAlienImage_SUNRFFormat Format() ;

//! convert a SunRFAlienData object to a Image object. <br>
 /*instead*/  OCImage_Image^ ToImage() ;

//! convert a Image object to a SunRFAlienData object. <br>
 /*instead*/  void FromImage(OCNaroWrappers::OCImage_Image^ anImage) ;

//! convert a Image object to a SunRFAlienData object. <br>
 /*instead*/  void FromPseudoColorImage(OCNaroWrappers::OCImage_PseudoColorImage^ anImage) ;

//! convert a Image object to a SunRFAlienData object. <br>
 /*instead*/  void FromColorImage(OCNaroWrappers::OCImage_ColorImage^ anImage) ;

//! Read a Image row from a file and store <br>
//!           TheRowSize byte at aAddress <br>
//!           returns True if Success. <br>
 /*instead*/  System::Boolean ReadPixelRow(OCNaroWrappers::OCOSD_File^ afile, Standard_Address aAddress, Standard_Integer TheRowSize) ;

//! Write a Image row to a file from TheRowSize byte at <br>
//!           aAddress <br>
//!           returns True if Success. <br>
 /*instead*/  System::Boolean WritePixelRow(OCNaroWrappers::OCOSD_File^ afile, Standard_Address aAddress, Standard_Integer TheRowSize) ;

~OCAlienImage_SunRFAlienData()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
