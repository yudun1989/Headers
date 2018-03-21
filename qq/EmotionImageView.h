//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBaseAutoPlayImageView.h>

@class NSString, UIActivityIndicatorView;

@interface EmotionImageView : QZBaseAutoPlayImageView
{
    _Bool _dataLoaded;
    _Bool _enableAnimation;
    _Bool _lazyLoad;
    NSString *_url;
    UIActivityIndicatorView *_loadingView;
}

+ (id)loadingQueue;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool lazyLoad; // @synthesize lazyLoad=_lazyLoad;
@property(nonatomic) _Bool enableAnimation; // @synthesize enableAnimation=_enableAnimation;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)stop;
- (void)play;
- (void)playImage:(id)arg1;
- (void)cancelLoadGif;
- (void)startLoadGifShowLoading:(_Bool)arg1;
- (void)startLoadGif;
- (void)requestImageShowLoading:(_Bool)arg1;
- (void)clearGIFDecodeTarget;
- (void)clearUrl;
- (void)loadGifDataShowLoading:(_Bool)arg1;
- (void)loadGifData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

