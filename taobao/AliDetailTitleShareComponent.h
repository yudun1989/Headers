//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailTitleComponent, AliDetailTitlePropsComponent, AliDetailTitleShareModel, TBDetailGroupItemButton, UIView;

@interface AliDetailTitleShareComponent : AliDetailComponent
{
    _Bool _isSessionInvalid;
    _Bool _tryAutoLoginCounter;
    TBDetailGroupItemButton *_shareButton;
    AliDetailTitleComponent *_titleComponent;
    AliDetailTitlePropsComponent *_titlePropsComponent;
    AliDetailTitleShareModel *_titleShareModel;
    UIView *_verticalLine;
}

+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(nonatomic) _Bool tryAutoLoginCounter; // @synthesize tryAutoLoginCounter=_tryAutoLoginCounter;
@property(nonatomic) _Bool isSessionInvalid; // @synthesize isSessionInvalid=_isSessionInvalid;
@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(nonatomic) __weak AliDetailTitleShareModel *titleShareModel; // @synthesize titleShareModel=_titleShareModel;
@property(retain, nonatomic) AliDetailTitlePropsComponent *titlePropsComponent; // @synthesize titlePropsComponent=_titlePropsComponent;
@property(retain, nonatomic) AliDetailTitleComponent *titleComponent; // @synthesize titleComponent=_titleComponent;
@property(retain, nonatomic) TBDetailGroupItemButton *shareButton; // @synthesize shareButton=_shareButton;
- (void).cxx_destruct;
- (void)clickShare:(id)arg1;
- (void)addChildView;
- (void)layoutSubviews;
- (void)setShareButtonTitleAndIcon:(id)arg1;
- (_Bool)hasImportantProps;
- (void)setObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

