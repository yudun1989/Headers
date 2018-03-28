//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class FRDiscussCommentStructModel, NSNumber, NSString;
@protocol Optional;

@interface FRTtdiscussV2CommitCommentResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    NSNumber *_thread_id;
    NSNumber *_comment_id;
    FRDiscussCommentStructModel *_comment;
    NSString<Optional> *_err_tips;
}

@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) FRDiscussCommentStructModel *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSNumber *comment_id; // @synthesize comment_id=_comment_id;
@property(retain, nonatomic) NSNumber *thread_id; // @synthesize thread_id=_thread_id;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

