//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQBaseFileCell.h>

@protocol QQFACellEventDelegate;

@interface QQFACell : QQBaseFileCell
{
    int _fileType;
    id <QQFACellEventDelegate> _delegate;
}

@property(nonatomic) id <QQFACellEventDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didActionButtonTouch;
- (void)didHeadTouch;
- (void)getAudioIconWithBlock:(CDUnknownBlockType)arg1;
- (void)getTransferInfoWithBlock:(CDUnknownBlockType)arg1;
- (id)getFileSize;
- (void)getFileIconWithBlock:(CDUnknownBlockType)arg1;
- (id)getAccessibilityValue;
- (void)getHeadImageWithBlock:(CDUnknownBlockType)arg1;
- (void)onMusicPlayStateChange:(id)arg1;
- (void)onStatusChange:(id)arg1;
- (void)onThumbnailDone:(id)arg1;
- (void)onRecall:(id)arg1;
- (void)alertViewClicked:(long long)arg1;
- (void)resumeFile;
- (void)actionResumeFile;
- (void)saveToWeiyun:(id)arg1;
- (void)SendToPC:(id)arg1;
- (void)onFavorite:(id)arg1;
- (void)forwardFile;
- (void)menuActionReply:(id)arg1;
- (void)forwardTo:(id)arg1;
- (void)stopDown:(id)arg1;
- (void)actionAskForMore:(id)arg1;
- (void)resumeDown:(id)arg1;
- (void)downFile;
- (void)downLoad:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onCellLongPressEventCallBack:(int)arg1;
- (_Bool)isResponseAudioPlay;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)getMenuItems;
- (_Bool)canShowMenu;
- (id)getBaseChatViewController;
- (void)setAioModel:(id)arg1;
- (void)addObserver;

@end

