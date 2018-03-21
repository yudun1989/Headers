//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HLAttributedStringProcesserInterface-Protocol.h"

@class NSString, UIColor;

@interface HLURLAttributedStringProcesser : NSObject <HLAttributedStringProcesserInterface>
{
    UIColor *_linkTextColor;
    CDUnknownBlockType _addtionProcessBlock;
}

+ (id)sharedHLURLAttributedStringProcesser;
@property(copy, nonatomic) CDUnknownBlockType addtionProcessBlock; // @synthesize addtionProcessBlock=_addtionProcessBlock;
@property(retain, nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
- (void).cxx_destruct;
- (void)configAttributedString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

