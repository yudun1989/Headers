//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSUPageService, KS_comment, NSArray;

@interface KSFeedCommentRepliesModel : NSObject
{
    struct KS_comment *_comment;
    NSArray *_replies;
    KSUPageService *_pageService;
}

@property(readonly, nonatomic) KSUPageService *pageService; // @synthesize pageService=_pageService;
@property(retain, nonatomic) NSArray *replies; // @synthesize replies=_replies;
@property(readonly, nonatomic) KS_comment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (void)removeReply:(struct KS_comment *)arg1;
- (void)insertReply:(struct KS_comment *)arg1;
@property(readonly, nonatomic) _Bool hasMore;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)reset;
- (id)initWithComment:(struct KS_comment *)arg1;

@end

