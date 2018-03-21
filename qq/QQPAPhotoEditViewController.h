//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQPhotoMultimediaViewController.h>

#import <QQMainProject/ActionSheetDataDelegate-Protocol.h>

@class NSString, QQWebShareActionSheet;
@protocol QQPAPhotoEditDelegate;

@interface QQPAPhotoEditViewController : QQPhotoMultimediaViewController <ActionSheetDataDelegate>
{
    int _sourceType;
    QQWebShareActionSheet *_shareActionSheet;
    id <QQPAPhotoEditDelegate> _shareDelegate;
}

@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) id <QQPAPhotoEditDelegate> shareDelegate; // @synthesize shareDelegate=_shareDelegate;
@property(retain, nonatomic) QQWebShareActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
- (int)getFriendSelectedVCType;
- (void)shareWithWeChatCircle;
- (void)shareWithWeChatFriend;
- (void)shareWithSinaWeibo;
- (void)shareWithQZone;
- (void)shareWithFriend;
- (id)getDataForConfig:(id)arg1;
- (id)getDataForShareItem:(id)arg1 onThisItem:(int)arg2;
- (id)getQQActivityViewTitles;
- (void)onSendButtonClicked;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUIImage:(id)arg1 sourceType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

