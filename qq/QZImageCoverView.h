//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBaseCoverView.h>

@class QZCoverGameData, UIButton, UIImageView;

@interface QZImageCoverView : QZBaseCoverView
{
    UIImageView *_imageView;
    QZCoverGameData *_gameData;
    UIButton *_enterGameBtn;
}

- (void).cxx_destruct;
- (_Bool)shouldShowLoading;
- (void)enterGame;
- (void)showEnterGameBtn;
- (void)requestFinished:(id)arg1;
- (void)updateCover:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

