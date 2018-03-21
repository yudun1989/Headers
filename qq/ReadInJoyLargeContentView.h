//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/ReadInJoyContentView.h>

#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, ReadInJoyVideoCoverView, ReadInjoyAsynImageView, ReadInjoyGalleryView, UILabel;

@interface ReadInJoyLargeContentView : ReadInJoyContentView <UIGestureRecognizerDelegate>
{
    UILabel *_cornerMark;
    ReadInjoyAsynImageView *_imgView;
    ReadInjoyGalleryView *_galleryView;
    ReadInJoyVideoCoverView *_videoCoverView;
}

@property(retain, nonatomic) ReadInJoyVideoCoverView *videoCoverView; // @synthesize videoCoverView=_videoCoverView;
@property(retain, nonatomic) ReadInjoyGalleryView *galleryView; // @synthesize galleryView=_galleryView;
@property(retain, nonatomic) ReadInjoyAsynImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UILabel *cornerMark; // @synthesize cornerMark=_cornerMark;
- (void)layoutSubviewsExt;
- (void)layoutSubviewsExtForUGC;
- (void)setImgViewShowInfo;
- (void)showContentView;
- (id)getImgUrlString;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

