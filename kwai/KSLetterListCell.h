//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSTableViewCell.h"

@class CAAnimationlessLayer, KMThread, KSEdgeRoundImageView, KSLetterList, KSRoundedImageAsset, UIImageView, UILabel;

@interface KSLetterListCell : KSTableViewCell
{
    KMThread *_thread;
    KSLetterList *_letterList;
    KSEdgeRoundImageView *_headerView;
    KSRoundedImageAsset *_imageAsset;
    UIImageView *_sendStatusImageView;
    UILabel *_nameLabel;
    UILabel *_contentLabel;
    UILabel *_timeLabel;
    CAAnimationlessLayer *_line;
    UILabel *_numberLabel;
}

+ (double)cellHeight;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) CAAnimationlessLayer *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *sendStatusImageView; // @synthesize sendStatusImageView=_sendStatusImageView;
@property(retain, nonatomic) KSRoundedImageAsset *imageAsset; // @synthesize imageAsset=_imageAsset;
@property(retain, nonatomic) KSEdgeRoundImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) KSLetterList *letterList; // @synthesize letterList=_letterList;
@property(retain, nonatomic) KMThread *thread; // @synthesize thread=_thread;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)cellRightUtilityButtons;
- (void)_refreshReadedStatus;
- (void)layoutSubviews;
- (void)lazyLayout;
- (void)hiddenPoint;
- (void)drawWithThread:(id)arg1 letterList:(id)arg2 fullLineStyle:(_Bool)arg3;
- (void)dealloc;
- (id)init;

@end
