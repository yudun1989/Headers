//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@protocol QQLoadObserver <NSObject>

@optional
- (void)loader:(id)arg1 didUpdateStatus:(long long)arg2 userData:(id)arg3;
- (void)loader:(id)arg1 didUpdateProgress:(double)arg2 userData:(id)arg3;
- (long long)priorityForLoader:(id)arg1;
@end

