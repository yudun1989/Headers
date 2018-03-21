//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQFlipImageView.h>

#import <QQMainProject/IAsynDownloadImageObserver-Protocol.h>

@class NSString, UIImage;

@interface QQPublicAccountFolderAsynUrlImageView : QQFlipImageView <IAsynDownloadImageObserver>
{
    NSString *_url;
    NSString *_sourceKey;
    UIImage *_defaultImage;
    struct CGSize _maxSize;
    _Bool _isLocalPath;
    _Bool _isRound;
    _Bool _isNoneAsynLoad;
    UIImage *_loadFailImage;
    _Bool _isResizeDefaultImage;
    _Bool _isCornerCropped;
    _Bool _resizeDisable;
    _Bool _isDrawFrame;
    unsigned long long _startTime;
}

- (void).cxx_destruct;
- (void)downLoadImageFail:(id)arg1;
- (void)downloadImageFinished:(id)arg1;
- (void)asynLoadImageFinished:(id)arg1;
- (void)asynLoadImage:(id)arg1;
- (void)asynLoadImage:(id)arg1 cornerType:(int)arg2;
- (void)loadUrlImage:(id)arg1 withPuin:(id)arg2;
- (void)setImage:(id)arg1;
- (void)addLoadUrlImageTask:(id)arg1 withPuin:(id)arg2;
- (void)setImageToCache:(id)arg1 withKey:(id)arg2;
- (id)getImageFromCache:(id)arg1;
- (id)getImageKey:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 defaultImage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) UIImage *defaultImage; // @dynamic defaultImage;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isCornerCropped; // @dynamic isCornerCropped;
@property(nonatomic) _Bool isDrawFrame; // @dynamic isDrawFrame;
@property(nonatomic) _Bool isLocalPath; // @dynamic isLocalPath;
@property(nonatomic) _Bool isNoneAsynLoad; // @dynamic isNoneAsynLoad;
@property(nonatomic) _Bool isResizeDefaultImage; // @dynamic isResizeDefaultImage;
@property(nonatomic) _Bool isRound; // @dynamic isRound;
@property(retain, nonatomic) UIImage *loadFailImage; // @dynamic loadFailImage;
@property(nonatomic) struct CGSize maxSize; // @dynamic maxSize;
@property(nonatomic) _Bool resizeDisable; // @dynamic resizeDisable;
@property(retain, nonatomic) NSString *sourceKey; // @dynamic sourceKey;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

