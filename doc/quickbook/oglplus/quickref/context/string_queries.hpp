/*
 *  Copyright 2014-2019 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

//[oglplus_context_StringQueries
namespace context {

class StringQueries {
public:
    static const GLubyte* GetString(__StringQuery query); /*<
    Queries a string describing GL properties.
    See [glfunc GetString].
    >*/

    static const char* Vendor(); /*<
    Returns the name of the GL implementation vendor.
    See [glfunc GetString], [glconst VENDOR].
    >*/
    static const char* Renderer(); /*<
    Returns the renderer name string.
    See [glfunc GetString], [glconst RENDERER].
    >*/
    static const char* Version(); /*<
    Returns the version string of the GL implementation.
    See [glfunc GetString], [glconst VERSION].
    >*/
    static const char* ShadingLanguageVersion(); /*<
    Returns the shading language version string of the GL implementation.
    See [glfunc GetString], [glconst SHADING_LANGUAGE_VERSION].
    >*/

#if GL_VERSION_4_3
    static GLuint NumShadingLanguageVersions(); /*<
    Queries the number of supported shading language versions.
    See [glfunc Get], [glconst NUM_SHADING_LANGUAGE_VERSIONS].
    >*/
    static const GLubyte* ShadingLanguageVersion(GLuint index); /*<
    Returns the name of [^index]th supported shading language version.
    See [glfunc GetString], [glconst SHADING_LANGUAGE_VERSION].
    >*/
    static __Range<__StrCRef> ShadingLanguageVersions(); /*<
    Returns a range of supported GLSL version strings.
    See [glfunc GetString], [glconst SHADING_LANGUAGE_VERSION].
    >*/
#endif

    static GLuint NumExtensions(); /*<
    Queries the number of extension strings.
    See [glfunc Get], [glconst NUM_EXTENSIONS].
    >*/
    static const GLubyte* Extensions(GLuint index); /*<
    Returns the name of the [^index]th extension.
    See [glfunc GetString], [glconst EXTENSIONS].
    >*/
    static __Range<__StrCRef> Extensions(); /*<
    Returns a range of extension name strings.
    See [glfunc GetString], [glconst EXTENSIONS].
    >*/
};

} // namespace context
//]
