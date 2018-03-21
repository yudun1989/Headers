//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LYWStateType-Protocol.h"

@class KSETimeRange, KSPencilMediaProject, NSArray, NSString;

@interface KSMediaEditTrimmingState : NSObject <LYWStateType>
{
    KSETimeRange *_trimRange;
    NSArray *_deleteRange;
    KSPencilMediaProject *_project;
    double _maxTrimmingDuration;
    double _currentPlayTime;
}

@property(nonatomic) double currentPlayTime; // @synthesize currentPlayTime=_currentPlayTime;
@property(nonatomic) double maxTrimmingDuration; // @synthesize maxTrimmingDuration=_maxTrimmingDuration;
@property(retain, nonatomic) KSPencilMediaProject *project; // @synthesize project=_project;
@property(retain, nonatomic) NSArray *deleteRange; // @synthesize deleteRange=_deleteRange;
@property(retain, nonatomic) KSETimeRange *trimRange; // @synthesize trimRange=_trimRange;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToState:(id)arg1;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

