//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, PLFeedsListLbsInfo, PLFeedsListUserInfo;

@interface PLMediaDetailCommonInfo : NSObject
{
    _Bool _isLocal;
    unsigned int _common_type;
    PLFeedsListUserInfo *_userInfo;
    PLFeedsListUserInfo *_anchorInfo;
    unsigned long long _createTime;
    unsigned long long _feedType;
    unsigned long long _feedSource;
    NSString *_feedsId;
    NSMutableArray *_richTitles;
    unsigned long long _viewTimes;
    unsigned long long _isListen;
    unsigned long long _isLike;
    unsigned long long _likeNum;
    NSString *_shareUrl;
    unsigned long long _followUid;
    NSString *_jumpPicUrl;
    NSString *_picUrl;
    PLFeedsListLbsInfo *_lbsInfo;
}

@property(retain, nonatomic) PLFeedsListLbsInfo *lbsInfo; // @synthesize lbsInfo=_lbsInfo;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) unsigned int common_type; // @synthesize common_type=_common_type;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *jumpPicUrl; // @synthesize jumpPicUrl=_jumpPicUrl;
@property(nonatomic) unsigned long long followUid; // @synthesize followUid=_followUid;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(nonatomic) unsigned long long likeNum; // @synthesize likeNum=_likeNum;
@property(nonatomic) unsigned long long isLike; // @synthesize isLike=_isLike;
@property(nonatomic) unsigned long long isListen; // @synthesize isListen=_isListen;
@property(nonatomic) unsigned long long viewTimes; // @synthesize viewTimes=_viewTimes;
@property(retain, nonatomic) NSMutableArray *richTitles; // @synthesize richTitles=_richTitles;
@property(copy, nonatomic) NSString *feedsId; // @synthesize feedsId=_feedsId;
@property(nonatomic) unsigned long long feedSource; // @synthesize feedSource=_feedSource;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) PLFeedsListUserInfo *anchorInfo; // @synthesize anchorInfo=_anchorInfo;
@property(retain, nonatomic) PLFeedsListUserInfo *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)init;

@end

