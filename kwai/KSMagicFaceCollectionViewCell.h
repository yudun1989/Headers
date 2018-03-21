//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DTProgressView, KSMagicFacePickViewModelMagicFaceItem, NSLayoutConstraint, UIButton, UIColor, UIImageView, UILabel, UIView;

@interface KSMagicFaceCollectionViewCell : UICollectionViewCell
{
    _Bool _shouldDisplayItemName;
    KSMagicFacePickViewModelMagicFaceItem *_item;
    UIColor *_progressColor;
    UIImageView *_imageView;
    UIImageView *_dotImage;
    UIButton *_downLoadButton;
    UILabel *_progressLabel;
    DTProgressView *_progressBackgroundView;
    DTProgressView *_progressView;
    UIView *_contentContainer;
    UILabel *_nameLabel;
    UIImageView *_highlightedBackgroundView;
    NSLayoutConstraint *_imageViewBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *imageViewBottomConstraint; // @synthesize imageViewBottomConstraint=_imageViewBottomConstraint;
@property(retain, nonatomic) UIImageView *highlightedBackgroundView; // @synthesize highlightedBackgroundView=_highlightedBackgroundView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(retain, nonatomic) DTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) DTProgressView *progressBackgroundView; // @synthesize progressBackgroundView=_progressBackgroundView;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UIButton *downLoadButton; // @synthesize downLoadButton=_downLoadButton;
@property(retain, nonatomic) UIImageView *dotImage; // @synthesize dotImage=_dotImage;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(nonatomic) _Bool shouldDisplayItemName; // @synthesize shouldDisplayItemName=_shouldDisplayItemName;
@property(retain, nonatomic) KSMagicFacePickViewModelMagicFaceItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)setBackgroundHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (void)hideProgress:(_Bool)arg1;
- (void)showDot:(_Bool)arg1;
- (void)removeProcessObserver;
- (void)addProcessObserver;
- (void)updateLayout;
- (void)setProgress:(float)arg1;
- (void)tintColorDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

