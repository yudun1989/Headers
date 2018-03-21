//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray, NSString;

@interface TBSNSWeDetailExtendItem : TBJSONModel
{
    _Bool _collected;
    _Bool _favourStatus;
    _Bool _followStatus;
    NSMutableArray *_recommendItems;
    NSMutableArray *_hotCommentItems;
    NSMutableArray *_recentCommentItems;
    NSMutableArray *_nextCommentItems;
    unsigned long long _favourCount;
    unsigned long long _commentCount;
    unsigned long long _feedId;
    NSString *_certIcon;
    NSString *_feedsourceName;
    unsigned long long _fansCount;
    NSString *_scm;
}

@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(nonatomic) unsigned long long fansCount; // @synthesize fansCount=_fansCount;
@property(copy, nonatomic) NSString *feedsourceName; // @synthesize feedsourceName=_feedsourceName;
@property(nonatomic) _Bool followStatus; // @synthesize followStatus=_followStatus;
@property(copy, nonatomic) NSString *certIcon; // @synthesize certIcon=_certIcon;
@property(nonatomic) unsigned long long feedId; // @synthesize feedId=_feedId;
@property(nonatomic) _Bool favourStatus; // @synthesize favourStatus=_favourStatus;
@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) unsigned long long favourCount; // @synthesize favourCount=_favourCount;
@property(nonatomic) _Bool collected; // @synthesize collected=_collected;
@property(retain, nonatomic) NSMutableArray *nextCommentItems; // @synthesize nextCommentItems=_nextCommentItems;
@property(retain, nonatomic) NSMutableArray *recentCommentItems; // @synthesize recentCommentItems=_recentCommentItems;
@property(retain, nonatomic) NSMutableArray *hotCommentItems; // @synthesize hotCommentItems=_hotCommentItems;
@property(retain, nonatomic) NSMutableArray *recommendItems; // @synthesize recommendItems=_recommendItems;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

