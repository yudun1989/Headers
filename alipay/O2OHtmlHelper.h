//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSAttributedString, NSMutableArray, NSMutableString, NSString;

@interface O2OHtmlHelper : NSObject <NSXMLParserDelegate>
{
    NSMutableArray *_attrStack;
    NSMutableArray *_strs;
    NSMutableArray *_attrs;
    NSMutableString *_currStr;
    NSAttributedString *_attributedString;
}

+ (id)htmlEncodedString:(id)arg1;
+ (id)attributedStringFromHtml:(id)arg1;
@property(readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void).cxx_destruct;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)reduceWhitespaces:(id)arg1;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)paragraphStart;
- (id)initWithHtml:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

