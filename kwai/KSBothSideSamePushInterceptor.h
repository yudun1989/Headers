//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSNavigationPushInterceptor-Protocol.h"

@class NSArray, NSString;

@interface KSBothSideSamePushInterceptor : NSObject <KSNavigationPushInterceptor>
{
    Class _bothSideVCClass;
    NSArray *_currentVCClasses;
    CDUnknownBlockType _predicator;
}

@property(copy, nonatomic) CDUnknownBlockType predicator; // @synthesize predicator=_predicator;
@property(retain, nonatomic) NSArray *currentVCClasses; // @synthesize currentVCClasses=_currentVCClasses;
@property(retain, nonatomic) Class bothSideVCClass; // @synthesize bothSideVCClass=_bothSideVCClass;
- (void).cxx_destruct;
- (void)handlePushForViewController:(id)arg1 inNavigationController:(id)arg2 withUserInfo:(id)arg3;
- (_Bool)canHandlePushForViewController:(id)arg1 inNavigationController:(id)arg2 withUserInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

