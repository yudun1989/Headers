//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class MQZoneMoodEditInputCell, NSString, NSURL;

@protocol MQZoneMoodEditInputCellDelegate <NSObject>
- (void)inputCellCheckTextState:(MQZoneMoodEditInputCell *)arg1 text:(NSString *)arg2;
- (void)inputCellFinishEdit:(MQZoneMoodEditInputCell *)arg1 text:(NSString *)arg2;
- (void)inputCellBecomeActive:(MQZoneMoodEditInputCell *)arg1;
- (void)inputCell:(MQZoneMoodEditInputCell *)arg1 textDidChange:(NSString *)arg2;

@optional
- (_Bool)inputCell:(MQZoneMoodEditInputCell *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (void)inputCellNeedGetUrlInfo:(NSURL *)arg1;
@end

