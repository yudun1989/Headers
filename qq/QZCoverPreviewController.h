//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/MQZonePullingTableViewController.h>

#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>

@class NSString, QZCoverInfo, QZCoverViewWrapper, QZPreviewVideoModel, UIButton, UIImage, UIView;

@interface QZCoverPreviewController : MQZonePullingTableViewController <QUIActionSheetDelegate>
{
    QZPreviewVideoModel *_videoModel;
    QZCoverViewWrapper *_coverViewWrapper;
    UIView *_contentView;
    UIButton *_useButton;
    UIButton *_checkBox;
    _Bool _waitwifi;
    _Bool _isVipCover;
    _Bool _isSVipCover;
    _Bool _isFreeCover;
    unsigned long long _videoSize;
    unsigned long long _videoDuration;
    long long _fileSize;
    UIImage *_coverImage;
    QZCoverInfo *_coverInfo;
    long long _setCoverReqID;
}

- (void)setTypeWithManybits:(long long)arg1;
- (void)setCoverForQzoneInQQ;
- (id)saveCoverImage:(id)arg1;
- (id)initWithVideoModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

