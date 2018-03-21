//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class O2OLCNewQuestionProAnimationItem, UIImageView, UILabel;

@interface O2OLCNewQuestionProInfoView : UIView
{
    O2OLCNewQuestionProAnimationItem *_animationItem;
    UIImageView *_logoView;
    UIImageView *_checkMark;
    UILabel *_nameLabel;
}

@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *checkMark; // @synthesize checkMark=_checkMark;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) O2OLCNewQuestionProAnimationItem *animationItem; // @synthesize animationItem=_animationItem;
- (void).cxx_destruct;
- (void)startAnimation;
- (void)prepareForAnimation;
- (void)adjustPosition;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithAnimationItem:(id)arg1;

@end

