//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QQSF2018AwardModel;

@interface QQSF2018ActivityAward : NSObject
{
    unsigned long long _type;
    QQSF2018AwardModel *_awardModel;
}

@property(retain, nonatomic) QQSF2018AwardModel *awardModel; // @synthesize awardModel=_awardModel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *awardBgImageUrl;
@property(readonly, nonatomic) NSString *awardVideoUrl;
@property(readonly, nonatomic) NSString *grettings;
@property(readonly, nonatomic) NSString *awardName;
@property(readonly, nonatomic) long long logoId;

@end

