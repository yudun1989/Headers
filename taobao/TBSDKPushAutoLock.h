//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol NSLocking;

@interface TBSDKPushAutoLock : NSObject
{
    id <NSLocking> _lock;
}

- (void).cxx_destruct;
- (void)noop;
- (void)dealloc;
- (id)initWithLock:(id)arg1;

@end

