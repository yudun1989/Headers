//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class NMActivity, NMFeedNowAD, NMHotChatInfo, NMPublisherInfo, NMTopicInfo, NSArray, NSMutableArray, NSString;

@interface NMFeedModel : QQModel <NSCopying>
{
    unsigned long long _feedType;
    NSString *_feedId;
    NSString *_feedKey;
    _Bool _isHot;
    NSString *_feedContent;
    NSMutableArray *_imgUrlList;
    unsigned long long _publishTime;
    unsigned int _zangCount;
    unsigned int _zangStatus;
    unsigned int _commentCount;
    _Bool _isMine;
    unsigned int _pubStatus;
    NMPublisherInfo *_publisher;
    NMTopicInfo *_topicInfo;
    NMHotChatInfo *_hotChatInfo;
    int _errorCode;
    NSString *_errorMessage;
    double _cellHeight;
    int _xo;
    NSArray *_outsideFeedComments;
    NMFeedNowAD *_feedNowADInfo;
    NMFeedNowAD *_feedNowVideoInfo;
    NMActivity *_activityInfo;
}

@property(retain, nonatomic) NMActivity *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(retain, nonatomic) NMFeedNowAD *feedNowVideoInfo; // @synthesize feedNowVideoInfo=_feedNowVideoInfo;
@property(retain, nonatomic) NMFeedNowAD *feedNowADInfo; // @synthesize feedNowADInfo=_feedNowADInfo;
@property(copy, nonatomic) NSArray *outsideFeedComments; // @synthesize outsideFeedComments=_outsideFeedComments;
- (void).cxx_destruct;
- (void)calulateCellHeight;
- (id)completeContent;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) double cellHeight; // @dynamic cellHeight;
@property(nonatomic) unsigned int commentCount; // @dynamic commentCount;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(copy, nonatomic) NSString *feedContent; // @dynamic feedContent;
@property(copy, nonatomic) NSString *feedId; // @dynamic feedId;
@property(copy, nonatomic) NSString *feedKey; // @dynamic feedKey;
@property(nonatomic) unsigned long long feedType; // @dynamic feedType;
@property(retain, nonatomic) NMHotChatInfo *hotChatInfo; // @dynamic hotChatInfo;
@property(retain, nonatomic) NSMutableArray *imgUrlList; // @dynamic imgUrlList;
@property(nonatomic) _Bool isHot; // @dynamic isHot;
@property(nonatomic) _Bool isMine; // @dynamic isMine;
@property(nonatomic) unsigned int pubStatus; // @dynamic pubStatus;
@property(nonatomic) unsigned long long publishTime; // @dynamic publishTime;
@property(retain, nonatomic) NMPublisherInfo *publisher; // @dynamic publisher;
@property(retain, nonatomic) NMTopicInfo *topicInfo; // @dynamic topicInfo;
@property(nonatomic) unsigned int zangCount; // @dynamic zangCount;
@property(nonatomic) unsigned int zangStatus; // @dynamic zangStatus;

@end

