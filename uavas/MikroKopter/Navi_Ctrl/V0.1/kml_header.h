//________________________________________________________________________________________________________________________________________
// 
// Definition of KML header and footer elements for documents, placemarks and linestrings
//				
//________________________________________________________________________________________________________________________________________
const s8 KML_DOCUMENT_HEADER[] =
{
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n"
"<kml xmlns=\"http://earth.google.com/kml/2.2\">\r\n"
"<Document>\r\n"
"<name>Mikrokopter GPS logging</name>\r\n"
"\r\n"
"<Style id=\"MK_gps-style\">\r\n"
"<LineStyle>\r\n"
"<color>ff0000ff</color>\r\n"
"<width>2</width>\r\n"
"</LineStyle>\r\n"
"</Style>\r\n"
};

//________________________________________________________________________________________________________________________________________
// 
// footer of an KML- file.
//				
//________________________________________________________________________________________________________________________________________
const s8 KML_DOCUMENT_FOOTER[] = 
{
"</Document>\r\n"
"</kml>\r\n"
};

//________________________________________________________________________________________________________________________________________
// 
// Header of an placemark
//				
//________________________________________________________________________________________________________________________________________
const s8 KML_PLACEMARK_HEADER[] = 
{
"<Placemark>\r\n"
"<name>Flight</name>\r\n"
"<styleUrl>#MK_gps-style</styleUrl>\r\n"
};

//________________________________________________________________________________________________________________________________________
// 
// Footer of an placemark
//				
//________________________________________________________________________________________________________________________________________
const s8 KML_PLACEMARK_FOOTER[] = 
{
"</Placemark>\r\n"
};


//________________________________________________________________________________________________________________________________________
// 
// Header of an linestring
//				
//________________________________________________________________________________________________________________________________________
const s8 KML_LINESTRING_HEADER[] = 
{
"<LineString>\r\n"
"<tessellate>1</tessellate>\r\n"
"<altitudeMode>relativeToGround</altitudeMode>\r\n"  // also possible "absolute"
"<coordinates>\r\n"
};

//________________________________________________________________________________________________________________________________________
// 
// Footer of an linestring
//				
//________________________________________________________________________________________________________________________________________
const s8 KML_LINESTRING_FOOTER[] = 
{
"\r\n</coordinates>"
"\r\n</LineString>\r\n"
};

