/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   darkwood_jpeg;
    const int            darkwood_jpegSize = 4876170;

    extern const char*   fulldark_jpeg;
    const int            fulldark_jpegSize = 1976867;

    extern const char*   green_jpeg;
    const int            green_jpegSize = 629814;

    extern const char*   landon5503_png;
    const int            landon5503_pngSize = 28292;

    extern const char*   landon5504_png;
    const int            landon5504_pngSize = 26270;

    extern const char*   naturalwood_jpeg;
    const int            naturalwood_jpegSize = 2153501;

    extern const char*   phonebooks_jpg;
    const int            phonebooks_jpgSize = 607630;

    extern const char*   pluginBackground_png;
    const int            pluginBackground_pngSize = 8282212;

    extern const char*   pluginBackground2_png;
    const int            pluginBackground2_pngSize = 2893608;

    extern const char*   testTexture_png;
    const int            testTexture_pngSize = 3965203;

    extern const char*   TEXTURE5_png;
    const int            TEXTURE5_pngSize = 3515887;

    extern const char*   white_jpeg;
    const int            white_jpegSize = 2792812;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 12;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
}