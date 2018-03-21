//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSXMLParserDelegate-Protocol.h>

@class NSMutableString, NSString, NSXMLParser, QQARConfigModel, QQARFeatureModel, QQARFragmentModel;

@interface QQARActivityParser : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *_parser;
    NSMutableString *_currentElementContent;
    QQARConfigModel *configModel;
    int processingSegmentType;
    QQARFeatureModel *_curFeatureModel;
    QQARFragmentModel *_curFragementModel;
    _Bool _isCloudModel;
    NSString *_tag;
}

@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool isCloudModel; // @synthesize isCloudModel=_isCloudModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)parseCloud:(id)arg1;
- (id)parse:(id)arg1;
- (void)parserWithJsonString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

