//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PodWBCloudFaceVerifySDK_TKEvent, PodWBCloudFaceVerifySDK_TKState, PodWBCloudFaceVerifySDK_TKStateMachine;

@interface PodWBCloudFaceVerifySDK_TKTransition : NSObject
{
    PodWBCloudFaceVerifySDK_TKEvent *_event;
    PodWBCloudFaceVerifySDK_TKState *_sourceState;
    PodWBCloudFaceVerifySDK_TKStateMachine *_stateMachine;
    NSDictionary *_userInfo;
}

+ (id)transitionForEvent:(id)arg1 fromState:(id)arg2 inStateMachine:(id)arg3 userInfo:(id)arg4;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) PodWBCloudFaceVerifySDK_TKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) PodWBCloudFaceVerifySDK_TKState *sourceState; // @synthesize sourceState=_sourceState;
@property(retain, nonatomic) PodWBCloudFaceVerifySDK_TKEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
@property(readonly, nonatomic) PodWBCloudFaceVerifySDK_TKState *destinationState;

@end

