//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSRecursiveLock, NSString;
@protocol TTFingerprintManagerDelegate;

@interface TTFingerprintManager : NSObject
{
    _Bool _hasObserveNetworkChange;
    NSRecursiveLock *_didFetchlock;
    struct _opaque_pthread_mutex_t _blockslock;
    NSMutableArray *_blocksArray;
    NSString *_fingerprint;
    unsigned long long _bgTask;
    id <TTFingerprintManagerDelegate> _delegate;
}

+ (id)getDeviceInfoURL;
+ (id)collectInfo;
+ (_Bool)needEncrypt;
+ (id)sharedInstance;
@property(nonatomic) __weak id <TTFingerprintManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long bgTask; // @synthesize bgTask=_bgTask;
- (void).cxx_destruct;
- (_Bool)hasFecthed;
@property(copy, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
- (void)connectionChanged:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)invalidBgTaskIfNeeded;
- (void)startFetchWithMaxTimes:(long long)arg1;
- (void)saveFingerprint:(id)arg1 maxRetryTimes:(long long)arg2;
- (id)generatedPostBody;
- (void)startFetchIfNeededWithRetryTimes:(long long)arg1;
- (void)addFetchFingerprintBlockIfNeeded:(CDUnknownBlockType)arg1;
- (void)setDidFetchFingerprintBlock:(CDUnknownBlockType)arg1;
- (void)startFetchFingerprintIfNeeded;
- (id)init;

@end

