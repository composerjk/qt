/****************************************************************************
**
** Copyright (C) 2008 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the QtXmlPatterns module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.

#ifndef Patternist_XsdAlternative_H
#define Patternist_XsdAlternative_H

#include "qnamedschemacomponent_p.h"
#include "qschematype_p.h"
#include "qxsdannotated_p.h"
#include "qxsdxpathexpression_p.h"

#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QPatternist
{
    /**
     * @short Represents a XSD alternative object.
     *
     * @ingroup Patternist_schema
     * @author Tobias Koenig <tobias.koenig@nokia.com>
     */
    class XsdAlternative : public NamedSchemaComponent, public XsdAnnotated
    {
        public:
            typedef QExplicitlySharedDataPointer<XsdAlternative> Ptr;
            typedef QList<XsdAlternative::Ptr> List;

            /**
             * Sets the xpath @p test of the alternative.
             *
             * @see <a href="http://www.w3.org/TR/xmlschema11-1/#tac-test">Test Definition</a>
             */
            void setTest(const XsdXPathExpression::Ptr &test);

            /**
             * Returns the xpath test of the alternative.
             */
            XsdXPathExpression::Ptr test() const;

            /**
             * Sets the @p type of the alternative.
             *
             * @see <a href="http://www.w3.org/TR/xmlschema11-1/#tac-type_definition">Type Definition</a>
             */
            void setType(const SchemaType::Ptr &type);

            /**
             * Returns the type of the alternative.
             */
            SchemaType::Ptr type() const;

        private:
            XsdXPathExpression::Ptr m_test;
            SchemaType::Ptr         m_type;
    };
}

QT_END_NAMESPACE

QT_END_HEADER

#endif
