//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FAnimationModel.h"

@class CAAnimationGroup, NSMutableDictionary, NSString;

@interface FItemModel : FAnimationModel
{
    NSString *_name;
    NSString *_page;
    CAAnimationGroup *_animationGroup;
    NSMutableDictionary *_motions;
    double _groupDuration;
}

@property(nonatomic) double groupDuration; // @synthesize groupDuration=_groupDuration;
@property(retain, nonatomic) NSMutableDictionary *motions; // @synthesize motions=_motions;
@property(retain, nonatomic) CAAnimationGroup *animationGroup; // @synthesize animationGroup=_animationGroup;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)processTimeWithMotion:(id)arg1;
- (void)processGroupDuration;
- (void)buildAnimationGroup;
- (void)processFollowMotions;
- (_Bool)parseData:(id)arg1;
- (id)initWithData:(id)arg1;

@end

