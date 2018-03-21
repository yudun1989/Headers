//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, RDSBehaviorAction;

@interface RDSBehaviorManager : NSObject
{
    _Bool _rdsBehaviorMgrPbSwicth;
    int _eventNum;
    int _sequence;
    NSString *_appname;
    NSString *_appver;
    NSString *_sdkname;
    NSString *_sdkver;
    NSString *_user;
    NSString *_pagesrc;
    NSString *_page;
    NSString *_prepage;
    NSString *_appkey;
    NSString *_pagetime;
    NSMutableArray *_userActions;
    RDSBehaviorAction *_currentAction;
}

@property(nonatomic) int sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) RDSBehaviorAction *currentAction; // @synthesize currentAction=_currentAction;
@property(retain, nonatomic) NSMutableArray *userActions; // @synthesize userActions=_userActions;
@property(nonatomic) int eventNum; // @synthesize eventNum=_eventNum;
@property(retain, nonatomic) NSString *pagetime; // @synthesize pagetime=_pagetime;
@property(nonatomic) _Bool rdsBehaviorMgrPbSwicth; // @synthesize rdsBehaviorMgrPbSwicth=_rdsBehaviorMgrPbSwicth;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(retain, nonatomic) NSString *prepage; // @synthesize prepage=_prepage;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *pagesrc; // @synthesize pagesrc=_pagesrc;
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *sdkver; // @synthesize sdkver=_sdkver;
@property(retain, nonatomic) NSString *sdkname; // @synthesize sdkname=_sdkname;
@property(retain, nonatomic) NSString *appver; // @synthesize appver=_appver;
@property(retain, nonatomic) NSString *appname; // @synthesize appname=_appname;
- (void).cxx_destruct;
- (id)getBehaviorDataPB;
- (id)getBehaviorData;
- (_Bool)checkNewEvent:(long long)arg1 pagename:(id)arg2 ctrlname:(id)arg3;
- (id)createNewAction:(long long)arg1 pagename:(id)arg2 ctrlname:(id)arg3;
- (void)reportBehaviorType:(long long)arg1 pagename:(id)arg2 ctrlname:(id)arg3 withData:(id)arg4;
- (void)reset;
- (id)init;

@end

