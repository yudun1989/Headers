//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LFCToString.h"

@class NSString;

@interface LFCLiveShowInfo : LFCToString
{
    NSString *_activityId;
    NSString *_currentFeedId;
    NSString *_hisotryFeedId;
    NSString *_officialFeedId;
    NSString *_friendFeedId;
}

@property(retain, nonatomic) NSString *friendFeedId; // @synthesize friendFeedId=_friendFeedId;
@property(retain, nonatomic) NSString *officialFeedId; // @synthesize officialFeedId=_officialFeedId;
@property(retain, nonatomic) NSString *hisotryFeedId; // @synthesize hisotryFeedId=_hisotryFeedId;
@property(retain, nonatomic) NSString *currentFeedId; // @synthesize currentFeedId=_currentFeedId;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;
- (void)updateWithScene:(id)arg1;

@end

