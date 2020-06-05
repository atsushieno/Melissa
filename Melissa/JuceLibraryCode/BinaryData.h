/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   arrow_left_svg;
    const int            arrow_left_svgSize = 1101;

    extern const char*   arrow_left_highlighted_svg;
    const int            arrow_left_highlighted_svgSize = 1130;

    extern const char*   arrow_right_highlighted_svg;
    const int            arrow_right_highlighted_svgSize = 1228;

    extern const char*   arrow_right_svg;
    const int            arrow_right_svgSize = 1199;

    extern const char*   enUS_txt;
    const int            enUS_txtSize = 2072;

    extern const char*   jaJP_txt;
    const int            jaJP_txtSize = 2550;

    extern const char*   logo_png;
    const int            logo_pngSize = 121456;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 7;

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
