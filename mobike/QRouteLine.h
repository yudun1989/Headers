//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QRouteLine : NSObject
{
    long long _startNum;
    long long _endNum;
    long long _color;
    long long _speed;
    NSString *_roadName;
}

@property(copy, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
@property(nonatomic) long long speed; // @synthesize speed=_speed;
@property(nonatomic) long long color; // @synthesize color=_color;
@property(nonatomic) long long endNum; // @synthesize endNum=_endNum;
@property(nonatomic) long long startNum; // @synthesize startNum=_startNum;
- (void).cxx_destruct;
- (id)init;

@end

