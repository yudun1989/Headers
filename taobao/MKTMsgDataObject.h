//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface MKTMsgDataObject : NSObject
{
    long long _source;
    NSString *_pullOffset;
    NSString *_dataId;
    NSString *_dataTag;
    NSData *_data;
    double _time;
    double _packTime;
}

@property(nonatomic) double packTime; // @synthesize packTime=_packTime;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *dataTag; // @synthesize dataTag=_dataTag;
@property(retain, nonatomic) NSString *dataId; // @synthesize dataId=_dataId;
@property(retain, nonatomic) NSString *pullOffset; // @synthesize pullOffset=_pullOffset;
@property(nonatomic) long long source; // @synthesize source=_source;
- (void).cxx_destruct;

@end

