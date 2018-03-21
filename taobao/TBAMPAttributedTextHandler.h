//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AMPAttributedStringHandler-Protocol.h"

@class NSString;
@protocol TBIMAttributedStringHandlerAdapter;

@interface TBAMPAttributedTextHandler : NSObject <AMPAttributedStringHandler>
{
    id <TBIMAttributedStringHandlerAdapter> _imAttributedStringHandlerAdapter;
}

@property(retain, nonatomic) id <TBIMAttributedStringHandlerAdapter> imAttributedStringHandlerAdapter; // @synthesize imAttributedStringHandlerAdapter=_imAttributedStringHandlerAdapter;
- (void).cxx_destruct;
- (struct CGSize)sizeOfAttributeText:(id)arg1 withMessageStyleKey:(id)arg2;
- (id)parserStringContent:(id)arg1 withMessageStyleKey:(id)arg2 withCustomParser:(id)arg3;
- (id)textMessageStyleTextColorWithKey:(id)arg1;
- (id)textMessageStyleTextHighlightColorWithKey:(id)arg1;
- (id)textMessageStyleFontWithKey:(id)arg1;
- (long long)textMessageStyleVersionWithKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

