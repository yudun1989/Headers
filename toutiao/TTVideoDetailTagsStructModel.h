//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, TTVideoDetailSourceTagStructModel;
@protocol Optional, TTVideoDetailSourceTagStructModel><Optional;

@interface TTVideoDetailTagsStructModel : JSONModel
{
    TTVideoDetailSourceTagStructModel<Optional> *_source_tag;
    NSArray<TTVideoDetailSourceTagStructModel><Optional> *_related_tags;
    NSNumber<Optional> *_video_searchtag_position;
}

@property(retain, nonatomic) NSNumber<Optional> *video_searchtag_position; // @synthesize video_searchtag_position=_video_searchtag_position;
@property(retain, nonatomic) NSArray<TTVideoDetailSourceTagStructModel><Optional> *related_tags; // @synthesize related_tags=_related_tags;
@property(retain, nonatomic) TTVideoDetailSourceTagStructModel<Optional> *source_tag; // @synthesize source_tag=_source_tag;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

