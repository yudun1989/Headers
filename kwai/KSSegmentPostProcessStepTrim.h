//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSSegmentPostProcessStep-Protocol.h"

@class NSString;

@interface KSSegmentPostProcessStepTrim : NSObject <KSSegmentPostProcessStep>
{
    CDStruct_e83c9415 _targetRange;
}

@property(readonly, nonatomic) CDStruct_e83c9415 targetRange; // @synthesize targetRange=_targetRange;
- (struct KSSegmentInsets)processOnComposition:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (id)initWithRange:(CDStruct_e83c9415)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

