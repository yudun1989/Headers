//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSArray, NSString;
@protocol Optional, WDInviteUserStructModel><Optional;

@interface WDInviteAggrUserStructModel : WDBaseModel
{
    NSString<Optional> *_aggr_message;
    NSArray<WDInviteUserStructModel><Optional> *_candidate_invite_user;
}

@property(copy, nonatomic) NSArray<WDInviteUserStructModel><Optional> *candidate_invite_user; // @synthesize candidate_invite_user=_candidate_invite_user;
@property(retain, nonatomic) NSString<Optional> *aggr_message; // @synthesize aggr_message=_aggr_message;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

