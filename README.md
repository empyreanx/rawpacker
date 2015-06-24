# RawPacker

Simple binary packing/unpacking for `RawArray` in Godot.

## About

`RawPacker` allows `Variant` arrays to be packed into and unpacked from a `RawArray` using a format string. The approach was inspired by Python's `struct.pack` and `struct.unpack` functions.
Packing/unpacking `RawArray` is useful for sending and storing data in a compact form.

## Installation

Simply drop the `rawpacker` directory in your `godot/modules` directory and build for the platfom of your choice.

## Example

```python
var raw_packer = RawPacker.new()
var raw_array = raw_packer.pack("?iis16fhv", [false,1,2,"fixed string",3.14,-42,"variable string"])
var array = raw_packer.unpack("?iis16fhv", raw_array)
print(array)
```

**Output:**
```
False, 1, 2, fixed string, 3.14, -42, variable string
```

## Format Strings

| Format | Serialized Type    | Godot Type | Size (bytes) |
|:------:|--------------------|------------|:------------:|
| c      | char               | integer    | 1            |
| b      | unsigned char      | integer    | 1            |
| ?      | unsigned char      | boolean    | 1            |
| h      | short              | integer    | 2            |
| H      | unsigned short     | integer    | 2            |
| i      | int                | integer    | 4            |
| I      | unsigned int       | integer    | 4            |
| q      | long long          | integer    | 8            |
| Q      | unsigned long long | integer    | 8            |
| f      | float              | real       | 4            |
| d      | double             | real       | 8            |
| s#     | char[]             | string     | # 		      |
| v      | char[]             | string     | variable     |

## License
Copyright (c) 2015 James McLean  
Licensed under the MIT license.
