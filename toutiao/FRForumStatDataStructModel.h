//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol FROwnerActionStatDataStructModel><Optional;

@interface FRForumStatDataStructModel : JSONModel
{
    NSString *_data_time;
    NSNumber *_publish_count;
    NSNumber *_comment_count;
    long long _new_follow_count;
    NSArray<FROwnerActionStatDataStructModel><Optional> *_owner_action_stat_data_list;
}

@property(retain, nonatomic) NSArray<FROwnerActionStatDataStructModel><Optional> *owner_action_stat_data_list; // @synthesize owner_action_stat_data_list=_owner_action_stat_data_list;
@property(nonatomic) long long new_follow_count; // @synthesize new_follow_count=_new_follow_count;
@property(retain, nonatomic) NSNumber *comment_count; // @synthesize comment_count=_comment_count;
@property(retain, nonatomic) NSNumber *publish_count; // @synthesize publish_count=_publish_count;
@property(retain, nonatomic) NSString *data_time; // @synthesize data_time=_data_time;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

