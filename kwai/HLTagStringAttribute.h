//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HLStringAttributeInterface-Protocol.h"

@class NSMutableArray, NSString;

@interface HLTagStringAttribute : NSObject <HLStringAttributeInterface>
{
    _Bool _isHightLight;
    NSMutableArray *_runRect;
    NSString *_tagName;
}

@property(nonatomic) _Bool isHightLight; // @synthesize isHightLight=_isHightLight;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(retain) NSMutableArray *runRect; // @synthesize runRect=_runRect;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1;
- (void)touchesBegan:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 in:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

