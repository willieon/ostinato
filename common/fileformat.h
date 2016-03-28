/*
Copyright (C) 2010 Srivats P.

This file is part of "Ostinato"

This is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#ifndef _FILE_FORMAT_H
#define _FILE_FORMAT_H

#include "abstractfileformat.h"
#include "nativefileformat.h"

#include "fileformat.pb.h"

class FileFormat : public AbstractFileFormat, public NativeFileFormat
{
public:
    FileFormat();

    virtual bool openStreams(const QString fileName, 
            OstProto::StreamConfigList &streams, QString &error);
    virtual bool saveStreams(const OstProto::StreamConfigList streams, 
            const QString fileName, QString &error);

    bool isMyFileFormat(const QString fileName);
    bool isMyFileType(const QString fileType);
};

extern FileFormat fileFormat;

#endif
