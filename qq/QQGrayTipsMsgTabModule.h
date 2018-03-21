//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQGrayTipsProcessDelegate-Protocol.h>

@class NSString;

@interface QQGrayTipsMsgTabModule : NSObject <QQGrayTipsProcessDelegate>
{
}

- (_Bool)_isGrayTipContentEqual:(id)arg1 msg2:(id)arg2;
- (_Bool)_isGrayTipExtInfoEqul:(id)arg1 msg2:(id)arg2;
- (id)_queryGrayTipWithTipId:(long long)arg1 tipKey:(id)arg2 uin:(id)arg3 uinTpye:(unsigned long long)arg4;
- (void)modifyGrayTipWithParam:(id)arg1;
- (void)deleteGrayTipWithTipId:(long long)arg1 tipKey:(id)arg2 uin:(id)arg3 uinTpye:(unsigned long long)arg4;
- (void)processWithGrayTipsParam:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

