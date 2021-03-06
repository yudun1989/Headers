//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANXBaseLogModel.h"

#import "ANXBehavior-Protocol.h"

@class NSMutableDictionary, NSString;

@interface ANXBehaviorModel : ANXBaseLogModel <ANXBehavior>
{
    NSString *userCaseID;
    unsigned long long behaviorType;
    NSString *lastView;
    NSString *behaviorCode;
    NSString *behaviorTime;
    NSString *param1;
    NSString *param2;
    NSString *param3;
    NSString *currentView;
    NSString *time;
    NSMutableDictionary *_remark;
}

@property(retain, nonatomic) NSMutableDictionary *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *time; // @synthesize time;
@property(copy, nonatomic) NSString *currentView; // @synthesize currentView;
@property(copy, nonatomic) NSString *param3; // @synthesize param3;
@property(copy, nonatomic) NSString *param2; // @synthesize param2;
@property(copy, nonatomic) NSString *param1; // @synthesize param1;
@property(copy, nonatomic) NSString *behaviorTime; // @synthesize behaviorTime;
@property(copy, nonatomic) NSString *behaviorCode; // @synthesize behaviorCode;
@property(copy, nonatomic) NSString *lastView; // @synthesize lastView;
@property(nonatomic) unsigned long long behaviorType; // @synthesize behaviorType;
@property(copy, nonatomic) NSString *userCaseID; // @synthesize userCaseID;
- (void).cxx_destruct;
- (void)addRemark:(id)arg1 forKey:(id)arg2;
- (id)childModelContents;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

