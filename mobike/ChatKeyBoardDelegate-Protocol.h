//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ChatKeyBoard, NSString, UITextView;

@protocol ChatKeyBoardDelegate <NSObject>

@optional
- (void)chatTableViewScrollToBottom;
- (void)sendImageWithSourceType:(long long)arg1;
- (_Bool)sendTextMessage:(NSString *)arg1;
- (void)chatKeyBoard:(ChatKeyBoard *)arg1 didSelectMorePanelItemIndex:(long long)arg2;
- (void)chatKeyBoardSetFaceSubject:(ChatKeyBoard *)arg1;
- (void)chatKeyBoardAddFaceSubject:(ChatKeyBoard *)arg1;
- (void)chatKeyBoardTextViewDidChange:(UITextView *)arg1;
- (void)chatKeyBoardSendText:(NSString *)arg1;
- (void)chatKeyBoardTextViewDidBeginEditing:(UITextView *)arg1;
- (void)chatKeyBoardContineRecording:(ChatKeyBoard *)arg1;
- (void)chatKeyBoardWillCancelRecoding:(ChatKeyBoard *)arg1;
- (void)chatKeyBoardDidFinishRecoding:(ChatKeyBoard *)arg1;
- (void)chatKeyBoardDidCancelRecording:(ChatKeyBoard *)arg1;
- (void)chatKeyBoardDidStartRecording:(ChatKeyBoard *)arg1;
@end

