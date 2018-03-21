//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString, NSURL, UILabel, UIView;

@interface MVPosterImageView : UIImageView
{
    UILabel *_placeholderLabel;
    _Bool _isShowPlayButton;
    _Bool _shouldUseBigPlay;
    NSURL *_imageUrl;
    NSString *_mark;
    NSString *_starMark;
    CDUnknownBlockType _touchedBlock;
    UIView *_markBgView;
    UILabel *_markLabel;
    UIView *_starMarkBgView;
    UILabel *_starMarkLabel;
    UIImageView *_playImageView;
}

+ (id)placeholderImage;
@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) UILabel *starMarkLabel; // @synthesize starMarkLabel=_starMarkLabel;
@property(retain, nonatomic) UIView *starMarkBgView; // @synthesize starMarkBgView=_starMarkBgView;
@property(retain, nonatomic) UILabel *markLabel; // @synthesize markLabel=_markLabel;
@property(retain, nonatomic) UIView *markBgView; // @synthesize markBgView=_markBgView;
@property(nonatomic) _Bool shouldUseBigPlay; // @synthesize shouldUseBigPlay=_shouldUseBigPlay;
@property(nonatomic) _Bool isShowPlayButton; // @synthesize isShowPlayButton=_isShowPlayButton;
@property(copy, nonatomic) CDUnknownBlockType touchedBlock; // @synthesize touchedBlock=_touchedBlock;
@property(copy, nonatomic) NSString *starMark; // @synthesize starMark=_starMark;
@property(copy, nonatomic) NSString *mark; // @synthesize mark=_mark;
@property(retain, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)setImage:(id)arg1;
- (void)_initPlayImageIfNeeded;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)updateTags;
- (void)updateConstraints;
- (void)_commonSetup;
- (void)setIconSize:(double)arg1;
- (id)placeholderLabel;

@end

