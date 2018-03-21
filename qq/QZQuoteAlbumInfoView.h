//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/IQZUrlDownloaderDelegate-Protocol.h>

@class NSString, QZJPhotoAlbum, UIImageView, UILabel;

@interface QZQuoteAlbumInfoView : UIView <IQZUrlDownloaderDelegate>
{
    UIImageView *_coverImgView;
    UILabel *_albumNameLabel;
    UILabel *_permissionLabel;
    UIImageView *_arrowImgView;
    long long _requestID;
    unsigned long long _entrance;
    QZJPhotoAlbum *_album;
}

@property(retain, nonatomic) QZJPhotoAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateUIWithAlbum:(id)arg1;
- (void)onGetAlbumNotify:(id)arg1;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1 entrance:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

