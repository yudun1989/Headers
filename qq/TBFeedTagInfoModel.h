//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSString, TBVideoLabelItem;

@interface TBFeedTagInfoModel : QQModel
{
    _Bool _isEnd;
    unsigned int _date;
    unsigned int _feedSeq;
    int _videoTotalNum;
    NSString *_feedID;
    NSString *_nextCookie;
    TBVideoLabelItem *_tagInfo;
    NSArray *_videoInfo;
    NSString *_content;
    NSString *_schema;
    NSString *_blur;
    unsigned long long _recommendID;
    NSString *_titleWording;
}

+ (id)createWithPBData:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSString *titleWording; // @synthesize titleWording=_titleWording;
@property(nonatomic) unsigned long long recommendID; // @synthesize recommendID=_recommendID;
@property(retain, nonatomic) NSString *blur; // @synthesize blur=_blur;
@property(retain, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) int videoTotalNum; // @synthesize videoTotalNum=_videoTotalNum;
@property(nonatomic) unsigned int feedSeq; // @synthesize feedSeq=_feedSeq;
@property(retain, nonatomic) TBVideoLabelItem *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(retain, nonatomic) NSString *nextCookie; // @synthesize nextCookie=_nextCookie;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) unsigned int date; // @synthesize date=_date;
- (void)dealloc;

@end

