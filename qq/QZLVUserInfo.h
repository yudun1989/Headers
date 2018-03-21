//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, UIViewController;

@interface QZLVUserInfo : NSObject
{
    _Bool _isInLiveRoom;
    _Bool _isInMicRoom;
    long long _tmpLiveRoomId;
    long long _liveRoomId;
    long long _liveType;
    UIViewController *_liveController;
    NSNumber *_channelID;
    NSString *_livePlayUrl;
    NSString *_fakeRoomId;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *fakeRoomId; // @synthesize fakeRoomId=_fakeRoomId;
@property(retain, nonatomic) NSString *livePlayUrl; // @synthesize livePlayUrl=_livePlayUrl;
@property(retain, nonatomic) NSNumber *channelID; // @synthesize channelID=_channelID;
@property(nonatomic) __weak UIViewController *liveController; // @synthesize liveController=_liveController;
@property(nonatomic) long long liveType; // @synthesize liveType=_liveType;
@property(nonatomic) long long liveRoomId; // @synthesize liveRoomId=_liveRoomId;
@property(nonatomic) long long tmpLiveRoomId; // @synthesize tmpLiveRoomId=_tmpLiveRoomId;
@property(nonatomic) _Bool isInMicRoom; // @synthesize isInMicRoom=_isInMicRoom;
@property(nonatomic) _Bool isInLiveRoom; // @synthesize isInLiveRoom=_isInLiveRoom;
- (void).cxx_destruct;
- (id)init;

@end

