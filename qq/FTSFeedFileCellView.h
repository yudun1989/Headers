//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FTSBaseCellView.h>

@class FTSHighlightRichLabel, QQAsynUrlImageView, UIImageView, UILabel;

@interface FTSFeedFileCellView : FTSBaseCellView
{
    QQAsynUrlImageView *_mediaIconView;
    UIImageView *_failedIconView;
    FTSHighlightRichLabel *_titleLabel;
    UILabel *_profileLabel;
    FTSHighlightRichLabel *_srcLabel;
}

- (void).cxx_destruct;
- (void)onThumbnailDone:(id)arg1;
- (void)loadCellWithFTSFeedInfo:(id)arg1;
- (void)setMediaTypeImage:(id)arg1;
- (void)initUI;
- (void)dealloc;
- (void)initEvent;
- (id)initWithFrame:(struct CGRect)arg1;

@end

