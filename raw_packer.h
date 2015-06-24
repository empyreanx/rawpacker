/* raw_packer.h */

#ifndef RAW_PACKER_H
#define RAW_PACKER_H

#include "error_list.h"
#include "error_macros.h"
#include "io/marshalls.h"
#include "reference.h"
#include "ustring.h"
#include "variant.h"

class RawPacker : public Reference {
    OBJ_TYPE(RawPacker,Reference);

	Error encode(const String& fmt, const Array& array, uint8_t *buf, int &len);
	Error decode(const String& fmt, Array& array, const uint8_t *buf, int size);
	
	bool is_digit(char c);
	
protected:

    static void _bind_methods();

public:

	ByteArray pack(const String& fmt, const Array& array);
	Array unpack(const String& fmt, const ByteArray& array);
    
    RawPacker();
};

#endif
