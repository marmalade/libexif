libexif for Marmalade
=====================

See http://libexif.sourceforge.net/


Example
-------

```
#include "libexif/exif-data.h"

ExifData* data = exif_data_new_from_file("image.jpg"); /// Could also use exif_data_load_data() to load from memory
if (!data)
	throw runtime_error("Invalid/missing file?");

ExifContent* ifd = data->ifd[0]; 
const int BUFFER_LEN = 400;
char buffer[BUFFER_LEN];
exif_content_get_value(ifd, EXIF_TAG_SOFTWARE, buffer, BUFFER_LEN);
std::string s = "The software used to create the JPEG is: \n";
s += buffer;
s3eDebugErrorShow(S3E_MESSAGE_CONTINUE, s.c_str());

// Free the data:
exif_data_unref(data);
```
