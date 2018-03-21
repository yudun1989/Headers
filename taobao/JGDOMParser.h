//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class JGComponent, NSDictionary, NSMutableDictionary, NSMutableString, NSString;
@protocol JGEventHandlerProtocol;

@interface JGDOMParser : NSObject <NSXMLParserDelegate>
{
    NSDictionary *_componentTagMap;
    id <JGEventHandlerProtocol> _eventHandler;
    JGComponent *_rootComponent;
    NSMutableDictionary *_globalData;
    JGComponent *_currentComponent;
    NSString *_currentTagName;
    NSDictionary *_globalStyles;
    NSMutableString *_currentTagValue;
}

@property(retain, nonatomic) NSMutableString *currentTagValue; // @synthesize currentTagValue=_currentTagValue;
@property(retain, nonatomic) NSDictionary *globalStyles; // @synthesize globalStyles=_globalStyles;
@property(retain, nonatomic) NSString *currentTagName; // @synthesize currentTagName=_currentTagName;
@property(retain, nonatomic) JGComponent *currentComponent; // @synthesize currentComponent=_currentComponent;
@property(retain, nonatomic) NSMutableDictionary *globalData; // @synthesize globalData=_globalData;
@property(retain, nonatomic) JGComponent *rootComponent; // @synthesize rootComponent=_rootComponent;
@property(nonatomic) __weak id <JGEventHandlerProtocol> eventHandler; // @synthesize eventHandler=_eventHandler;
@property(copy, nonatomic) NSDictionary *componentTagMap; // @synthesize componentTagMap=_componentTagMap;
- (void).cxx_destruct;
- (id)stylesWithGlobalStyles:(id)arg1 attributeDict:(id)arg2;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (Class)componentClassForTag:(id)arg1;
- (void)parseData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

