//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSString;

@interface NowStoryTopicRoomListRespModel : QQModel
{
    long long _isend;
    long long _total_times;
    NSString *_banner;
    NSArray *_roomList;
}

@property(retain, nonatomic) NSArray *roomList; // @synthesize roomList=_roomList;
@property(retain, nonatomic) NSString *banner; // @synthesize banner=_banner;
@property(nonatomic) long long total_times; // @synthesize total_times=_total_times;
@property(nonatomic) long long isend; // @synthesize isend=_isend;
- (void).cxx_destruct;
- (id)description;

@end

