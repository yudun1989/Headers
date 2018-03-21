//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <QQMainProject/IAsynDownloadImageObserver-Protocol.h>

@class NSString, QQStoryUrlImageView, TBPOIPosterDataModel, UILabel;

@interface POICell : UICollectionViewCell <IAsynDownloadImageObserver>
{
    QQStoryUrlImageView *_emojiIcon;
    UILabel *_tx;
    TBPOIPosterDataModel *_emojiModel;
}

@property(retain, nonatomic) TBPOIPosterDataModel *emojiModel; // @synthesize emojiModel=_emojiModel;
@property(retain, nonatomic) UILabel *tx; // @synthesize tx=_tx;
@property(retain, nonatomic) QQStoryUrlImageView *emojiIcon; // @synthesize emojiIcon=_emojiIcon;
- (void)downloadImageFinished:(id)arg1;
- (void)loadImage:(id)arg1;
- (void)setModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

