//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDXMLNode.h"

@interface DDXMLElement : DDXMLNode
{
}

+ (id)nodeWithPrimitive:(struct _xmlKind *)arg1 owner:(id)arg2;
+ (id)nodeWithElementPrimitive:(struct _xmlNode *)arg1 owner:(id)arg2;
+ (id)elementWithName:(id)arg1 xmlns:(id)arg2;
- (void)setChildren:(id)arg1;
- (void)removeChildAtIndex:(unsigned long long)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChild:(id)arg1;
- (id)resolvePrefixForNamespaceURI:(id)arg1;
- (id)_recursiveResolvePrefixForURI:(id)arg1 atNode:(struct _xmlNode *)arg2;
- (id)resolveNamespaceForName:(id)arg1;
- (id)_recursiveResolveNamespaceForPrefix:(id)arg1 atNode:(struct _xmlNode *)arg2;
- (void)setNamespaces:(id)arg1;
- (id)namespaceForPrefix:(id)arg1;
- (id)namespaces;
- (void)removeNamespaceForPrefix:(id)arg1;
- (void)addNamespace:(id)arg1;
- (void)_addNamespace:(id)arg1;
- (void)_removeNamespaceForPrefix:(id)arg1;
- (void)setAttributes:(id)arg1;
- (id)attributeForName:(id)arg1;
- (id)attributes;
- (void)removeAttributeForName:(id)arg1;
- (void)addAttribute:(id)arg1;
- (void)_removeAttributeForName:(id)arg1;
- (_Bool)_hasAttributeWithName:(id)arg1;
- (id)elementsForLocalName:(id)arg1 URI:(id)arg2;
- (id)elementsForName:(id)arg1;
- (id)_elementsForName:(id)arg1 localName:(id)arg2 prefix:(id)arg3 uri:(id)arg4;
- (id)initWithXMLString:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 stringValue:(id)arg2;
- (id)initWithName:(id)arg1 URI:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)initWithPrimitive:(struct _xmlKind *)arg1 owner:(id)arg2;
- (id)initWithElementPrimitive:(struct _xmlNode *)arg1 owner:(id)arg2;
- (id)attributesAsDictionary;
- (void)addAttributeWithName:(id)arg1 stringValue:(id)arg2;
- (id)compactXMLString;
- (id)prettyXMLString;
- (void)setXmlns:(id)arg1;
- (id)xmlns;
- (id)elementForName:(id)arg1 xmlns:(id)arg2;
- (id)elementForName:(id)arg1;
- (id)valueOfAttribute:(id)arg1;

@end

