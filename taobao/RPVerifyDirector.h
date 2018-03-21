//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "VerifyComponentDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, RPVerifyGuide, UIViewController, VerifyComponent;

@interface RPVerifyDirector : NSObject <VerifyComponentDelegate>
{
    int _curStep;
    CDUnknownBlockType _finishHandler;
    NSDictionary *_dictComponentNames;
    RPVerifyGuide *_guide;
    NSString *_verifyToken;
    UIViewController *_controller;
    VerifyComponent *_curComponent;
    NSMutableDictionary *_remains;
}

+ (id)directorWithGuide:(id)arg1 verifyToken:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *remains; // @synthesize remains=_remains;
@property(retain, nonatomic) VerifyComponent *curComponent; // @synthesize curComponent=_curComponent;
@property(retain, nonatomic) UIViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) int curStep; // @synthesize curStep=_curStep;
@property(retain, nonatomic) NSString *verifyToken; // @synthesize verifyToken=_verifyToken;
@property(retain, nonatomic) RPVerifyGuide *guide; // @synthesize guide=_guide;
@property(retain, nonatomic) NSDictionary *dictComponentNames; // @synthesize dictComponentNames=_dictComponentNames;
@property(copy, nonatomic) CDUnknownBlockType finishHandler; // @synthesize finishHandler=_finishHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)remainSomething;
- (void)maybeRemainInEnd:(id)arg1 remain:(id)arg2 pathName:(id)arg3;
- (void)theatreLetout:(long long)arg1;
- (void)didEvent:(id)arg1 eventData:(id)arg2;
- (void)didComplete:(id)arg1 errorCode:(long long)arg2 resultData:(id)arg3;
- (void)doNextStep;
- (void)start:(id)arg1;
- (id)createComponentByStepName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

