//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class FRTipsStructModel, NSArray, NSNumber, NSString;
@protocol FRUgcDataStructModel><Optional, Optional;

@interface FRConcernV1ThreadListResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    NSString<Optional> *_err_tips;
    FRTipsStructModel<Optional> *_tips;
    long long _has_more;
    NSNumber *_min_cursor;
    NSNumber *_max_cursor;
    NSArray<FRUgcDataStructModel><Optional> *_threads;
}

@property(retain, nonatomic) NSArray<FRUgcDataStructModel><Optional> *threads; // @synthesize threads=_threads;
@property(retain, nonatomic) NSNumber *max_cursor; // @synthesize max_cursor=_max_cursor;
@property(retain, nonatomic) NSNumber *min_cursor; // @synthesize min_cursor=_min_cursor;
@property(nonatomic) long long has_more; // @synthesize has_more=_has_more;
@property(retain, nonatomic) FRTipsStructModel<Optional> *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

