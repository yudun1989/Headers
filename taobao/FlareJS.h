//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FLareJSProtocol-Protocol.h"
#import "FlareJSAnimationActionProtocol-Protocol.h"
#import "FlareJSBaseProtocol-Protocol.h"

@class JSManagedValue, NSString;
@protocol FlareJSAnimationActionProtocol;

@interface FlareJS : NSObject <FLareJSProtocol, FlareJSAnimationActionProtocol, FlareJSBaseProtocol>
{
    id <FlareJSAnimationActionProtocol> _jsService;
    JSManagedValue *_moduleValue;
}

@property(retain, nonatomic) JSManagedValue *moduleValue; // @synthesize moduleValue=_moduleValue;
@property(nonatomic) __weak id <FlareJSAnimationActionProtocol> jsService; // @synthesize jsService=_jsService;
- (void).cxx_destruct;
- (void)playAnimationWithComponentKey:(id)arg1 animationData:(id)arg2;
- (void)playAnimationWithComponentKey:(id)arg1 animationID:(id)arg2 after:(id)arg3;
- (void)playAnimationWithComponentKey:(id)arg1 animationID:(id)arg2;
- (void)playAnimationWithComponentKey:(id)arg1 after:(id)arg2;
- (void)playAnimationWithComponentKey:(id)arg1;
- (void)addAnimationDescriptionData:(id)arg1;
- (void)registerModule:(id)arg1;
- (void)log:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

