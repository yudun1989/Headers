//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBKViewModelProtocol-Protocol.h"

@class NSString;

@interface MBKCardTrialTableViewCellModel : NSObject <MBKViewModelProtocol>
{
    _Bool _willCellBeHidden;
    NSString *_trialString;
}

@property(nonatomic) _Bool willCellBeHidden; // @synthesize willCellBeHidden=_willCellBeHidden;
@property(retain, nonatomic) NSString *trialString; // @synthesize trialString=_trialString;
- (void).cxx_destruct;
- (Class)viewClass;
@property(readonly, nonatomic) double viewHeight;
@property(readonly, nonatomic) double viewWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

