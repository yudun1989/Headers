//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class NSString;

@interface TBLiveVideoDesModel : NSObject <NSCoding>
{
    unsigned int _roomID;
    unsigned int _fromID;
    unsigned long long _startTime;
    NSString *_coverURL;
}

+ (id)createWithQQStoryCPBMessageDecoder:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSString *coverURL; // @synthesize coverURL=_coverURL;
@property(nonatomic) unsigned int fromID; // @synthesize fromID=_fromID;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int roomID; // @synthesize roomID=_roomID;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

