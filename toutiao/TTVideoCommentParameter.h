//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTApiParameter.h"

@class NSNumber, NSString;

@interface TTVideoCommentParameter : TTApiParameter
{
    NSNumber *_aggr_type;
    NSString *_item_id;
    NSString *_group_id;
    NSString *_ad_id;
    NSNumber *_fold;
    NSNumber *_offset;
    NSNumber *_top_comment_id;
    NSNumber *_count;
    NSString *_zzids;
}

@property(retain, nonatomic) NSString *zzids; // @synthesize zzids=_zzids;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *top_comment_id; // @synthesize top_comment_id=_top_comment_id;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSNumber *fold; // @synthesize fold=_fold;
@property(copy, nonatomic) NSString *ad_id; // @synthesize ad_id=_ad_id;
@property(copy, nonatomic) NSString *group_id; // @synthesize group_id=_group_id;
@property(copy, nonatomic) NSString *item_id; // @synthesize item_id=_item_id;
@property(retain, nonatomic) NSNumber *aggr_type; // @synthesize aggr_type=_aggr_type;
- (void).cxx_destruct;
- (id)moreRequestModel;
- (id)requestModel;

@end

