//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSString;

@interface TBFeedLikeInfoModel : QQModel
{
    _Bool _hasLike;
    unsigned int _totalNum;
    NSString *_feedID;
    NSArray *_likeList;
}

+ (id)createWithPBData:(struct CPBMessageDecoder *)arg1;
@property(nonatomic) _Bool hasLike; // @synthesize hasLike=_hasLike;
@property(nonatomic) unsigned int totalNum; // @synthesize totalNum=_totalNum;
@property(retain, nonatomic) NSArray *likeList; // @synthesize likeList=_likeList;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void)dealloc;
- (void)delFakeFeedVideoLikeInfo;
- (void)insertFakeFeedVideoLikeInfo:(id)arg1;

@end

