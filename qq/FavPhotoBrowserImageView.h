//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQImageView.h>

@protocol FavPhotoBrowserImageViewDelegate;

@interface FavPhotoBrowserImageView : QQImageView
{
    id <FavPhotoBrowserImageViewDelegate> _favNotifyDelegate;
}

@property(nonatomic) id <FavPhotoBrowserImageViewDelegate> favNotifyDelegate; // @synthesize favNotifyDelegate=_favNotifyDelegate;
- (void)notifyDownloadProgress:(id)arg1;
- (void)notifyDownloadSuccess:(id)arg1;
- (void)notifyDownloadFail:(id)arg1;
- (void)notifyNetWorkError:(id)arg1;
- (void)downloadImageIfNeeded;
- (void)loadImage;
- (void)setPhoto:(id)arg1;

@end

