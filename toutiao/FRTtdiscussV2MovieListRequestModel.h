//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface FRTtdiscussV2MovieListRequestModel : TTRequestModel
{
    NSNumber *_forum_id;
    NSString *_movie_id;
    NSNumber *_count;
    NSNumber *_movie_cursor;
    NSNumber *_ugc_cursor;
    NSNumber<Optional> *_sort_type;
}

@property(retain, nonatomic) NSNumber<Optional> *sort_type; // @synthesize sort_type=_sort_type;
@property(retain, nonatomic) NSNumber *ugc_cursor; // @synthesize ugc_cursor=_ugc_cursor;
@property(retain, nonatomic) NSNumber *movie_cursor; // @synthesize movie_cursor=_movie_cursor;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *movie_id; // @synthesize movie_id=_movie_id;
@property(retain, nonatomic) NSNumber *forum_id; // @synthesize forum_id=_forum_id;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

