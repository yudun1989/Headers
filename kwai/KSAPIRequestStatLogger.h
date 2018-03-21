//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSAPIRequestStatLogger : NSObject
{
    int _category;
    long long _successCount;
    long long _failCount;
    double _lastLogTime;
}

+ (id)LogRequestLogger;
+ (id)oldLogRequestLogger;
+ (id)restRequestLogger;
+ (id)loggerWithCategory:(int)arg1;
@property(nonatomic) double lastLogTime; // @synthesize lastLogTime=_lastLogTime;
@property(nonatomic) long long failCount; // @synthesize failCount=_failCount;
@property(nonatomic) long long successCount; // @synthesize successCount=_successCount;
- (void)requestFinished:(_Bool)arg1;
- (id)initWithCategory:(int)arg1;

@end

