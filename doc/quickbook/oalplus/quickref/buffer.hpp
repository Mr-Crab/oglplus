/*
 *  Copyright 2014-2019 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

//[oalplus_buffer_common_1

template <>
class __ObjectOps<__tag_DirectState, __tag_Buffer> : public __BufferName {
public:
    void Data(
      __DataFormat format,
      const ALvoid* data,
      ALsizei size,
      ALsizei frequency); /*<
                       Specifies the buffer audio sample data.
                       See [alfunc BufferData].
                       >*/

    ALsizei Frequency() const; /*<
    Returns the sampling frequency (in Hz) of the data stored in this buffer.
    See [alfunc GetBuffer], [alconst FREQUENCY].
    >*/

    ALsizei Size() const; /*<
    Returns the size (in bytes) of the data stored in this buffer.
    >*/

    ALsizei Bits() const; /*<
    Returns the number of bits per sample of the data stored in this buffer.
    See [alfunc GetBuffer], [alconst BITS].
    >*/

    ALsizei Channels() const; /*<
    Returns the number of channels of the data stored in this buffer.
    See [alfunc GetBuffer], [alconst CHANNELS].
    >*/

    ALfloat Duration() const; /*<
    Returns the duration (in seconds) of the sound stored in this buffer.
    See [alfunc GetBuffer], [alconst SIZE], [alconst FREQUENCY],
    [alconst CHANNELS], [alconst CHANNELS].
    >*/
};
//]
//[oalplus_buffer_def

using BufferOps = ObjectOps<__tag_DirectState, __tag_Buffer>;

using Buffer = __Object<BufferOps>;

//]
