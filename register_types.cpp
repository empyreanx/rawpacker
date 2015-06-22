/* register_types.cpp */

#include "register_types.h"
#include "object_type_db.h"
#include "raw_packer.h"

void register_rawpacker_types() {

	ObjectTypeDB::register_type<RawPacker>();
}

void unregister_rawpacker_types() {
   //nothing to do here
}
