//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@protocol IDataPointFileMsgDelegate <NSObject>

@optional
- (void)OnDataPointFileMsgSendRet:(unsigned long long)arg1 errorCode:(int)arg2;
- (void)OnDataPointFileMsgProgress:(unsigned long long)arg1 progressInPercent:(int)arg2;
@end

