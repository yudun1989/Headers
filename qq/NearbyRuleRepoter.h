//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NearbyVisitProRec;

@interface NearbyRuleRepoter : NSObject
{
    NSMutableArray *_visitList;
    NearbyVisitProRec *_currentVisitRec;
}

+ (id)getInstance;
@property(retain, nonatomic) NearbyVisitProRec *currentVisitRec; // @synthesize currentVisitRec=_currentVisitRec;
@property(retain, nonatomic) NSMutableArray *visitList; // @synthesize visitList=_visitList;
- (void).cxx_destruct;
- (void)resetCurrentRec;
- (id)getCurrentVistRec;
- (void)addNewVisitProRec:(id)arg1 recordByCurrentRec:(_Bool)arg2;
- (void)reportVisitList:(id)arg1 recursionCount:(long long)arg2;
- (void)upload;
- (id)init;

@end

