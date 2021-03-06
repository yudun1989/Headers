//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class FRMovieReviewBasicInfoStructModel, NSArray, NSNumber, NSString;
@protocol FRGroupInfoStructModel><Optional, FRUgcDataStructModel><Optional, Optional;

@interface FRTtdiscussV1MovieListResponseModel : TTResponseModel
{
    NSNumber *_ugc_min_cursor;
    NSNumber *_ugc_max_cursor;
    NSNumber *_movie_min_cursor;
    NSNumber *_movie_max_cursor;
    NSNumber *_ugc_has_more;
    NSNumber *_movie_has_more;
    NSArray<FRGroupInfoStructModel><Optional> *_group_list;
    NSArray<FRUgcDataStructModel><Optional> *_thread_list;
    FRMovieReviewBasicInfoStructModel<Optional> *_review_info;
    NSNumber *_err_no;
    NSString<Optional> *_err_tips;
}

@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
@property(retain, nonatomic) FRMovieReviewBasicInfoStructModel<Optional> *review_info; // @synthesize review_info=_review_info;
@property(retain, nonatomic) NSArray<FRUgcDataStructModel><Optional> *thread_list; // @synthesize thread_list=_thread_list;
@property(retain, nonatomic) NSArray<FRGroupInfoStructModel><Optional> *group_list; // @synthesize group_list=_group_list;
@property(retain, nonatomic) NSNumber *movie_has_more; // @synthesize movie_has_more=_movie_has_more;
@property(retain, nonatomic) NSNumber *ugc_has_more; // @synthesize ugc_has_more=_ugc_has_more;
@property(retain, nonatomic) NSNumber *movie_max_cursor; // @synthesize movie_max_cursor=_movie_max_cursor;
@property(retain, nonatomic) NSNumber *movie_min_cursor; // @synthesize movie_min_cursor=_movie_min_cursor;
@property(retain, nonatomic) NSNumber *ugc_max_cursor; // @synthesize ugc_max_cursor=_ugc_max_cursor;
@property(retain, nonatomic) NSNumber *ugc_min_cursor; // @synthesize ugc_min_cursor=_ugc_min_cursor;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

