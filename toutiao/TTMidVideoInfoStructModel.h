//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol Optional;

@interface TTMidVideoInfoStructModel : JSONModel
{
    NSString<Optional> *_video_id;
    NSString<Optional> *_video_group_id;
    NSArray<Optional> *_play_track_url_list;
    NSArray<Optional> *_playover_track_url_list;
    NSArray<Optional> *_effective_play_track_url_list;
    NSNumber<Optional> *_effective_play_time;
}

@property(retain, nonatomic) NSNumber<Optional> *effective_play_time; // @synthesize effective_play_time=_effective_play_time;
@property(retain, nonatomic) NSArray<Optional> *effective_play_track_url_list; // @synthesize effective_play_track_url_list=_effective_play_track_url_list;
@property(retain, nonatomic) NSArray<Optional> *playover_track_url_list; // @synthesize playover_track_url_list=_playover_track_url_list;
@property(retain, nonatomic) NSArray<Optional> *play_track_url_list; // @synthesize play_track_url_list=_play_track_url_list;
@property(retain, nonatomic) NSString<Optional> *video_group_id; // @synthesize video_group_id=_video_group_id;
@property(retain, nonatomic) NSString<Optional> *video_id; // @synthesize video_id=_video_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

