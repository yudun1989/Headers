//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBRspGeneralListModel.h>

@class NSString;

@interface TBRspGetHotTopicVideoListModel : TBRspGeneralListModel
{
    unsigned int _videoCount;
    unsigned long long _totalTime;
    NSString *_topicDes;
}

@property(retain, nonatomic) NSString *topicDes; // @synthesize topicDes=_topicDes;
@property(nonatomic) unsigned int videoCount; // @synthesize videoCount=_videoCount;
@property(nonatomic) unsigned long long totalTime; // @synthesize totalTime=_totalTime;
- (void)dealloc;
- (id)description;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;

@end

