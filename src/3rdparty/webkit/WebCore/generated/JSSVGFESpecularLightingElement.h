/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSSVGFESpecularLightingElement_h
#define JSSVGFESpecularLightingElement_h

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "JSSVGElement.h"
#include "SVGElement.h"

namespace WebCore {

class SVGFESpecularLightingElement;

class JSSVGFESpecularLightingElement : public JSSVGElement {
    typedef JSSVGElement Base;
public:
    JSSVGFESpecularLightingElement(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<SVGFESpecularLightingElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags));
    }

protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSSVGFESpecularLightingElementPrototype : public JSC::JSObject {
    typedef JSC::JSObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags));
    }
    JSSVGFESpecularLightingElementPrototype(NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::JSValue JSC_HOST_CALL jsSVGFESpecularLightingElementPrototypeFunctionGetPresentationAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
// Attributes

JSC::JSValue jsSVGFESpecularLightingElementIn1(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsSVGFESpecularLightingElementSurfaceScale(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsSVGFESpecularLightingElementSpecularConstant(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsSVGFESpecularLightingElementSpecularExponent(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsSVGFESpecularLightingElementX(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsSVGFESpecularLightingElementY(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsSVGFESpecularLightingElementWidth(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsSVGFESpecularLightingElementHeight(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsSVGFESpecularLightingElementResult(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsSVGFESpecularLightingElementClassName(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValue jsSVGFESpecularLightingElementStyle(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif // ENABLE(SVG) && ENABLE(FILTERS)

#endif
