//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTAdAppointDelegate-Protocol.h"

@class NSString, TTAdAppointAlertView;

@interface TTAdFormHandler : NSObject <TTAdAppointDelegate>
{
    CDUnknownBlockType _completeBlock;
    TTAdAppointAlertView *_alertView;
}

+ (id)sharedInstance;
+ (void)load;
@property(retain, nonatomic) TTAdAppointAlertView *alertView; // @synthesize alertView=_alertView;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
- (void).cxx_destruct;
- (void)appointAlertViewCompleteType:(unsigned long long)arg1;
- (_Bool)handleFormModel:(id)arg1 fromSource:(unsigned long long)arg2 completeBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

